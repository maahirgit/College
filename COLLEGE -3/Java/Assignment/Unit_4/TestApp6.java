class TestApp6{
    public static void main(String args[]){
    Thread1 th1 = new Thread1();
    Thread2 th2 = new Thread2();

    th1.start();
    th2.start();
    }
}

class Thread1 extends Thread{
    public void run(){
    for(int i=0;i<5;i++){
        System.out.println(Thread.currentThread().getName()+" "+i);
        try{
            sleep(2000);
        }catch(InterruptedException e){
            e.printStackTrace();
        }
    }
    }
}

class Thread2 extends Thread{
    public void run(){
    for(int i=0;i<5;i++){
          System.out.println(Thread.currentThread().getName()+" "+i);
        try{
            sleep(4000);
        }catch(InterruptedException e){
            e.printStackTrace();
        }
    }
    }
}