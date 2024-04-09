class Solution {
public:
    int firstUniqChar(string s) {
        int hashTable[26]{};

    for (size_t i = 0; i < s.size(); i++)
        ++hashTable[s[i] - 'a'];

    for (size_t i = 0; i < s.size(); i++)
    {
        if (1 == hashTable[s[i] - 'a'])
            return i;
    }

    return -1;
    }
};