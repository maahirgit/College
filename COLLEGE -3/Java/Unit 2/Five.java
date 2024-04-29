class CalculateSquare{
    
    void square(){
        int num = 5;
        int sq= num*num;
        System.out.println(sq);
    }
    void square(int a){
        int sq = a*a;
        System.out.println(sq);
    }
    void square(float a){
        float sq = a*a;
        System.out.println(sq);
    }
}

class Five{
    public static void main(String args[]){
        CalculateSquare c1 = new CalculateSquare();
        c1.square(10.00f);
    }
}