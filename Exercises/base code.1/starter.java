import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		int a = 4;
		int b = 3;
		int c = a*b;
		int d = a+b;
		System.out.println(c);
		System.out.println(d);
		
		int ans1 = c*d%a+b;
		int ans2 = ((-a)+d)%c;
		int ans3 = ((a/b)*c)-d;
		int ans4 = ((-a)-(-b))*(c%d)+a;
		System.out.println(ans1);
		System.out.println(ans2);
		System.out.println(ans3);
		System.out.println(ans4);
		
		Scanner sc = new Scanner(System.in);
		int number6 = sc.nextInt();
		int number7 = sc.nextInt();
		int number8 = sc.nextInt();
		int number9 = sc.nextInt();
		int number10 = sc.nextInt();
		System.out.println(number6+25);
		System.out.println(number7+25);
		System.out.println(number8+25);
		System.out.println(number9+25);
		System.out.println(number10+25);
	}
}
