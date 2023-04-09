public class MyGround {
    static int count(int[] coins, int n, int sum){
        int table[][] = new int[sum+1][n];

        for(int i = 0; i<n; i++){
            table[0][i] = 1;
        }
        
        for(int i = 1; i<sum+1; i++){
            for(int j = 0; j<n; j++){
                    int x = (-coins[j]+i>=0)?table[i - coins[j]][j]:0;
                    int y = (j>=1)?table[i][j-1]:0;
                    table[i][j] = x + y;
            }
        }

        return table[sum][n-1];
    }
    public static void main(String[] args){
        int coins[] = {2,3,5,10};
        int n = 4;
        int sum = 6;
        int res = count(coins, n, sum);
        System.out.println(res);
    }
}