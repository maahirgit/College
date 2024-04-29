final class AllFinal{
    final int x = 10;
    final void display(){
        System.out.println("Hello i am final method");
    }
}
class TestApp7{
    public static void main(String args[]){
    AllFinal a1 = new AllFinal();
    a1.display();
    System.out.println(a1.x);
    }
}