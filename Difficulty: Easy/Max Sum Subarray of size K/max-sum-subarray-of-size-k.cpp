class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int maxSum=INT_MIN;
        int i=0;
        int j=0;
        int currSum=0;
        while(j<n)
        {
            currSum+=arr[j];
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                maxSum=max(maxSum,currSum);
                currSum-=arr[i];
                i++;
                j++;
            }
        }
        return maxSum;
    }
};