import java.util.*;

public class B1_1{
    public static void main(String args[]){
        LinkedList<Integer> l1 = new LinkedList<Integer>();
        for(int i=0;i<11;i++){
            l1.add(i);
        }
        for(int j : l1){
            System.out.println(j);
        }
    }
}