class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>ans)
            {
                ans=arr[i];
            }
        }
        
        int smax=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=ans)
            {
                smax=max(smax,arr[i]);
            }
        }
        
        return smax;
        
    }
};