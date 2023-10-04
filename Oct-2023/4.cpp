// this is gfg problem of the day of 4 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1

class Solution {
  public:
    int romanToDecimal(string &str) {
        map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        
        int cnt=0;
        
        for(int i=str.size()-1;i>=0;i--)
        {
            if(i==str.size())
                cnt+=mp[str[i]];
            else if(mp[str[i]]>=mp[str[i+1]])
                cnt+=mp[str[i]];
            else 
                cnt-=mp[str[i]];
        }
        
        return cnt;
    }
};
