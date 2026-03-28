class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i,j;
        double median=0;
        int m = nums1.size();
        int n = nums2.size();
        int x = n + m;
        int arr[x];
        for(i=0;i<m;i++){
            arr[i] = nums1[i];
        }

        for(j=0;j<n;j++){
            arr[m+j] = nums2[j];
        }

        sort(arr, arr + x);

        if(x%2==1){
            int y = x/2;
            median = arr[y];
        }

        else if(x%2==0){
            int y = (x/2)-1;
            int z = y+1;
            median = (arr[y]+arr[z])/2.0;
        }

        return median;
    }
};