import java.io.*;

public class A16{
    public static void main(String args[]){
        try{
            RandomAccessFile raf = new RandomAccessFile("16.txt","rw");
            raf.writeInt(10);
            raf.writeDouble(10.10);

            raf.seek(0);
            int ini = raf.readInt();
            double dub = raf.readDouble();

            System.out.println(ini+" "+dub);
        }catch(IOException e){
            e.getMessage();
        }
    }
}