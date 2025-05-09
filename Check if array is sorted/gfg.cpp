class Solution {
    public:
      bool arraySortedOrNot(vector<int>& arr) {
          // code here
          for(int i=0; i<arr.size()-1; i++){
              if(arr[i]==arr[i+1] || arr[i]<arr[i+1]) continue;
              else return false;
          }
          return true;
      }
  };