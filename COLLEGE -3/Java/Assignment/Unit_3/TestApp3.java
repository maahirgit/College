// Question 3

class Person{
    int id;
    String name;
    public Person(int id,String name){
        this.id = id;
        this.name = name;
    }

}

class Employee extends Person{
    String Designation;
    public Employee(int id,String name,String Designation){
        super(id,name);
        this.Designation = Designation;
    }

    public void display(){
        System.out.println(id+" "+name+" "+Designation);
    }
}



class TestApp3{
    public static void main(String args[]){
        Employee e = new Employee(1,"Maahir","Ceo");
        e.display();
    }
}