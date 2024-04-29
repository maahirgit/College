import java.io.*;

public class A22{
    public static void main(String args[]){
        String filename = "22.txt";
        try
        (FileOutputStream fout = new FileOutputStream(filename);
        DataOutputStream dout = new DataOutputStream(fout);){


        dout.writeInt(10);
        dout.writeDouble(10.10);
        }catch(Exception e){
            e.printStackTrace();
        }

        try(FileInputStream fin = new FileInputStream(filename);
            DataInputStream oin = new DataInputStream(fin);){

            int value = oin.readInt();
            double val = oin.readDouble();

            System.out.println(value+" "+val);
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}