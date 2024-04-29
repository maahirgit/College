import java.io.*;

class MyClass implements Serializable{
    private String name;
    private int age;

    public MyClass(String name,int age){
        this.name = name;
        this.age = age;
    }

    public String getName(){
        return name;
    }

    public int getAge(){
        return age;
    }
}

public class A15_15{
    public static void main(String arga[]){
        MyClass obj = new MyClass("John",30);

        try(FileOutputStream fout = new FileOutputStream("15.txt");
            ObjectOutputStream os = new ObjectOutputStream(fout);){
                os.writeObject(obj);
            }catch(Exception e){
                e.printStackTrace();
            }
        
        try(FileInputStream fin = new FileInputStream("15.txt");
            ObjectInputStream oin = new ObjectInputStream(fin);){
                MyClass obj2 = (MyClass) oin.readObject();
                System.out.println(obj2.getName()+"  "+obj2.getAge());
            }catch(Exception e){
                e.printStackTrace();
            }
    }
}