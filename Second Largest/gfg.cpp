class Solution {
    public:
      int getSecondLargest(vector<int> &arr) {
          // code here
          int n = arr.size();
          if(n<2){
              return -1;
          }
          int largest = arr[0];
          int slargest = INT_MIN;
          
          
          for(int i=1; i<n; i++){
              if(arr[i]>largest){
                  slargest = largest;
                  largest = arr[i];
              }
              else if(arr[i]>slargest && arr[i]!=largest){
                  slargest = arr[i];
              }
          }
          if(slargest==INT_MIN){
              return -1;
          }
          else{
              return slargest;
          }
      }
  };