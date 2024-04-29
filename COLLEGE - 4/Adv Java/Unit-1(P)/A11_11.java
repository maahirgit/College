import java.io.*;

public class A11_11{
    public static void main(String args[]){
    try(FileInputStream fin = new FileInputStream("6.txt");
        BufferedInputStream bin = new BufferedInputStream(fin);){
            System.out.println("Number of available bytes: "+ bin.available());

            System.out.println("Mark supported: "+ bin.markSupported());

            int data;
            while((data = bin.read()) != -1){
                System.out.println((char) data);
            }
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}