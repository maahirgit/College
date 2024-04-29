// interface Sports {
//     int sportMarks = 50; // Example value for sport marks

//     void putWeight();
// }

// class Result implements Sports {
//     private int total; // Total marks

//     @Override
//     public void putWeight() {
//         // Calculate total marks including sports marks
//         total = 1000 + sportMarks;
//     }

//     public int getTotal() {
//         return total;
//     }
// }

// public class Test11 {
//     public static void main(String[] args) {
//         Result result = new Result();
//         result.putWeight(); // Calculate total marks including sports marks
//         int totalMarks = result.getTotal();

//         System.out.println("Total marks: " + totalMarks);
//         System.out.println("Sports marks: " + Sports.sportMarks);
//     }
// }




interface Sports{
    int sportMarks = 10;
    void putWeight();
}

class result implements Sports{
    int s1=20;
    int s2=50;
    int s3 = 70;
    int total = s1+s2+s3;
    public void putWeight(){
        int perc = total+sportMarks;
        System.out.println(perc);
        if(perc>140){
            System.out.println('A');
        }
    }
}

class Test11{
    public static void main(String args[]){
    Sports s1 = new result();
    s1.putWeight();
    }
}