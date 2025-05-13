class Solution {
  public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low>=high) return;
        int j = partition(arr, low, high);
        quickSort(arr, low, j-1);
        quickSort(arr, j+1, high);
        
    }

  public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int low, int high) {
        
        // code here
        int pivot = arr[low];
        int left = low;
        int right = high;
        
        while(left<right){
            while(arr[left]<=pivot && left<=high-1){
                left++;
            }
            while(arr[right]>pivot && right>=low+1){
                right--;
            }
            if(left<right){
                swap(arr[left], arr[right]);
            }
        }
        swap(arr[low], arr[right]);
        return right;
    }
};