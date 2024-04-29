import java.util.*;

public class B8_8{
    public static void main(String args[]){
        HashSet<String> hs = new HashSet<>();
        hs.add("Orange");
        hs.add("Banana");
        hs.add("Kiwi");

        boolean contain = hs.contains("Kiwi");
        System.out.println(contain);

        hs.remove("Orange");
        System.out.println(hs);

        boolean check = hs.isEmpty();
        System.out.println(check);
    }
}