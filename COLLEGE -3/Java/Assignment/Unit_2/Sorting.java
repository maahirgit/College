// Question 7

import java .util.Scanner;
class Sort{

    void bubble(){
    int[] array = new int[10];
    int temp;
    Scanner sc = new Scanner(System.in);
    for(int i=0;i<10;i++){
        System.out.println("Enter the elements = ");
        array[i] = sc.nextInt();
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10-1;j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(int i=0;i<10;i++){
        System.out.print(array[i]+" ");
    }
    }

}

class Sorting{
    public static void main(String args[]){
    Sort s1 = new Sort();
    s1.bubble();
    }
}