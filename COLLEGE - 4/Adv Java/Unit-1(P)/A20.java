import java.io.*;

public class A20{
    public static void main(String args[]){
        try
        (RandomAccessFile raf = new RandomAccessFile("D:\\COLLEGE\\COLLEGE - 4\\Adv Java\\UNIT-1(P)\20.txt","r")){
        raf.seek(0);
        int first = raf.readInt();
        System.out.println(first);

        raf.seek(4*4);
        int fifth = raf.readInt();
        System.out.println(fifth);
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
}