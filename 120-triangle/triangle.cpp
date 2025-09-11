class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        vector<int> front(m,0);
        vector<int> cur(m,0);
        for(int j=0;j<m;j++){
            front[j]=triangle[m-1][j];

        }
        for(int i=m-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                int down=triangle[i][j]+front[j];
                int diag=triangle[i][j]+front[j+1];
                cur[j]=min(down,diag);
            }
            front=cur;

        }


        return front[0];
        
    }
};