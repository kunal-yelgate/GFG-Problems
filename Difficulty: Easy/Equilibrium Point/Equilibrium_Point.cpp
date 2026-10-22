class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
       
       int n = arr.size();
       int totalsum = 0;
       
       for(int num : arr) {
           totalsum += num;
       }
       
       int leftsum = 0;
       for(int i=0; i<n ; i++) {
           int rightsum = totalsum - leftsum - arr[i];
           
           if(leftsum == rightsum) {
               return i;
           }
           leftsum += arr[i];
       }
       return -1;
    }
};
