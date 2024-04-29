

//Write a java program to create 3 threads using Thread class. Three threads should
//calculate the sum of 1 to 5, 6 to 10 and 11 to 15 respectively. After all thread finishes
//main thread should print the sum and average.

public class TestApp13 
{
    public static void main(String[] args) 
    {
        // Create three threads for calculating sums
        SumThread thread1 = new SumThread(1, 5);
        SumThread thread2 = new SumThread(6, 10);
        SumThread thread3 = new SumThread(11, 15);

        // Start the threads
        thread1.start();
        thread2.start();
        thread3.start();

        try {
            // Wait for all threads to finish
            thread1.join();
            thread2.join();
            thread3.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // Calculate the total sum and average
        int totalSum = thread1.getSum() + thread2.getSum() + thread3.getSum();
        double average = (double) totalSum / 15; // Total numbers in the range

        // Print the total sum and average
        System.out.println(Thread.currentThread().getName() + "---" +"Total Sum: " + totalSum);
        System.out.println(Thread.currentThread().getName() + "---" +"Average: " + average);
    }
}

class SumThread extends Thread {
    private int start;
    private int end;
    private int sum;

    public SumThread(int start, int end) {
        this.start = start;
        this.end = end;
        this.sum = 0;
    }

    @Override
    public void run() 
    {
        for (int i = start; i <= end; i++) 
        {
            sum += i;
        }
        System.out.println(Thread.currentThread().getName() + "---" +  sum );
    }

    public int getSum() {
        return sum;
    }
}
