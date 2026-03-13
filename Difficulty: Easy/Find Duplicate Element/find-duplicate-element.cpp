class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        
        unordered_map<int,int> mp;

        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }

        for(auto dt : mp)
        {
            if(dt.second > 1)
            {
                return dt.first;
            }
        }

        return -1;
    }
};