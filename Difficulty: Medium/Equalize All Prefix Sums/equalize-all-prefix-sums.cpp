class Solution {
  public:
    vector<int> optimalArray(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans(n);
        long long cost = 0;

        ans[0] = 0;

        for (int i = 1; i < n; i++) {
            cost += arr[i] - arr[i / 2];
            ans[i] = (int)cost;
        }

        return ans;
    }
};