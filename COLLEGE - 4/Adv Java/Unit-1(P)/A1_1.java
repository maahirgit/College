import java.io.*;

public class A1_1{
    public static void main (String args[]){
        File file = new File("D:\\COLLEGE\\COLLEGE - 4\\Adv Java\\Unit-1(P)");
        if(file.isDirectory()){
            File[] files = file.listFiles();
            if(files != null){
                // System.out.println(files);
                for(File i : files){
                    System.out.println(i.getName());
                }
            }
        }
        else{
            System.out.println("Not a directory");
        }
    }
}