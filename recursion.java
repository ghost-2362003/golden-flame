public class recursion {
    public static int first = -1;
    public static int last = -2;
    public static void find0currence(String str,int idx,char curr){
        if(idx==str.length()){
            System.out.println(first);
            System.out.println(last);
            return;
        }
        char currchar = str.charAt(idx);
        if(currchar==curr){
            if(first==-1) {
                first = idx;
            }
            else{
                last=idx;
            }
        }
        find0currence(str,idx+1,curr);
    }
    public static void main(String[] args){
        find0currence("abccdaaaxca",0,'a');
    }
}