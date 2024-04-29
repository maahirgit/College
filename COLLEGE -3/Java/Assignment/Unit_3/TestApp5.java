// Question 5

class Shape{
    int radi;
    Shape(int radi){
        this.radi = radi;
    }
}
class Circle extends Shape{
    // int radi;
    Circle(int radi){
        super(radi);
    }
    public void getArea(){
        System.out.println(3.14*radi*radi);
    }
    public void getPerimeter(){
        System.out.println(2*3.14*radi);
    }

}

class TestApp5{
    public static void main(String args[]){
        Circle c1 = new Circle(10);
        c1.getPerimeter();
    }
}