class Solution{
public:
    int setBits(int N) {
        
        int cnt=0;
        for(int i=0;i<=31;i++)
        {
            int bit = 1 & (N>>i);
            if(bit==1)
            {
                cnt++;
            }
        }
        return cnt;
        // Write Your Code here
    }
};