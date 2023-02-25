import java.util.*;
public class Test {

    public static void main(String[] args) {
        
       Scanner in=new Scanner(System.in);
       int x=in.nextInt();
       int y=in.nextInt();
       int n=1;
       while(x!=0){
           n=n*2%998244353;
           x--;
       }
       while(y!=0){
           n=n*2%998244353;
           y--;
       }
        System.out.println(n%998244353);   
}
}