import java.util.*;

public class B1{
    public static void main(String args[]){
        LinkedList<Integer> l1 = new LinkedList<Integer>();
        for(int i=0;i<5;i++){
            l1.add(i);
        }
        for(int i:l1){
            System.out.println(i);
        }
    }
}