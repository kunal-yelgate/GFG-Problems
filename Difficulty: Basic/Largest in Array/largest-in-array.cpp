class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int big = 0 ;
        for(int i=0 ; i < arr.size() ; i++) {
            if(arr[i] > big) {
                big = arr[i];
            }
        }
        return big;
    }
};
