class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int maxCount = 1;
        int currentCount = 1;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                currentCount++;
            } else {
                maxCount = max(maxCount, currentCount);
                currentCount = 1;
            }
        }

        return max(maxCount, currentCount);
    }
    
};