vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	 int left = m - 1, right = n - 1;
        int idx = m + n - 1;
        while (left >= 0 && right >= 0) {
            if (arr1[left] > arr2[right]) {
                arr1[idx] = arr1[left];
                left--;
                idx--; 
            } else {
                arr1[idx] = arr2[right];
                right--;
                idx--;
            }
        }
         while (right >= 0) {
            arr1[idx] = arr2[right];
            right--;
            idx--;
        }
		return arr1;
        
}