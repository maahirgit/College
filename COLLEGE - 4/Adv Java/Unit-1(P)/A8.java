import java.io.*;

public class A8{
    public static void main(String args[]){

        try{
            FileInputStream fin = new FileInputStream("z.txt");
            FileOutputStream fout = new FileOutputStream("y.txt");

            int byteread;
            while((byteread = fin.read()) != -1){
                fout.write(byteread);
            }
        }catch(IOException e){
            e.getMessage();
        }
    }
}