class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int n=height.size();
        int right=n-1;
        int ans=0;
        while(left<right){
            int a=min(height[left],height[right]);
            int width=right-left;
            ans=max(ans,a*width);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
    }
};