class TestApp7{
    public static void main(String args[]){
        EvenThread th1 = new EvenThread();
        OddThread th2 = new OddThread();

        th1.start();
        th2.start();
    }
}

class EvenThread extends Thread{
    public void run(){
    for(int i=0;i<=50;i+=2){
        System.out.println(Thread.currentThread().getName()+" "+i);
    }
    }
}

class OddThread extends Thread{
    public void run(){
    for(int i=1;i<=50;i+=2){
        System.out.println(Thread.currentThread().getName()+" "+i);
    }
    }
}