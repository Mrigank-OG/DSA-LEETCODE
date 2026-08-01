class Solution {
public:
    int hammingWeight(int n) {
     int count=0;
     int x;
     while(n!=0){
        n=n&n-1;
        count++;
        
     } 
     return count;
    }
};
