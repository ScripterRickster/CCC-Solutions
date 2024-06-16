import java.util.*;
import java.io.*;

public class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);


    int cases = Integer.parseInt(input.nextLine());

    Map<Double,Double> timespeed = new HashMap<>();

    for(int i=0;i<cases;i++){
      String[] inputs = (input.nextLine()).split(" ");
      timespeed.put(Double.parseDouble(inputs[0]),Double.parseDouble(inputs[1]));
    }

    input.close();

    ArrayList<Double> sortedcases = new ArrayList<Double>(timespeed.keySet());

    Collections.sort(sortedcases);

    double quicktime = 0.0;
    for(int i=0;i<sortedcases.size()-1;i++){
      double timediff = (sortedcases.get(i+1)) - (sortedcases.get(i));
      double speeddiff = Math.abs((timespeed.get(sortedcases.get(i+1))) - (timespeed.get(sortedcases.get(i))));
      if((speeddiff/timediff)>quicktime){
        quicktime = speeddiff/timediff;
      }
    }

    System.out.println(quicktime);

    
  }
}
