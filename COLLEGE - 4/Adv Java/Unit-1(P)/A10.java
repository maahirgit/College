import java.io.*;

public class A10{
    public static void main(String args[]){
        try{
        byte[] bytearray = {10,20,3,40};
        ByteArrayOutputStream bout = new ByteArrayOutputStream();
        bout.write(bytearray);

        byte[] in = bout.toByteArray();
        for(byte i : in){
            System.out.println(i);
        }
        }
        catch(IOException e){
            System.out.println(e.getMessage());
        }
    }
}