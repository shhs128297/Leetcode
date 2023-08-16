class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int longestsub = 0;
        string cst = "";
        for(int i=0; i<s.length(); i++){
            
            string nowc = "";
            nowc = nowc.assign(s, i, 1);
            if(cst.find(nowc,0) != -1){
                cst = cst.assign(cst, cst.find(nowc,0)+1, cst.length()-cst.find(nowc,0));
            }
            cst = cst + nowc;
            if(cst.length()>longestsub){
                longestsub = cst.length();
            }

        }
        return longestsub;
    }
};