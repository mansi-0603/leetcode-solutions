class Solution {
public:
    bool canAliceWin(int n) 
    {
        if(n < 10)
        return false;

        bool ans=true;
        int rmv=10;
        int turn=0;

        while(n>=0)
        {
            turn++;

            if(n<rmv)
            {
                if(turn%2)
                ans=false;
                else
                ans=true;
                break;
            }
            else
            {
                n=n-rmv;
                rmv--;
            }
        }
        return ans;
    }
};