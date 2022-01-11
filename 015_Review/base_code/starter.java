import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		System.out.println(""); 
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter your Name");
		String name = sc.nextLine();
		System.out.println("Enter your Title");
		String title = sc.nextLine();
		System.out.println("Choose your class: Wizard, Warrior, or Rogue");
		String clas = sc.nextLine();
		if (clas.equals("Wizard")){
		System.out.println("You chose the "+clas+" class!");
		}
		else if (clas.equals("Warrior")){
		System.out.println("You chose the "+clas+" class!");
		}
		else if (clas.equals("Rogue")){
		System.out.println("You chose the "+clas+" class!");
		}
		else
		{
			System.out.println("Please rerun the program and enter one of the given options: (Wizard, Warrior, or Rogue)");
		}
		System.out.println("You have 25 points to spend on the skills: Strength, Dexterity, Intelligence, Constitution, and Charisma.");
		System.out.print("Strength (1-10): ");
		int strength = sc.nextInt();
		int a1 = 0;
		if (strength>10)
		{
			System.out.print("Please enter a number again (remember 1-10): ");
			int strength2 = sc.nextInt();
			a1 = 25-strength2;
			System.out.println("You have "+a1+" points left");
		}
		else if (strength<=10)
		{
			a1 = 25-strength;
			System.out.println("You have "+a1+" points left");
			
		}
		
		
		System.out.print("Dexterity (1-10): ");
		int dexterity = sc.nextInt();
		if (dexterity>10)
		{
			System.out.print("Please enter a number again (remember 1-10): ");
			int dexterity2 = sc.nextInt();
			int a2 = a1-dexterity2;
			System.out.println("You have "+a2+" points left");
		}
		else if (strength<=10)
		{
			int a2 = a1-dexterity;
			System.out.println("You have "+a2+" points left");
			
		}
		
		
		
	}
}
