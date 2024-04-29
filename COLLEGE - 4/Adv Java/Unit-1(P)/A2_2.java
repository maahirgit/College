import java.io.*;
public class A2_2{
    public static void main(String args[]){
        File file = new File("100.txt");
        if(file.exists()){
            System.out.println("File exists");
        }
        else{
            System.out.println("File does not exist");
        }
    }
}