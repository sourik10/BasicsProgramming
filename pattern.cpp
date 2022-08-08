//square pattern
import java.util.Scanner;
class HelloWorld{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int row=sc.nextInt();
        int col=sc.nextInt();
        for (int i = 0; i<row ; i++) {
			for (int j=0 ; j<col ; j++) 
				System.out.print("*");
			System.out.println();
	     }
    }
}

//hollow square pattern
import java.util.Scanner;
class HelloWorld{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int row=sc.nextInt();
        int col=sc.nextInt();
        for (int i = 1; i<=row ; i++) {
			for (int j=1 ; j<=col ; j++) {
			    if((i==1 || i==col) || (j==1 || j==col)) 
			        System.out.print("*");
			     else System.out.print(" ");
			}
			System.out.println();
	     }
    }
}

//rhombus star pattern
import java.util.Scanner;
class HelloWorld{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int row=sc.nextInt();
        int col=sc.nextInt();
        for (int i = 1; i<=row ; i++) {
            for(int j=1;j<=i;j++) System.out.print(" ");
			for(int j=1;j<=col;j++) System.out.print("*");
			System.out.println();
	     }
    }
}

//mirror rhombus star pattern
import java.util.Scanner;
class HelloWorld{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int rows=sc.nextInt();
       // int col=sc.nextInt();
        for(int i=0;i<rows;i++) {
		      for(int j=rows;j>i;j--) 
		          System.out.print(" "); 
		      for(int j=0;j<rows;j++) 
		           System.out.print("*"); 
		      System.out.println(); 
	   }
    }
}


//triangle pattern
import java.util.Scanner;
class HelloWorld{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int rows=sc.nextInt();
       // int col=sc.nextInt();
        for(int i=1;i<=rows;i++) {
		      for(int j=1;j<=i;j++){
		          System.out.print("*");
		      }
		      System.out.println(); 
	   }
    }
}


//
