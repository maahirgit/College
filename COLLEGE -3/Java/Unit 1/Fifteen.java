import java.util.Scanner;
class Fifteen{
    public static void main(String args[]){
        System.out.println("Enter year = ");
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
        if(year%4==0){
            if(year%400==0){
                System.out.println("It is a leap year");
            }
            else if(year%100!=0){
                System.out.println("It is a leap year");
            }
            else{
                System.out.println("It is not a leap year");
            }

        }
        else{
            System.out.println("It is not a leap year");
        }
    }
}