import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		System.out.println("I love to learn coding remotely."); 
		
		Scanner sc = new Scanner(System.in);
		System.out.println("What is your first name");
		String text12 = sc.nextLine();
		System.out.println("What is your age");
		int number = sc.nextInt();
		System.out.println("What is the month you were born 1-12");
		int number2 = sc.nextInt();
		System.out.println("What is the day you were born 1-31");
		int number3 = sc.nextInt();
		System.out.println("What is the year you were born");
		int number4 = sc.nextInt();
		System.out.println("How much is a buck fifty");
		double number5 = sc.nextDouble();
		System.out.print("your name is ");
		System.out.print(text12);
		System.out.print(", you are ");
		System.out.print(number);
		System.out.print(", you were born on ");
		System.out.print(number3); 
		System.out.print("/");
		System.out.print(number2);
		System.out.print("/");
		System.out.print(number4); 
		System.out.print(", and you have $");
		System.out.print(number5);
		System.out.print("0.");
	}
}
