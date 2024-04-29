// Question 7

import java .util.Scanner;
class FindMax{

    void bubble1(){
    int[] array = new int[10];
    int max=0;
    Scanner sc = new Scanner(System.in);
    for(int i=0;i<10;i++){
        System.out.println("Enter the elements = ");
        array[i] = sc.nextInt();
        if(array[i]>max){
            max=array[i];
            // System.out.print(max+" ");
        }

    }
    System.out.print(max+" ");
    }
}

class Maximum{
    public static void main(String args[]){
    FindMax s1 = new FindMax();
    s1.bubble1();
    }
}