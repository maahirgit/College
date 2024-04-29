import java.util.*;

public class B3{
    public static void main(String args[]){
        HashMap<String,Integer> hash = new HashMap<>();

        for(int i=0;i<=10;i++){
            hash.put("Key"+i,i);
        }

        for(Map.Entry<String,Integer> entry : hash.entrySet())
        {
            System.out.println("Keys:"+entry.getKey()+"  Values:"+entry.getValue());
        }
    }
}