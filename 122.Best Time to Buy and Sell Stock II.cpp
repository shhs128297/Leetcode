class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int pf = 0;
        int min = INT_MAX;
        int apf = 0;

        for(int pc:prices){

            if(pf<(pc-min)){
                pf = pc-min;
            }else if(pf>(pc-min)){
                apf = apf + pf;
                pf = 0;
                min = INT_MAX;
            }

            if(pc<min){
                min = pc;
            }
            
        }

        apf = apf + pf;
        
        return apf;
        
    }
};