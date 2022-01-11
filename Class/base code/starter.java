import java.util.Random;
class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		System.out.println("I love to learn coding remotely."); 
		Random rand = new Random();
		
		// 10 - 65
		
		int x = rand.nextInt(56)+10;
		System.out.println(x);
		double a = 0;
		a = rand.nextDouble(); // 0 - 1, not 1
		a = a + 12.5;
		System.out.println(a);
		// 35.3 - 36.3
		double b = rand.nextDouble()+35.3;
		System.out.println(b);
		int i  = rand.nextInt(200)+5;
		double c = rand.nextDouble()+i;
		System.out.println(c);
	}
}