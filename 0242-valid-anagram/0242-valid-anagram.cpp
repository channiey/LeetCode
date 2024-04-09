class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int hashTable[26]{};

        for(const char& ch : s)
            ++hashTable[ch - 'a'];

        for(const char& ch : t)
            --hashTable[ch - 'a'];

        for(const int& val : hashTable)
        {
            if(0!= val)
                return false;
        }
        return true;
    }
};