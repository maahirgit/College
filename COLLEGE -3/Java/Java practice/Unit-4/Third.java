class Third{
    public static void main (String args[]){
        int no1=10;
        int no2=0;

        try{
            int c = no1/no2;
        }
        catch(ArrayIndexOutOfBoundsException e){
            e.printStackTrace();
            System.out.println("Array exception called");
        }
        catch(ArithmeticException e){
            e.printStackTrace();
            System.out.println("Arithematic ");
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}