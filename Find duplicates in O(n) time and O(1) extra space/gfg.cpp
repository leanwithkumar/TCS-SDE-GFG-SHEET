class Solution {
    public:
      vector<int> findDuplicates(vector<int>& arr) {
          // code here
          map<int, int>mp;
          vector<int>ans;
          for(int i=0; i<arr.size(); i++){
              mp[arr[i]]++;
          }
          for(auto it : mp){
              if(it.second>1){
                  ans.push_back(it.first);
              }
          }
          return ans;
          
      }
  };
  