import java.io.*;
public class A9_9{
    public static void main(String args[]){
        byte[] bytearr = {10,20,30,40,50};
        ByteArrayInputStream bin = new ByteArrayInputStream(bytearr);

        int bytea;
        while((bytea = bin.read()) != -1){
            System.out.println(bytea);
        }
    }
}