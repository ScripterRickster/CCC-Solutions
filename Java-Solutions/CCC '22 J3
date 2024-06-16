import java.util.*;
import java.lang.*;
public class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    String instruct = "";
    String instruction = input.nextLine();
    input.close();

    String[] instructions = instruction.split("");

    ArrayList<String> brokendowninstructions = new ArrayList<String>();

    for(int i=0;i<instructions.length;i++){

      if(instructions[i].equals("+")){
        instruct = instruct + " tighten ";
      }else if(instructions[i].equals("-")){
        instruct = instruct + " loosen ";
      }else {
        instruct = instruct + instructions[i];
      }


      if(Character.isDigit(instructions[i].charAt(0)) == true){
        if(i+1 < instructions.length){
        
          if(Character.isDigit(instructions[i+1].charAt(0)) == false){
            brokendowninstructions.add(instruct);
            instruct = "";
          }
        }else{
          brokendowninstructions.add(instruct);
          instruct = "";
        }
      }
    }

    for(int i=0;i<brokendowninstructions.size();i++){
      System.out.println(brokendowninstructions.get(i));
    }
  }
}
