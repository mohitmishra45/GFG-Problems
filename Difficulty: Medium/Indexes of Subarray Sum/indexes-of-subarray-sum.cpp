class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
      int n = arr.size();
    int left = 0;
    long long currentSum = 0;

    for (int right = 0; right < n; right++) {
        currentSum += arr[right];

        while (currentSum > target && left <= right) {
            currentSum -= arr[left];
            left++;
        }

        if (currentSum == target) {
            return {left + 1, right + 1};
        }
    }

    return {-1};
    }
};