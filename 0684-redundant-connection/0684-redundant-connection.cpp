class Solution {
public:
    vector<int> parent;

    int find(int x)
    {
        if(parent[x] < 0)
            return x;

        return parent[x] = find(parent[x]);
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges)
    {
        int n = edges.size();

        parent.resize(n + 1, -1);

        for(int i = 0; i < n; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];

            int pu = find(u);
            int pv = find(v);

            if(pu == pv)
                return edges[i];

            if(parent[pu] > parent[pv])
            {
                int temp = pu;
                pu = pv;
                pv = temp;
            }

            parent[pu] += parent[pv];
            parent[pv] = pu;
        }

        return {};
    }
};