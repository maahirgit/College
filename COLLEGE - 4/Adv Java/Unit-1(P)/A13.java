import java.io.*;

public class A13{
    public static void main(String args[]){
        try{
            FileOutputStream fout = new FileOutputStream("13.txt");
            DataOutputStream dout = new DataOutputStream(fout);

            dout.writeInt(3);
            dout.writeDouble(3.33);
        }catch(IOException e){
            e.getMessage();
        }

        try{
            FileInputStream fin = new FileInputStream("13.txt");
            DataInputStream din = new DataInputStream(fin);

            int value = din.readInt();
            double value1 = din.readDouble();

            System.out.println(value+" "+value1);
        }
        catch(IOException e){
            e.getMessage();
        }
    }
}