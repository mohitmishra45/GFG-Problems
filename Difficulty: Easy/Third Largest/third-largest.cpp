class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        return arr[arr.size()-3];
    }
};