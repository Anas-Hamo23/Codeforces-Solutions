    import java.util.*;
public class Programing3 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
         int n=input.nextInt();
         int []x=new int [4001];
         Arrays.fill(x, Integer.MIN_VALUE);
         int z[]=new int [3];
         for(int i=0;i<3;i++){
             z[i]=input.nextInt();
         }
         Arrays.sort(z);
         x[0]=0;x[z[0]]=1;x[z[1]]=1;x[z[2]]=1;
         for(int i=1;i<=n;i++){
             for(int j=0;j<3;j++){
                 if(z[j]>i){
                     break;
                 }
                 x[i]=Math.max(x[i], x[i-z[j]]+1);
             }
         }
        System.out.println(x[n]);   
    }
}