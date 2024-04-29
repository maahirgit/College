// Qustion 1
import java.util.Scanner;
class Calculate{
    int length1;
    int breadth;

    void getdata(int l,int b){
        length1=l;
        breadth=b;
    }
    void area(){
        System.out.println("Area = "+length1*breadth);
    }

    
}

public class Room{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int l,b;
        System.out.println("Enter length = ");
        l=sc.nextInt();
        System.out.println("Enter breadth = ");
        b=sc.nextInt();
        Calculate c = new Calculate();
        c.getdata(l,b);11
        c.area();
    }
}