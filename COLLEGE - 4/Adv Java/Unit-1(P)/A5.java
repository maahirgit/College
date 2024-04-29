import java.io.*;

public class A5{
    public static void main(String args[]){
        File file = new File("1.txt");
        System.out.println(file.length()+" "+file.getAbsolutePath()+" "+file.lastModified());
    }
}