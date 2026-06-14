class Solution {
  public:
    int findMinDiff(vector<int>& arr, int m) {
        // code here
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        int mindiff = INT_MAX;
        
        for(int i=0 ; i + m - 1 < n; i++) {
            int diff = arr[i + m - 1] - arr[i];
            if( diff < mindiff) {
                mindiff = diff;
            }
            
        }
        return mindiff;
    }
};