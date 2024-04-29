class DivideZero extends Exception{
    public DivideZero(String msg){
        super(msg);
    }
}

class TestApp1{
    public static void check(int num) throws DivideZero{
        int i=25;
        if(num==0){
            throw new DivideZero("Cannot divide by zero");
        }
        else{
            System.out.println(i/num);
        }
    } 
    public static void main(String args[]){
        try{
            check(0);
        }catch(DivideZero e){
            e.printStackTrace();
        }
    }
}