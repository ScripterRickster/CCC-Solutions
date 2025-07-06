import java.util.*;

public class Main {
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);

		char[] s1  = s.nextLine().replaceAll("\\s","").toCharArray();
		char[] s2 = s.nextLine().replaceAll("\\s","").toCharArray();
		
		if(s1.length == s2.length){
			Arrays.sort(s1);
			Arrays.sort(s2);
			if(Arrays.equals(s1,s2)){
				System.out.println("Is an anagram.");
			}else{
				System.out.println("Is not an anagram.");
			}
		}else{
			System.out.println("Is not an anagram.");
		}
	}
}
