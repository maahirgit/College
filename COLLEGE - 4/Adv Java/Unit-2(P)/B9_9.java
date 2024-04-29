import java.util.*;

public class B9_9{
    public static void main(String args[]){
        Vector<String> v = new Vector<>();
        v.add("Apple");
        v.add("Orange");
        v.add("Kiwi");

        Enumeration em = v.elements();
        while(em.hasMoreElements()){
            System.out.println(em.nextElement());
        }
    }
}