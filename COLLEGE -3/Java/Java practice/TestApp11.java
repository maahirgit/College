public class TestApp11{
    public static void main(String[] args){
        OddThread th1 = new OddThread();
        Thread evenThread = new Thread(new EvenThread());

        th1.start();
        evenThread.start();
    }
}

class OddThread extends Thread{
    public void run(){
        for(int i=1;i<=10;i+=2){
        System.out.println(Thread.currentThread().getName()+" : "+i);
        }
    }
}

class EvenThread implements Runnable{
    public void run(){
        for(int i=2;i<=10;i+=2){
        System.out.println(Thread.currentThread().getName()+" : "+i);
        }
    }
}