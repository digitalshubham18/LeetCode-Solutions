class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n =nums.size();
        if(n==0) return 0;
        int longest=1;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
                for (auto it : st) {
            // Check if 'it' is a starting number of a sequence
            if (st.find(it - 1) == st.end()) {
                // Initialize the count of the current sequence
                int cnt = 1; 
                // Starting element of the sequence
                int x = it; 
    
                // Find consecutive numbers in the set
                while (st.find(x + 1) != st.end()) {
                    // Move to the next element in the sequence
                    x = x + 1; 

                    cnt = cnt + 1; 
                }
                
                longest = max(longest, cnt);
            }
        }
        return longest;

        
    }
};