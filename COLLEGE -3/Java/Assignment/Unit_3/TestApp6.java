class A{
    private static int x = 10;
    protected static int getx(){
        return x;
    }
}
class B extends A{
    int y=20;
    void display(){
        System.out.println(getx()+" "+y);
    }
}

class TestApp6{
    public static void main(String args[]){
        B b1 = new B();
        b1.display();
    }
}