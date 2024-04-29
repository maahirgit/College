
interface Area{
    float pie=3.14f;
    void area(float l,float b);
}


class rectangle implements Area{
    public void area(float l,float b){
        System.out.println(l*b);
    }
}

class circle implements Area{
    public void area(float r){
        System.out.println(2*pie*r);
    }
}

class Test10{
    public static void main(String args[]){
        Area a = new rectangle();
        a.area(10.0f,20.0f);
        Area b = new circle();
        b.area(10.0f);
    }
}

