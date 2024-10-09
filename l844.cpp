class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s_new = "",t_new = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '#'){
                if(s_new.length() > 0){
                    s_new.pop_back();
                }
                continue;
            }
            s_new.push_back(s[i]);
        }
        for(int i = 0; i < t.length(); i++){
            if(t[i] == '#'){
                if(t_new.length() > 0){
                    t_new.pop_back();
                }
                continue;
            }
            t_new.push_back(t[i]);
        }
        return s_new == t_new;
    }
};
