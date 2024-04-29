import java.util.*;

public class B2_2{
    public static void main(String args[]){
        ArrayList<Integer> al = new ArrayList<>();

        for(int i=0;i<5;i++){
            al.add(i);
        }

        ListIterator<Integer> li = al.listIterator();
        while(li.hasNext()){
            System.out.println(li.next());
        } 
    }
}