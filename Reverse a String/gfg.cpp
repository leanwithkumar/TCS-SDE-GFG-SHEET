class Solution {
    public:
      string reverseString(string& s) {
          // code here
          int low = 0;
          int high = s.size()-1;
          while(low<=high){
              swap[s[low], s[high]];
              low++;
              high--;
          }
          return s;
      }
  };
  