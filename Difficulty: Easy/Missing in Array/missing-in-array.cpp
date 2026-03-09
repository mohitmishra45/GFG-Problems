class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size();
        int xor1=0;
        int xor2=0;
        
        //(0 to n)-->(0^1^2^3^4^5)
        for(int i=1;i<=n+1;i++)
        {
            xor1^=i;
        }
        
        //(1^2^3^5)
        for(int i=0;i<n;i++)
        {
            xor2^=arr[i];
        }
        return xor1 ^ xor2;
        
    }
};