import java.io.*;
public class A4_4{
    public static void main(String args[]){
        File file = new File("6.txt");
        if(file.exists()){
            System.out.println(file.length());
        }
        else{
            System.out.println("File not found");
        }
    }
}