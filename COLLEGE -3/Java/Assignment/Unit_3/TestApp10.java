interface Area{
    float pie=3.14f;
    void compute(float x,float y);
}
class Rectangle implements Area{
    public void compute(float len,float width)
    {
        float area = len*width;
        System.out.println(area);
    }
}

class Circle implements Area{
    public void compute(float radius,float dummy){
        float area = 2*pie*radius;
        System.out.println(area);
    }
}

class TestApp10 {
    public static void main(String args[]){
        Circle c1 = new Circle();
        c1.compute(10.0f,0.0f);
        Rectangle r1 = new Rectangle();
        r1.compute(10,10);
    }
}