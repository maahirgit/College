// Question 4

class Product{
    public int code;
    public String name;
    public String mfg_name;

    Product(int code,String name,String mfg_name){
        this.code = code;
        this.name = name;
        this.mfg_name = mfg_name;
    }

    void display(){
        System.out.println(code+" "+name+" "+mfg_name);
    }
}

public class TestProduct{
    public static void main(String args[]){
    Product p1 = new Product(1,"Car","Honda");
    p1.display();
    }
}