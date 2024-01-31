class Solution {
public:
    bool isValid(string s) {

        stack<char> obk;

        for(int i=0; i<s.length(); i++){
            
            if(s[i]==')'){
                if(obk.empty() || obk.top()!='('){
                    return false;
                }else{
                    obk.pop();
                }
            }else if(s[i]=='}'){
                if(obk.empty() || obk.top()!='{'){
                    return false;
                }else{
                    obk.pop();
                }
            }else if(s[i]==']'){
                if(obk.empty() || obk.top()!='['){
                    return false;
                }else{
                    obk.pop();
                }
            }else if(i!=s.length()-1){
                obk.push(s[i]);
            }else{
                return false;
            }                   
            
        }
        if(obk.empty()){
            return true;
        }else{
            return false;
        }


    }


};