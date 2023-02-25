import java.util.*;

public class Test {

    public static void main(String[] args) {
        
       Scanner sc = new Scanner(System.in);
		String str = sc.next();
		if(str.matches("[A-Z]*"))
		{
			System.out.println(str.toLowerCase());
		}
		else if(str.matches("[a-z][A-Z]*"))
		{
			System.out.println(str.substring(0, 1).toUpperCase()+str.substring(1, str.length()).toLowerCase());
		}
		else
		{
			System.out.println(str);
		}
		sc.close();
    
    }
}