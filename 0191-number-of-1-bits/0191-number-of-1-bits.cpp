class Solution {
public:
    int hammingWeight(int n) {
     int count=0;
     count=__builtin_popcount(n);
     return count;
    }
};
