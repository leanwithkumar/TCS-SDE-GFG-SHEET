class Solution {
  public:
    int shouldPunish(int roll[], int marks[], int n, double avg) {
        // your code here
        int sum = 0;
        int cnt =0;
        
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){
                if(roll[j]>roll[j+1]){
                    swap(roll[j], roll[j-1]);
                    cnt +=2;
                }
            }
        }
        
        for(int i=0; i<n; i++){
            sum +=marks[i];
        }
        sum -=cnt;
        
        return sum/(double)n>=avg;
    }
};