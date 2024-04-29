import java.io.*;

public class A16_16{
    public static void main(String args[]){
        try{
        RandomAccessFile raf = new RandomAccessFile("6.txt","rw");

        raf.writeInt(10);
        raf.writeDouble(10.10);

        raf.seek(0);
        int value = raf.readInt();
        double val = raf.readDouble();

        System.out.println(value+" "+val);
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
}