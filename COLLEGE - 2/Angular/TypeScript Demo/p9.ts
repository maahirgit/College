class Student {   
        //defining fields    
        id: number;  
        name1:string;  
      
        //creating method or function   
        display(){   
            console.log("Student ID is: "+this.id)   
            console.log("Student ID is: "+ this.name1)   
        }   
    }   
      
    //Creating an object or instance     
    var obj = new Student(); 
    obj.id = 101;  
    obj.name1 = "Virat Kohli";  
    obj.display();  