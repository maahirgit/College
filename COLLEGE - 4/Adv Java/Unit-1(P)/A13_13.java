import java.io.*;

public class A13_13{
    public static void main(String args[]){
        try{
            FileOutputStream fout = new FileOutputStream("13.txt");
            DataOutputStream dout = new DataOutputStream(fout);

            dout.writeInt(20);
            dout.writeDouble(20.20);
        }
        catch(Exception e){
            e.printStackTrace();
        }
        try{
            FileInputStream fin = new FileInputStream("13.txt");
            DataInputStream din = new DataInputStream(fin);

            int value = din.readInt();
            double val = din.readDouble();

            System.out.println(value + "  "+ val);
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
}