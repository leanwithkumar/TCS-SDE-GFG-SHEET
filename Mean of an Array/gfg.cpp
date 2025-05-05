class Solution {
    public:
      int findMean(vector<int>& arr) {
          // code here
          int n = arr.size();
          int mean = 0;
          for(int i=0; i<n; i++){
              mean +=arr[i];
          }
          return mean/n;
      }
  };