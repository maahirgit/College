import java.util.*;

public class B8{
    public static void main(String args[]){

        HashSet<String> hash = new HashSet<>();

        hash.add("Apple");
        hash.add("Banana");
        hash.add("Orange");
        hash.add("Mango");

        boolean contain = hash.contains("Orange");
        System.out.println(contain);

        hash.remove("Banana");
        System.out.println(hash);

        boolean empty = hash.isEmpty();
        System.out.println(empty);
    }
}