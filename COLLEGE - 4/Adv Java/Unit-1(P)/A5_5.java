import java.io.*;

public class A5_5{
    public static void main(String args[]){
        File file = new File("6.txt");
        System.out.println("Length = "+file.length()+" \n"+file.getAbsolutePath()+" \n "+file.lastModified());
    }
}