// Question 1
import java.util.Scanner;
class Shapes{
    public double getArea(){
        return 0.0;
    }
}
class Rectangle extends Shapes{
    double length;
    double breadth;
    public Rectangle(double l,double b){
        length = l;
        breadth = b;
    }

    public double getArea(){
        return length*breadth;
    }
}

class Shape{
    public static void main(String args[]){
    double len;
    double bread;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter length = ");
    len = sc.nextDouble();
    System.out.println("Enter breadth = ");
    bread = sc.nextDouble();
    Rectangle r1 = new Rectangle(len,bread);
    System.out.println(r1.getArea());
    }
}