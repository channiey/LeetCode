class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        char tableS[128]{}, tableT[128]{};

        for(int i = 0; i < s.size(); ++i)
        {
            if('\0' == tableS[s[i]] && '\0' == tableT[t[i]])
            {
                tableS[s[i]] = t[i];
                tableT[t[i]] = s[i];
                continue;
            }
            else if (tableS[s[i]] == t[i] && tableT[t[i]] == s[i])
                continue;
            
            return false;
        }
        return true;
    }
};