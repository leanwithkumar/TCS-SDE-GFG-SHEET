
class Solution {
    public:
      // Function to count the frequency of all elements from 1 to N in the array.
      vector<int> frequencyCount(vector<int>& arr) {
          // code here
          int n = arr.size();
          map<int , int>mp;
          for(int i=0; i<n; i++){
              mp[arr[i]]++;
          }
          vector<int>ans(n, 0);
          for(int i=1; i<=n; i++){
              if(mp.count(i)){
                  ans[i-1] = mp[i];
              }
          }
          return ans;
      }
  };


  
class Solution {
    public:
      // Function to count the frequency of all elements from 1 to N in the array.
      vector<int> frequencyCount(vector<int>& arr) {
          // code here
          int n = arr.size();
          vector<int>freq(n , 0);
          for(int i=0; i<n; i++){
              if(arr[i]>=1 && arr[i]<=n){
                  freq[arr[i]-1]++;
              }
          }
          return freq;
      }
  };
  
  