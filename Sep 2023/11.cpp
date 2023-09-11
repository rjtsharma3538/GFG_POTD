// this is gfg problem of the day of 11 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/lucky-numbers2911/1

class Solution{
public:
    bool isLucky(int n) {
        if(n%2==0)
            return false;
        int i=2;
        while(i<=n&&n/i!=0)
        {
            if(n%i==0)
                return 0;
            n-=(n/i);
            i++;
        }
        return 1;
        
    }
};
