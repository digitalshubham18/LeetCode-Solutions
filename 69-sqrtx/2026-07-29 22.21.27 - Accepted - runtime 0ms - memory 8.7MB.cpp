class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        while(low<=high){
            int mid=(low+high)/2;
            long long val=1LL*mid*mid;
            if(val<=x){
                low=mid+1;

            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};