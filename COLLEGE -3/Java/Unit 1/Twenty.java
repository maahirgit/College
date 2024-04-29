import java.util.Scanner;
class Twenty{
        public static void main(String args[]){
            Scanner sc = new Scanner(System.in);
            int fact;
            int mult=1;
            System.out.println("Enter number = ");
            fact = sc.nextInt();
            do{
                mult*=fact;
                fact--;
            }while(fact>0);
            System.out.println(mult);
        }
    }