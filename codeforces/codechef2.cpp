class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
         sort(arr.begin(), arr.end());
    int n = arr.size();
    long long ans = 0;

    // Step 2: Calculate the maximum sum based on rearranged elements
    for (int i = 0; i < n / 2; i++) {
        ans += 2 * (arr[n - i - 1] - arr[i]);
    }

    return ans;
    }
};
