import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		System.out.println("I love to learn coding remotely."); 
		Scanner sc = new Scanner(System.in);
		System.out.print("Input your first number: ");
		int x = sc.nextInt();
		System.out.print("Input your second number: ");
		int y = sc.nextInt();
		boolean z = x!=y;
		boolean c = x==y;
		if(z)
		{
			System.out.println("Your numbers are different");
		}
		if(c)
		{
			System.out.println("Your numbers are the same");
		}
		
	}
}
