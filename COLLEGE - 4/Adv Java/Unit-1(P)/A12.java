import java.io.*;

public class A12{
    public static void main(String args[]){
        byte[] bytearray = "Hello".getBytes();
        String file = "6.txt";
        try(
            FileOutputStream fout = new FileOutputStream(file);
            BufferedOutputStream bout = new BufferedOutputStream(fout)){
            bout.write(bytearray);
        }
        catch(IOException e){
            e.getMessage();
        }
    }
}