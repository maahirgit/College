import java.util.Scanner;

class TestApp2{
    public static void main(String args[]){
        int a,b;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a = ");
        a = sc.nextInt();
        System.out.println("Enter b = ");
        b = sc.nextInt();
        System.out.println("A = "+a+"B = "+b);
        a = a+b;
        b = a-b;
        a = a-b;
        System.out.println("A = "+a+"B = "+b);
    }

}
