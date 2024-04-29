class TestApp3{
    public static void main(String args[]){
        int a =10;
        int b=0;
        int arr[] = {12,15,11,8,0};
        try{
            // int c = a/b;
            System.out.println("I am 1"+arr[10]);
        }catch(NullPointerException e){
            e.printStackTrace();
        }catch(ArithmeticException e){
             e.printStackTrace();
         }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Exception handled");
            e.printStackTrace();
         }

        System.out.println("I am 2");
    }
}