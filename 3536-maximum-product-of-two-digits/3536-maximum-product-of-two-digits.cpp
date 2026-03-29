class Solution {
public:
    int maxProduct(int n) {
        int i=0;
        int arr[10];
        while(n > 0){
            arr[i++] = n % 10;
            n = n / 10;
         }
        
        sort(arr, arr + i);
        
        int x = arr[i-1]*arr[i-2];
        return x;
    }
};