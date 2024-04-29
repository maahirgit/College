import java.io.*;

public class A2{
    public static void main(String args[]){
            File file = new File("2.txt");
            if(file.exists()){
                System.out.println("Yes");
            }
            else{
                System.out.println("Not");
            }
    }
}