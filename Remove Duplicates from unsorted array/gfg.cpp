class Solution {
    public:
      vector<int> removeDuplicate(vector<int>& arr) {
          // code here
          unordered_set<int>s;
          vector<int>ans;
          for(int i=0; i<arr.size(); i++){
              if(s.find(arr[i])==s.end()){
                  s.insert(arr[i]);
                  ans.push_back(arr[i]);
              }
          }
          return ans;
      }
  };