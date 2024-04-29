// package Javapractice;
public class TestApp09{
    public static void main(String[] args){
        MyThread thread1 = new MyThread();
        MyThread thread2 = new MyThread();

        thread1.start();
        thread2.start();
    }
}
class MyThread extends Thread{
        public void run(){
            System.out.println(Thread.currentThread().getName()+" Hello");
        }
    }
