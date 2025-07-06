import java.util.*;
public class Main {
  public static void main(String[] args) {
    Scanner nInput = new Scanner(System.in);

    int n1 = nInput.nextInt();
    int n2 = nInput.nextInt();
    nInput.close();
    int totalNums = 0;
    for(int i=n1;i<n2+1;i++){
      int divisors = 0;
      for(int j=1;j<i+1;j++){
        if(i%j == 0){
          divisors += 1;
        }
      }
      if(divisors == 4){
        totalNums += 1;
      }
    }

    String output = "The number of RSA numbers between " + n1 + " and "+n2+" is " + totalNums;
    System.out.println(output);
  }
}
