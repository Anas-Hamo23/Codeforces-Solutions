import java.util.Scanner;
public class Code {
    static long count [];
    static long db [];
    static int max=100007;
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        count=new long [max];
        db=new long [max];
        int n=in.nextInt();
        for(int i=0;i<n;i++){
            count[in.nextInt()]++;
        }
        db[0]=0;
        db[1]=count[1];
        for(int i=2;i<max;i++){
            db[i]=Math.max(db[i-1],db[i-2]+count[i]*i);
        }
        System.out.println(db[max-1]);
    }
}