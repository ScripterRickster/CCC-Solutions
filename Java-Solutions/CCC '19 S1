import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    ArrayList<Integer> top = new ArrayList<Integer>();
    ArrayList<Integer> bottom = new ArrayList<Integer>();

    ArrayList<Integer> transfer = new ArrayList<Integer>();
    top.add(1);
    top.add(2);
    bottom.add(3);
    bottom.add(4);

    String instruct = input.nextLine();

    String[] instructions = instruct.split("");

    for(String i: instructions){
      if(i.equals("H")){
        transfer.add(top.get(0));
        transfer.add(top.get(1));
        top.remove(1);
        top.remove(0);

        bottom.add(transfer.get(0));
        bottom.add(transfer.get(1));
        transfer.clear();

        transfer.add(bottom.get(0));
        transfer.add(bottom.get(1));

        bottom.remove(1);
        bottom.remove(0);

        top.add(transfer.get(0));
        top.add(transfer.get(1));
        transfer.clear();

        
      }else if(i.equals("V")){

        transfer.add(top.get(0));
        transfer.add(top.get(1));
        top.clear();
        top.add(transfer.get(1));
        top.add(transfer.get(0));
        transfer.clear();

        transfer.add(bottom.get(0));
        transfer.add(bottom.get(1));
        bottom.clear();
        bottom.add(transfer.get(1));
        bottom.add(transfer.get(0));
        transfer.clear();
     
      }
    }

    for(int i=0;i<top.size();i++){
      System.out.print(top.get(i)+" ");
    }

    System.out.print("\n");

    for(int i=0;i<bottom.size();i++){
      System.out.print(bottom.get(i)+" ");
    }
  }
}
