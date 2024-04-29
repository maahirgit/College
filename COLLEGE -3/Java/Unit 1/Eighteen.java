import java.util.Scanner;
class Eighteen{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int sum=0;
        int rem=0;
        int temp=0;
        int num=0;
        System.out.println("enter the number = ");
        num = sc.nextInt();
        temp = num;
        while(num!=0){
            rem = num%10;
            sum = sum*10+rem;
            num = num/10;
        }
        if(sum==temp){
            System.out.println("Palindrome number ");
        }
        else{
            System.out.println("Not");
        }
    
    }
}