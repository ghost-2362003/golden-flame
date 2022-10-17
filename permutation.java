public class permutation {
    //non-static method
    public void perm(String str, String per){
        if(str.length()==0){
            System.out.println(per);
            return;
        }
        for(int i=0; i<str.length(); i++){
            char curchar = str.charAt(i);
            String ne0 = str.substring(0, i) + str.substring(i+1);
            perm(ne0, per+curchar);
        }
    }
    public static void main(String[] args){
        permutation p = new permutation();
        p.perm("ABC","");
    }
} 