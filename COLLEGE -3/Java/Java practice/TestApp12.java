public class TestApp12{
    public static void main(String args[]){
        MyThread th1 = new MyThread();
        MyThread th2 = new MyThread();
        MyThread th3 = new MyThread();

        th1.setPriority(Thread.NORM_PRIORITY);
        th2.setPriority(Thread.MIN_PRIORITY);
        th3.setPriority(Thread.MAX_PRIORITY);

        th1.start();
        th2.start();
        th3.start();

        System.out.println(th1.getName()+"Priority : "+th1.getPriority());
        System.out.println(th2.getName()+"Priority : "+th2.getPriority());
        System.out.println(th3.getName()+"Priority : "+th3.getPriority());
    }
}

class MyThread extends Thread{
    public void run(){
        for(int i=0;i<5;i++){
            System.out.println(Thread.currentThread().getName()+" "+i);
            try{
                Thread.sleep(5000);
            }catch(InterruptedException e){
                e.printStackTrace();
            }
        }
    }
}