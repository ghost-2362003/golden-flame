public class recursion2 {
    public static boolean sort(int[] arr,int idx){
        if(idx==arr.length-1){
            return true;
        }
        if(arr[idx]<arr[idx+1]){
            //sorted till now
            return sort(arr,idx+1);
        }
        else{
            //not sorted
            return false;
        }
    }
    public static void main(String[] args){
        int[] array = {1,2,4,5,6};
        boolean cond = sort(array,0);
        System.out.print(cond);
    }
}