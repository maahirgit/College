import java.io.*;

public class A10_10{
    public static void main(String args[]){
        try{
            byte[] bytearr = {10,20,30,40,50};
            ByteArrayOutputStream bout = new ByteArrayOutputStream();
            bout.write(bytearr);

            byte[] arr = bout.toByteArray();
            for(byte i : arr){
                System.out.println(i);
            }
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
}