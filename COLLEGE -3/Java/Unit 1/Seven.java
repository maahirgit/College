import java.util.Scanner;
class Seven{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number 1 = ");
        int num1 = sc.nextInt();
        System.out.println("Entr number 2 = ");
        int num2 = sc.nextInt();
        if(num1>num2){
            System.out.println("Num 1 is greater");
        }
        else if (num2>num1){
            System.out.println("Num 2 is greater");
        }
        else{
            System.out.println("Both are equal");
        }
    }
}