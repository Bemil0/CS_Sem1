import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		System.out.println(""); 
		Scanner sc = new Scanner(System.in);
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
			System.out.println("Please enter one of the given options: (Wizard, Warrior, or Rogue)");
		}
		
	}
}
