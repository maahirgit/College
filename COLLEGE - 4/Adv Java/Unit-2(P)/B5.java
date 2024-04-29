import java.util.*;
public class B5
{
    public static void main(String args[]){
        TreeMap<String,Integer> tree = new TreeMap<>();
        for(int i=0;i<10;i++){
            tree.put("Key "+i,i);
        }
        for(Map.Entry<String,Integer> entry : tree.entrySet())
        {
            System.out.println("Key:"+entry.getKey()+" values"+entry.getValue());
        }
    }
}