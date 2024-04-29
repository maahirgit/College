class TestApp20{
    public static void main(String args[]){
        int num = 5;
        int fact=1;
        do{
            fact = num*fact;
            num--;
        }while(num!=0);
        System.out.println(fact);
    }
}