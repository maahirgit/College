// Question 4

class Person{
    String name;
    int id;

    public Person(){
        this.id = 0;
    }

    public Person(int id){
        this.id=id;
        System.out.println(id);
    }

    public Person(String name){
        this.name = name;
        System.out.println(name);
    }
    public Person(Person obj){
        this.id = obj.id;
        System.out.println(id);

    }
}

class Details{
    public static void main(String args[]){
        Person p1 = new Person(1);
        Person p2 = new Person("Maahir");
        Person p3 = new Person(p1);
    }
}