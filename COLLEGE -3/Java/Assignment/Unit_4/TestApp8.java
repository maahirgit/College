class TestApp8{
    public static void main(String args[]){
        Thread th1 = new Thread(new EvenPrinter());
        Thread th2 = new Thread(new OddPrinter());

        th1.setPriority(Thread.MIN_PRIORITY);
        th2.setPriority(Thread.MAX_PRIORITY);
        th1.start();
        th2.start();
    }
}

class EvenPrinter implements Runnable{
    public void run(){
        for(int i=0;i<50;i+=2){
            System.out.println(Thread.currentThread().getName()+" "+i);
        }
    }
}

class OddPrinter implements Runnable{
     public void run(){
        for(int i=0;i<50;i+=2){
            System.out.println(Thread.currentThread().getName()+" "+i);
        }
    }
}