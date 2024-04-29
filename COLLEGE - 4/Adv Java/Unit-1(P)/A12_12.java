import java.io.*;

public class A12_12{
    public static void main(String args[]){
        byte[] bytearr = "Hello".getBytes();
        String file = "p.txt";
        try(FileOutputStream fout = new FileOutputStream(file);
            BufferedOutputStream bout = new BufferedOutputStream(fout)){
                bout.write(bytearr);
            }
        catch(Exception e){
            e.printStackTrace();
        }
    }
}