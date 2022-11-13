
import java.util.*;

import javax.swing.plaf.synth.SynthLookAndFeel;
public class hlo {
    public static void main(String args[]){
      
    ArrayList<Integer> list =  new ArrayList<>(1 );
    list.add(55);
    list.add(555);
    list.add(550);
    list.add(556);
    list.add(557);
    list.add(559);
    System.out.println(list);
   // System.out.println(list.contains(550));//functions 
      list.set(0 , 69);
    System.out.println(list);
    list.remove(2);
    System.out.println(list);
    }
  }
