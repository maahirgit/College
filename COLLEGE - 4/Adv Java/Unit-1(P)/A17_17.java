import java.io.*;

public class A17_17{
    public static void main(String args[]){
        char[] chrarray = {'H','E','L','L','O'};

        try{
            CharArrayReader cr = new CharArrayReader(chrarray);
            CharArrayWriter crw = new CharArrayWriter();
            int bytea;

            while((bytea = cr.read()) != -1){
                System.out.println((char) bytea);
            }

            crw.write(chrarray);

            char[] transferred = crw.toCharArray();

            for(char c : transferred){
                System.out.println(c);
            }
        }
        catch(Exception e){
            e.printStackTrace();
        }


    }
}