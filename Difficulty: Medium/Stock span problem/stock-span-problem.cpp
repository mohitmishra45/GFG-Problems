class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        int n=arr.size();
        stack<int>st;
        vector<int>pgi(n);
        pgi[0]=-1;
        st.push(0);
        for(int i=1;i<=n-1;i++)
        {
            while(st.size()!=0 && arr[st.top()]<=arr[i])
            {
                st.pop();
            }
            if(st.size()==0) pgi[i]=-1;
            else pgi[i]=st.top();
            st.push(i);
        }
        for(int i=0;i<=n-1;i++)
        {
            pgi[i]=i-pgi[i];
        }
        return pgi;
    }
};