import java.util.*;

public class B3_3{
    public static void main(String args[]){
        HashMap<String,Integer> hm = new HashMap<>();

        for(int i=0;i<10;i++){
            hm.put("Key"+i,i);
        }

        for(Map.Entry<String,Integer> entry : hm.entrySet()){
            System.out.println(entry.getKey()+" "+entry.getValue());
        }
    }
}