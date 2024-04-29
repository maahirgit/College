class Maximum{
     void maximum(int[] num){
        int max = num[0];
        for(int i=0;i<num.length;i++){
            System.out.print(num[i]+" ");
            if(num[i]>max){
                max = num[i];
            }
        }
        System.out.println("\n"+max);
    }
}
class Eight{
   
    public static void main(String args[]){
        int [] array = {10,20,30,40,50,60};
        Maximum m1 = new Maximum();
        m1.maximum(array);
    }
}