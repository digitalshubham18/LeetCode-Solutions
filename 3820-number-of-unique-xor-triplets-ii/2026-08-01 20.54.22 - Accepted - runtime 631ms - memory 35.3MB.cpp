class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        // This give wrong answer
    //     int n = nums.size();

    //     if (n <= 2)
    //         return n;

    //     int ans = 1;
    //     while (ans <= n)
    //         ans <<= 1;

    //     return ans;


// This gives wrong answer 
  
    //     int n = nums.size();

    //     if (n <= 2)
    //         return n;

    //     return 1 << std::bit_width((unsigned)n);


    

  
        const int MAXX = 2048;

        vector<bool> pairXor(MAXX, false);
        vector<bool> ans(MAXX, false);

        int n = nums.size();

        // All XORs of two elements (i <= j)
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                pairXor[nums[i] ^ nums[j]] = true;
            }
        }

        // XOR with third element
        for (int x = 0; x < MAXX; x++) {
            if (!pairXor[x]) continue;
            for (int v : nums) {
                ans[x ^ v] = true;
            }
        }

        return count(ans.begin(), ans.end(), true);
    
   
    }
};