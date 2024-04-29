class Invaliddivide extends Exception{
    public Invaliddivide(String msg){
        super(msg);
    }
}
class First{
    public static void check(int deno) throws Invaliddivide{
        int num=20;
        if(deno!=0){
            System.out.println(num/deno);
        }
        else{
            throw new Invaliddivide("Divide by zero");
        }
    }
    public static void main(String args[]){
        try{
            check(0);
        }
        catch(Invaliddivide e){
            e.printStackTrace();
        }
    }
}