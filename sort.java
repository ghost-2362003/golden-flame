import java.util.*;
public class sort {
    public static void output(int[] array){
        for(int i=0; i<array.length;i++){
            System.out.print(array[i]+" ");
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int[] array = new int[size] ;
        //array building
        for(int i=0; i<size; i++){
            array[i] = sc.nextInt();
        }
        for(int i=0; i<array.length-1; i++){
            for(int j=0; j<array.length-i-1; j++){
                if(array[j]>array[j+1]){
                    int temp = array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            }
        }
        output(array);
        sc.close();
    }
}