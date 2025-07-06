import java.util.*;
public class Main {
  public static void main(String[] args) {
		int L = 0; 
		int M = 0; 
		int misplacedL = 0; 
		int misplacedM = 0; 
		int mInL = 0; 
		int lInM = 0; 

		Scanner scan = new Scanner(System.in);
		char[] shelf = scan.nextLine().toCharArray();
		

		for (int i = 0; i < shelf.length; i++) {
			if (shelf[i] == 'L') {
				L++;
			} else if (shelf[i] == 'M') {
				M++;
			}
		}
		
		for (int i = 0; i < L; i++) {
			if (shelf[i] == 'M') {
				mInL++;
				misplacedL++;
			} else if (shelf[i] == 'S') {
				misplacedL++;
			}
		}
		

		for (int i = L; i < L + M; i++) {
			if (shelf[i] == 'L') {
				lInM++;
				misplacedM++;
			} else if (shelf[i] == 'S') {
				misplacedM++;
			}
		}
		
		System.out.println(misplacedL + misplacedM - Math.min(mInL, lInM));
    
  }
}
