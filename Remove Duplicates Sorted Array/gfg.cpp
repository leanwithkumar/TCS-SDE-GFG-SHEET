class Solution {
    public:
      int removeDuplicates(vector<int> &arr) {
          // code here
          if(arr.size()==0) return 0;
          int j =0;
          for(int i=0; i<arr.size(); i++){
              if(arr[i]!=arr[j]){
                  arr[++j]=arr[i];
              }
          }
          return j+1;
      }
  };