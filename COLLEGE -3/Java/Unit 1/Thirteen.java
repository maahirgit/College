import java.util.Scanner;
class Thirteen{
    public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the age = ");
    int age = sc.nextInt();
    System.out.println("Enter the weight = ");
    int weight = sc.nextInt();
    if((age>18 && age<=55) && weight>45){
        System.out.println("Eligible for vote");
    }
    else{
        System.out.println("Not eligible for vote");
    }
    }
}