import java.util.Scanner;
class Three{
    public static void main (String args[]){
        int roll_no;
        String name;
        String surname;
        int[] marks = new int[5];
        double perc=0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter roll_no = ");
        roll_no = sc.nextInt();
        sc.nextLine();
        System.out.println("Enter name = ");
        name = sc.nextLine();
        System.out.println("Enter surname = ");
        surname = sc.nextLine();
        for(int i=0;i<marks.length;i++){
            System.out.println("Element ["+i+"] = ");
            marks[i] = sc.nextInt();

        }
        for(int i=0;i<marks.length;i++){
                System.out.println(marks[i]);
                perc = perc+marks[i]/5;
        }
        System.out.println(roll_no+" "+name+" "+surname+" "+perc);
    }
}