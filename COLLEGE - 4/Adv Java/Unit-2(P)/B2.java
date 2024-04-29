// import java.util.*;

// public class B2{
//     public static void main(String args[]){
//         ArrayList<Integer> array = new ArrayList<>();
//         for(int i=0;i<10;i++){
//             array.add(i);
//         }
//         ListIterator<Integer> listit = array.listIterator();
//         while(listit.hasNext()){
//             System.out.println(listit.next());
//         }
//     }
// }

import java.util.*;

public class B2{
    public static void main(String args[]){
        ArrayList<Integer> al = new ArrayList<>();
        for(int i=0;i<10;i++){
            al.add(i);
        }
        ListIterator<Integer> lit = al.listIterator();
        while(lit.hasNext()){
            System.out.println(lit.next());
        }
    }
}