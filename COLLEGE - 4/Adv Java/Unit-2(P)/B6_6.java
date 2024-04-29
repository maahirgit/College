import java.util.*;

public class B6_6{
    public static void main(String args[]){
        HashMap<String,Integer> hm = new HashMap<>();
        hm.put("Apple",1);
        hm.put("Orange",2);
        hm.put("Kiwi",3);

        int value = hm.get("Orange");
        System.out.println(value);

        if(hm.containsValue(2)){
            System.out.println("HI");
        }
    }
}