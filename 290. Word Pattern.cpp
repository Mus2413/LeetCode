class Solution {
public:
    bool wordPattern(string pattern, string s) {
       set <char> s1;set <string> s2;        
        s.push_back(' ');
        unordered_map<char,string> um;string str = "";int pos = 0, n = (int)pattern.size();
        for(char x : pattern){um[x]="-1";s1.insert(x);}
        for(int i=0;i<(int)s.size();i++){
            if(s[i]!=' ')str.push_back(s[i]);
            else{
                //cout << "Word : " << str << "\n";
                s2.insert(str);
                if(pos==n)return false;
                if(um[pattern[pos]]=="-1"){
                    um[pattern[pos]] = str;
                }
                else{
                    if(um[pattern[pos]]!=str){
                        return false;
                    }                        
                }
                pos++;str = "";
            }
        }        
        if((int)s1.size()!=(int)s2.size())return false;
        return true;
    }
};