import java.util.*;

public class Main {
  public static void main(String[] args) {
     int [] arr={4,7,44,77,47,74,447,444,474,477,747,744,777};
     int i;
     boolean a=false;
     Scanner in=new Scanner(System.in);
     int input=in.nextInt();
     
  
     
         for( i=0;i<arr.length;i++){
             if(input%arr[i]==0){
                 a=true;
                 
             }
             
            
         }
         if(a){
             System.out.println("YES");
         }else{
             System.out.println("NO");
         }
         
  
}}