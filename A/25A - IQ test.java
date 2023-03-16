import java.util.*;

public class Main {
  public static void main(String[] args) {
     
     int odd=0;
     int even=0;
     
     Scanner in=new Scanner(System.in);
   int  x=in.nextInt();
     int[] arr=new int[x];
     
     for(int i=0;i<x;i++){
         arr[i]=in.nextInt();
         if(arr[i]%2==0){
             even++;
         }else{
             odd++;
         }
     }
     if(odd<even){
         for(int i=0;i<x;i++){
             if(arr[i]%2!=0){
                 System.out.println(i+1);
             }
         }
     }else{
         for(int i=0;i<x;i++){
             if(arr[i]%2==0){
                 System.out.println(i+1);
             }
     }
  
}}}