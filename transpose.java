import java.util.*;
public class transpose {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter number of rows:");
        int rows = sc.nextInt();
        System.out.println("enter number of columns");
        int cols = sc.nextInt();
        int[][] nums = new int[rows][cols];
        //input
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                System.out.println("enter element:");
                nums[i][j]=sc.nextInt();
            }
        }
        //output(transpose of matrix)
        System.out.println("processing...");
        System.out.println("transpose of matrix is :");
        for(int i=0; i<cols; i++){
            for(int j=0; j<rows; j++){
                System.out.print(nums[j][i]+" ");
            }
            System.out.println();
            sc.close();
        }
    }

}
