// this is gfg problem of the day of 14 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        s1=s1+s1;
        if(s1.find(s2)!=string::npos)
            return true;
        return false;
    }
};
