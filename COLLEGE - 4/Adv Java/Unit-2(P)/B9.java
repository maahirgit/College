// import java.util.*;

// public class B9{
//     public static void main(String args[]){

//         Vector<String> vector = new Vector<>();
//         vector.add("Apple");
//         vector.add("Grapes");
//         vector.add("kiwi");
//         vector.add("orange");

//         Enumeration<String> enums = vector.elements();
//         while(enums.hasMoreElements()){
//             System.out.println(enums.nextElement());
//         }
//     }
// }


import java.util.*;

public class B9{
public static void main(String args[]){
    Vector<String> v = new Vector<>();
    v.add("Apple");
    v.add("Orange");
    v.add("Banana");
    v.add("Papaya");
    
    Enumeration<String> enums = v.elements();
    while(enums.hasMoreElements()){
        System.out.println(enums.nextElement());
    }
}
}