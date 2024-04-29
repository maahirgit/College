import java.io.*;

public class A9{
    public static void main(String args[]){
        byte[] bytearray = {65,66,67,68,69};
        ByteArrayInputStream bin = new ByteArrayInputStream(bytearray);

        int bytea;
        while((bytea = bin.read()) != -1){
            System.out.println(bytea);
        }
    }
}