import java.io.*;
public class A3_3{
    public static void main (String args[]){
        File file = new File("16.txt");
        if(file.canRead()){
            System.out.println("File is readable");
        }
        else{
            System.out.println("File is not readdable");
        }
    }
}