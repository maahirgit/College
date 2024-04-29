import java.util.*;

public class B5_5{
    public static void main(String args[]){
        TreeMap<String,Integer> tm = new TreeMap<>();
        for(int i=0;i<5;i++){
            tm.put("key"+i,i);
        }
        for(Map.Entry<String,Integer> entry : tm.entrySet()){
            System.out.println(entry.getKey()+" "+entry.getValue());
        }
    }
}