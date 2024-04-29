//Question 5

class CalculateSquare{
    int s=10;
    float d;
    int Calculate(){
        return s*s;
    }
    int Calculate(int s){
        this.s = s;
        return s*s;
    }
    double Calculate(float d){
        this.d = d;
        return d*d;
    }
}

class DisplaySquare{
    public static void main(String args[]){
    float a;
    CalculateSquare cs = new CalculateSquare();
    // a = cs.Calculate(10.5f);
    System.out.println(cs.Calculate(10.5f));
    }
}