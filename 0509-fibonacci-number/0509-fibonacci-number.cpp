class Solution {
public:
    int fib(int n){
        int i, n1 = 0, n2 = 1;
        int num;
        if (n < 2) {
            return n;
        } 
            
        for (i = 2; i <= n; i++) {
    
            num = n1 + n2;
            n1 = n2;
            n2 = num;
        }
        return num;    
    }
};