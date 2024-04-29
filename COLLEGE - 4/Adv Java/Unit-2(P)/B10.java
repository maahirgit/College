import java.util.*;

public class B10{
    public static void main(String args[]){

        HashSet<String> hash = new HashSet<>();

        hash.add("Mango");
        hash.add("Apple");
        hash.add("Banana");
        hash.add("Papaya");

        if (hash.contains("Mango")){
            System.out.println("Found");
        }
        else{
            System.out.println("Not");
        }
    }
}