// import java.util.*;

// public class B6{
//     public static void main(String args[]){
//         HashMap<String,Integer> hash = new HashMap<>();

//         hash.put("One",1);
//         hash.put("Two",2);
//         hash.put("Three",3);
//         hash.put("Four",4);
//         hash.put("Five",5);

//         System.out.println(hash);

//         int three = hash.get("Three");
//         System.out.println(three);

//         boolean containkey = hash.containsKey("Two");
//         System.out.println(containkey);

//         boolean containvalue = hash.containsValue(6);
//         System.out.println(containvalue);

//         int size = hash.size();
//         System.out.println(size);

//     }
// }


import java.util.*;
public class B6{
    public static void main(String args[]){
        HashMap<String,Integer> hm = new HashMap<>();
        hm.put("Banana",1);
        hm.put("Apple",2);
        hm.put("orange",3);
        hm.put("Watermelon",4);
        
        int store = hm.get("Apple");
        System.out.println(store);
    }
}