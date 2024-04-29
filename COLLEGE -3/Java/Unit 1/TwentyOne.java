import java.util.Scanner;
class TwentyOne{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter range = ");
        n = sc.nextInt();
        int count=0;
        for(int i=1;i<=n;i++){
            count=0;
            for(int j=1;j<=n;j++){
                if(i%j==0){
                    count++;
                }
            }
            if(count==2){
                System.out.println(i);
            }
        }
    }
}