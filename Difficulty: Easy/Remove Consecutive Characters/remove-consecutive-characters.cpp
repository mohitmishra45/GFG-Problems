class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
        stack<char>st;
        st.push(s[0]);
        for(int i=0;i<s.length();i++)
        {
            if(st.top()!=s[i])
            {
                st.push(s[i]);
            }
        }
        string ans;
        while(st.size()!=0)
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};