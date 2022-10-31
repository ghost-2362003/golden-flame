public class merged{
    void merge(int[] arr, int si, int mid, int r){
        int l = mid - si + 1;  // subarray of size mid - si + 1
        int m = r - mid;  //subarry of size r - mid
        
        // creating new subarrays
        int[] arr1 = new int[l];
        int[] arr2 = new int[m];
        
        //copying elements from arr to subarrys
        for(int i=0; i<l; ++i){
            arr1[i] = arr[si+i];
        }
        for(int i=0; i<m; ++i){
            arr2[i] = arr[mid + 1 + i];
        }

        //sorting elements in main arr
        int k = si;
        int i = 0, j=0;
        while(i<l && j<m){
            if(arr1[i]<=arr2[j]){
                arr[k] = arr1[i];
                i++;
            }
            else{
                arr[k] = arr2[j];
                j++;
            }
            k++;
        }

        // copying rest of the elements of arr1 if any
        while (i < l) {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        // copying rest of the elements of arr2 if any
        while (j < m) {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    
    }

     void sort(int[] arr, int l, int r){
        if (l < r) {
            // Find the middle point
            int m = l + (r - l) / 2;
 
            // Sort first and second halves
            sort(arr, l, m);
            sort(arr, m + 1, r);
 
            // Merge the sorted halves
            merge(arr, l, m, r);
        }
    }
    
   static void show(int[] arr){
        int n = arr.length;
        for (int i = 0; i < n; ++i){
            System.out.print(arr[i] + " ");
        }    
        System.out.println();
    }

    public static void main(String args[]){
        int arr[] = { 12, 11, 13, 5, 6, 7 };
 
        System.out.println("Given Array");
        show(arr);

        merged ob = new merged();

        ob.sort(arr, 0, arr.length-1);
        System.out.println("\nSorted array");
        show(arr);
    }
}