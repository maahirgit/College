import java.util.Scanner;
class TestApp1{
    public static void main(String args[]){
        int radius;
        double circum;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter radius = ");
        radius = sc.nextInt();
        circum = 2*3.14*radius;
        System.out.println(circum);
    }
}