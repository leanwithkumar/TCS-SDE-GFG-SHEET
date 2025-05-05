class Solution {
    public:
      // Function to check if b is a subset of a
      bool isSubset(vector<int> &a, vector<int> &b) {
          // Your code here
          unordered_map<int, int>map1;
          for(int i=0; i<a.size(); i++){
              map1[a[i]]++;
          }
          for(int i=0; i<b.size();i++){
              if(map1[b[i]]==0){
                  return false;
              }
              else map1[b[i]]--;
          }
          return true;
          
      }
  };