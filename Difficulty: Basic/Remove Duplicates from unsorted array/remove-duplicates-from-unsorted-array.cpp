class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        
        unordered_set<int> st;
        vector<int> temp;

        for(int i = 0; i < arr.size(); i++)
        {
            if(st.find(arr[i]) == st.end())
            {
                st.insert(arr[i]);
                temp.push_back(arr[i]);
            }
        }

        return temp;
    }
};