class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        // int maxOnes = 0;
        // int row = 0;

        // for (int i = 0; i < mat.size(); i++) {
        //     int count = 0;

        //     for (int j = 0; j < mat[i].size(); j++) {
        //         if (mat[i][j] == 1)
        //             count++;
        //     }

        //     if (count > maxOnes) {
        //         maxOnes = count;
        //         row = i;
        //     }
        // }

        // return {row, maxOnes};
        int maxone=0;
        int rows=0;
        for(int i=0;i<mat.size();i++){
            int count =0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
                if(count>maxone){
                    maxone=count;
                    rows=i;
                }
            
        }
        return {rows,maxone};
    }
};