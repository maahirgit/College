import java.util.Scanner;
class One{
    public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    float pi = 3.14f;
    System.out.println("Enter the radius = ");
    int r = sc.nextInt();
    System.out.println("Circumference = "+2*pi*r);
    }
}