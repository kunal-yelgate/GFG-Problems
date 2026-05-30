class Solution {
  public:
    void replaceElements(vector<int>& arr) {
        // code here
        vector<int> temp = arr ;
        int n =arr.size();
         for (int i = 0; i < n; i++) {
        if (i == 0) {
            arr[i] = temp[i] ^ temp[i + 1];
        }
        else if (i == n - 1) {
            arr[i] = temp[i - 1] ^ temp[i];
        }
        else {
            arr[i] = temp[i - 1] ^ temp[i + 1];
        }
    }


    }
};