import java.io.*;

public class A17{
    public static void main(String args[]){
        try{
            char [] chararray = {'h','E','L','L'};
            CharArrayReader cr = new CharArrayReader(chararray);
            CharArrayWriter cwr = new CharArrayWriter();

            int reader;
            while((reader = cr.read()) != -1){
                cwr.write(reader);
            }
        }catch(IOException e){
            e.getMessage();
        }
    }
}