class Child{
    String name;
    int age;

    public void printInfo(){
        System.out.println(this.name);
        System.out.println(this.age);
    }
    // Child(){
    //     System.out.println("Non paramaterised constructor called");
    // }
    Child(String name,int age){
         System.out.println(" paramaterised constructor called");
         this.name=name;
         this.age=age;
    }
    Child(Child s1){
             System.out.println(" copy constructor called");
             this.name=s1.name;
             this.age=s1.age;
    }
}
public class Student {
public static void main(String args[]){
    Child s1= new Child("pqrs",44);                     //new keyword alloc memory at heap block where objct is stored// this has paranthesis bcz its also a fn called constructor used to construct that object,they has same name as class, do not return and nop return type,for one obj constructor can be called only once,at the time of initilization 1]non parameterised constructor    2]default constr. it is non paramaterised c.and its by default there but but if we make any explecit c. then this non paramar and by def c. vanish and if you need then you have to make this non paramater c explic. like 2nd one apna banaya to ye bhi banao 3] copy constructor in cpp these are available default ,also can make explicit but in java copy cons. are user defined   
    // s1.name="abcd";
    // s1.age=33;
    s1.printInfo();

    Child s2= new Child(s1);                 //copy constructor copy info of given obj to the obj calling it
    s2.printInfo(); 
}


}
//1.in java there is a garbage collector which destroyes  unused variable objects and frees memmory aquired
//2. like cpp no need to write destructor it is by defaiult as it as garbage collector
