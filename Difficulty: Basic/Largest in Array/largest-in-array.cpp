class Solution {
  public:
//   int largest(vector<int> &arr) {
//         return *max_element(arr.begin(), arr.end());
//     }
    int largest(vector<int> &arr) {
      priority_queue<int> pq;

        for (int x : arr) {
            pq.push(x);
        }
        
        return pq.top();  
    }
};
