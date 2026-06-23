class Solution {
public:
    static const int MOD = 1000000007;

    int zigZagArrays(int n, int l, int r) {

        int m = r - l + 1;

        vector<int> up(m), down(m);

        for (int x = 0; x < m; x++) {
            up[x] = x;
            down[x] = m - 1 - x;
        }

        vector<int> pref(m + 1);
        vector<int> suff(m + 1);
        vector<int> newUp(m);
        vector<int> newDown(m);

        for (int len = 3; len <= n; len++) {

            pref[0] = 0;
            for (int i = 0; i < m; i++) {
                pref[i + 1] = (pref[i] + down[i]) % MOD;
            }

            suff[m] = 0;
            for (int i = m - 1; i >= 0; i--) {
                suff[i] = (suff[i + 1] + up[i]) % MOD;
            }

            for (int x = 0; x < m; x++) {
                newUp[x] = pref[x];
                newDown[x] = suff[x + 1];
            }

            up.swap(newUp);
            down.swap(newDown);
        }

        long long ans = 0;

        for (int x = 0; x < m; x++) {
            ans = (ans + up[x] + down[x]) % MOD;
        }

        return (int)ans;
    }
};