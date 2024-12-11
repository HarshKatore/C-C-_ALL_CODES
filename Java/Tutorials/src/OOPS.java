class Pen{
    String color;                  //data
    String type;

    public void write(){           //members/functions
        System.out.println("Harsh Katore");         //s caps String System
    }
    public void PrintColor(){           //members/functions
        System.out.println(this.color);         //its a keyword,it will print(works) color for the object which is calling it/it tell method which object had called him or trying to access
    }
}

class Student{                 //in java by default class name starts caps and method name small
    
}
public class OOPS {         //public class must be of file name ////main class  is insoide it 
    public static void main(String args[]){       //takes argument
        Pen p1=new Pen();
        p1.color="blue";
        p1.type="gel";

        p1.write();
        p1.PrintColor();
    }
}
