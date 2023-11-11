// this is gfg problem of the day of 11 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1

class Solution {
public:
    bool areIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        map<char,char> mp;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                if(mp[s[i]]!=t[i])
                    return false;
            }
            mp[s[i]]=t[i];
        }
        
        mp.clear();
        
        for(int i=0;i<t.size();i++)
        {
            if(mp.find(t[i])!=mp.end())
            {
                if(mp[t[i]]!=s[i])
                    return false;
            }
            mp[t[i]]=s[i];
        }

        return true;

    }
};
