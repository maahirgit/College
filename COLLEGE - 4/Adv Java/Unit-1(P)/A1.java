import java.io.*;

public class A1{
    public static void main(String args[]){
        File file = new File("C:/COLLEGE/ONE");
        if(file.isDirectory()){
            File[] files = file.listFiles();
            if(files != null){
                System.out.println(files);
                for(File i : files){
                    System.out.println(i.getName());
                }
            }
            else{
                System.out.println("Empty");
            }
        }
        else{
            System.out.println("Not");
        }
    }
}