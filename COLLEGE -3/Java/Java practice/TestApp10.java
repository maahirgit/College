public class TestApp10{
    public static void main(String[] args){
    Thread1 th1 = new Thread1();
    Thread1 th2 = new Thread1();
    Thread1 th3 = new Thread1();

    th1.setPriority(Thread.MIN_PRIORITY);
    th2.setPriority(Thread.NORM_PRIORITY);
    th3.setPriority(Thread.MAX_PRIORITY);

    th1.start();
    th2.start();
    th3.start();

    // System.out.println(th1.getName()+" Priority "+th1.getPriority());
    // System.out.println(th2.getName()+" Priority "+th2.getPriority());
    // System.out.println(th3.getName()+" Priority "+th3.getPriority());
}
}
class Thread1 extends Thread{
    public void run(){
        for(int i=0;i<5;i++){
            System.out.println(Thread.currentThread().getName() + " is running - Iteration " + i);

        }
    }
}