import java.io.*;

public class A3{
    public static void main(String args[]){
        File file = new File("2.txt");
        if(file.canRead()){
            System.out.println("Readable");
        }
        else{
            System.out.println("Not");
        }
    }
}