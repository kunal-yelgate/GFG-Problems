class Solution {
  public:
    int sumDiffPairs(vector<int>& arr, int k) {
    
            sort(arr.begin(), arr.end());

        int ans = 0;
        int n = arr.size();

        for (int i = n - 1; i > 0; ) {
            if (arr[i] - arr[i - 1] < k) {
                ans += arr[i] + arr[i - 1];
                i -= 2;   
            } else {
                i--;    
            }
        }

        return ans;
    }
};