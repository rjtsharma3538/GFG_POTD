// this is gfg problem of the day of 12 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1

class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        string tmp="";
        for(int i=2;i<str1.size();i++)
        {
            tmp+=str1[i];
        }
        tmp+=str1[0];
        tmp+=str1[1];
        
        if(str2==tmp)
            return true;
        
        tmp="";
        tmp+=str1[str1.size()-2];
        tmp+=str1[str1.size()-1];
        for(int i=0;i<str1.size()-2;i++)
            tmp+=str1[i];
        
        //cout<<tmp<<endl;
        if(str2==tmp)
            return true;
        return false;
    }

};
