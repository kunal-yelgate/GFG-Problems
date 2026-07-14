class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        
        int maxRight = arr.back();
        ans.push_back(maxRight);

        for (int i = arr.size() - 2; i >= 0; i--) {
            if (arr[i] >= maxRight) {
                maxRight = arr[i];
                ans.push_back(arr[i]);
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};