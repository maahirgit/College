import java.io.*;

public class A18{
    public static void main(String args[]){
        try(FileOutputStream fout = new FileOutputStream("18.txt");
            OutputStreamWriter os = new OutputStreamWriter(fout);){
                os.write("Hello World");
            }
            catch(Exception e){
                e.printStackTrace();
            }

        try(FileInputStream fin = new FileInputStream("18.txt");
            InputStreamReader is = new InputStreamReader(fin);)
            {
                int bytea;
                while((bytea = is.read()) != -1){
                    System.out.println((char)bytea);
                }
            }
            catch(Exception e){
                e.printStackTrace();
            }
    }
}