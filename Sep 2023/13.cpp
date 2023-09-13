// this is gfg problem of the day of 13 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/largest-number-possible5028/1

class Solution{
public:
    string findLargest(int N, int S){
        if(S==0)
        {
            if(N==1)
                return "0";
            return "-1";
        }
        if(N*9<S)
            return "-1";
        string res="";
        while(S>=9)
        {
            res+='9';
            S-=9;
        }
        
        if(S>0)
            res+=to_string(S);
        
        while(res.size()<N)
            res+='0';
        
        return res;
    }
};
