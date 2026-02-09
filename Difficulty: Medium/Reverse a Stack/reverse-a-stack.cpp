class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here
        stack<int>temp1;
        stack<int>temp2;
        while(st.size()!=0)
        {
            temp1.push(st.top());
            st.pop();
        }
        while(temp1.size()!=0)
        {
            temp2.push(temp1.top());
            temp1.pop();
        }
        while(temp2.size()!=0)
        {
            st.push(temp2.top());
            temp2.pop();
        }
    }
};