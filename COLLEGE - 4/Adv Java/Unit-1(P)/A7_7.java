import java.io.*;
import java.nio.file.*;

public class A7_7{
    public static void main(String args[]){
        try{
        Files.setAttribute(Paths.get("x.txt"),"dos:hidden",true);
        System.out.println("Hidded");
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
}