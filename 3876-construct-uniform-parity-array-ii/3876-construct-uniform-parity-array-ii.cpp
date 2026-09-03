class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even = INT_MAX;
        int odd=INT_MAX;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                even=min(even,nums1[i]);
            }
            else{
                odd=min(odd,nums1[i]);
            }
        }
            if(odd==INT_MAX){
                return true;
            }
            if(even==INT_MAX){
                return true;
        
        }
        return odd < even;
        // int Odd = INT_MAX;
        // int Even = INT_MAX;

        // int n = nums1.size();

        // for (int i = 0; i < n; i++) {
        //     if (nums1[i] % 2 == 0) {
        //         Even = min(Even, nums1[i]);
        //     } else {
        //         Odd = min(Odd, nums1[i]);
        //     }
        // }

        
        // if (Odd == INT_MAX) {
        //     return true;
        // }

        // if (Even == INT_MAX) {
        //     return true;
        // }

        // return Odd < Even;
    }
};