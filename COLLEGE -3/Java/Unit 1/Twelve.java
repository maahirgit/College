import java.util.Scanner;
class Twelve{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
            System.out.println("Enter a = ");
            int a = sc.nextInt();
            System.out.println("Enter b = ");
            int b = sc.nextInt();
            if(a>b){
                int ans = a*b;
                System.out.println(ans);
            }
            else{
                int ans = a/b;
                System.out.println(ans);
            }
        }
    }