class Solution {
    public:
      string equilibrium(vector<int> &arr) {
          // code here
          int n = arr.size();
          int leftsum = 0;
          int totalsum =0;
          for(int i=0; i<n; i++){
              totalsum +=arr[i];
          }
          for(int i=0; i<n; i++){
              if(leftsum == totalsum - leftsum -arr[i]){
                  return "true";
              }
              else leftsum+=arr[i];
          }
          return "false";
      }
  };