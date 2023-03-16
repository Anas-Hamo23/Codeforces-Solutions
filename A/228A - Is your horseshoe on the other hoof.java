import java.util.*;
public class Programing3 {
public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
          int x[]=new int[4];
          for(int i=0;i<4;i++){
              x[i]=input.nextInt();
          }
          int count = 0,z=3;
          a:{if (x[0] == x[1] && x[0] == x[2] && x[0] == x[3]) {
		          System.out.println(z);
                          break a;
	}
	else {
		Arrays.sort(x);
		for (int i = 0; i < 4; i++) {
			if (i + 1 < 4) {
				if (x[i] == x[i + 1]) {
					count++;
				}
			}
		}
	}
	System.out.println(count);}
    }
}