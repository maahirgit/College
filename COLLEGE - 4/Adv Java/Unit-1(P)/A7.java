import java.io.*;
import java.nio.file.*;

public class A7{
    public static void main(String args[]){
        try{
            Files.setAttribute(Paths.get("z.txt"),"dos:hidden",true);
            System.out.println("File hidden");
        }catch(IOException e){
            e.getMessage();
        }
    }
}