import java.util.Scanner;
class Two{
    public static void main(String args[]){
        int a;
        int b;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of a = ");
        a = sc.nextInt();
        System.out.println("Enter the value of b = ");
        b = sc.nextInt();
        a = a+b;
        b = a-b;
        a = a-b;
        System.out.println(a+" "+b);
    }
}