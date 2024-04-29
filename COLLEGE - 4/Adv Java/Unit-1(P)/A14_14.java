import java.io.*;
public class A14_14{
    public static void main(String args[]){
        String filepath1 = "6.txt";
        String filepath2 = "6.txt";
        readfile(filepath1);
        readfile(filepath2);

    }

    public static void readfile(String fname){
        try(FileReader fin = new FileReader(fname);
            BufferedReader bout = new BufferedReader(fin)){

            int buff;
            while((buff = bout.read()) != -1){
                System.out.println((char)buff);
            }
            }catch(Exception e){
                e.printStackTrace();
            }
    }
}