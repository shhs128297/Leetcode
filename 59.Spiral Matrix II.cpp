class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> result(n, vector<int>(n));
        int wall = 0;
        int i = 1;
        while(i <= n*n){
            int len = n-(2*wall);

            for(int s1=0; s1<len; s1++){
                if(i <= n*n)
                result[wall][wall+s1] = i;
                i++;
            }
            for(int s2=0; s2<len-2; s2++){
                if(i <= n*n)
                result[1+wall+s2][n-1-wall] = i;
                i++;
            }
            for(int s3=0; s3<len; s3++){
                if(i <= n*n)
                result[n-1-wall][n-1-wall-s3] = i;
                i++;
            }
            for(int s4=0; s4<len-2; s4++){
                if(i <= n*n)
                result[n-2-wall-s4][wall] = i;
                i++;
            }
            wall = wall + 1;
        }
        return result;
        
    }
};