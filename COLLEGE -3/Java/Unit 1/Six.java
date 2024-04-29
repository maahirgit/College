import java.util.Scanner;
class Operators{
    void getdata(){
    Scanner sc = new Scanner(System.in);
    int choice=0;
    int num1;
    int num2;
    int ans;
    while(choice!=5){
    System.out.println("1)Addition \n2)Subtraction \n3)Multiplication \n4)Division");
    System.out.println("Enter the choice = ");
    choice = sc.nextInt();
    System.out.println("Enter num1 = ");
    num1 = sc.nextInt();
    System.out.println("Enter num2 = ");
    num2 = sc.nextInt();
    switch(choice){
        case 1 : ans=num1+num2;
            System.out.println(ans);
            break;

        case 2 : ans=num1-num2;
            System.out.println(ans);
            break;

        case 3 : ans=num1*num2;
            System.out.println(ans);
            break;

        case 4 : ans=num1/num2;
            System.out.println(ans);
            break;

        case 5 : System.exit(0);
                break;
    }
    }
    }
}
class Six{
    public static void main(String args[]){
        Operators o1 = new Operators();
        o1.getdata();
    }
}