public class TestApp07
{
    public static void main(String[] args){
        Thread evenThread = new Thread(new EvenPrinter(),"EvenThread");
        Thread oddThread = new Thread(new OddPrinter(),"OddThread");

        evenThread.start();
        oddThread.start();
    }
}

class EvenPrinter implements Runnable
{
    public void run(){
        for(int i=2;i<=50;i+=2){
        System.out.println(Thread.currentThread().getName()+":"+i);
        }
    }
}

class OddPrinter implements Runnable
{
    public void run(){
        for(int i=1;i<=50;i+=2){
            System.out.println(Thread.currentThread().getName()+":"+i);
        }
    }
}