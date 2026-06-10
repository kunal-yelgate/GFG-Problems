class Solution {
  public:
    int majorityElement(vector<int>& arr) {
         unordered_map<int,int> mp;
    int n = arr.size();

    for(auto x : arr) {
        mp[x]++;

        if(mp[x] > n/2)
            return x;
           }

        return -1;
    }
};