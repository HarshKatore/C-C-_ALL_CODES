class Childs{                                    //no twp class of same name child was there in last file so given error
    String name;
    int age;
    //..................polymorphism...............function overloading .....many fn of same name in same class but there must be some changes in them like parameter type ,return type,no of argument if sameaggument we want to send then few extra ,sequence
    //in industry mostly compile time is used as run time do not give error while writing code it gives when we run so while using app if given problen its big issue compile time can easily identified
    // public void printInfo(){
    //     System.out.println(this.name);
    //     System.out.println(this.age);
    // }
    public void printInfo(String name,int age){
        System.out.println(name);                    //no this here ow print of class var
        System.out.println(age);
    }
    public void printInfo(String name){
        System.out.println(name);
       
    }
    public void printInfo(int age){
        
        System.out.println(age);
    }
   
    
}

public class Polymorphism {
    public static void main(String args[]){
        Childs s1=new Childs();
        s1.name="abcd";
        s1.age=33;
    s1.printInfo(s1.age);
    s1.printInfo(s1.name);
    s1.printInfo(s1.name,s1.age);
    }
}
/*
poly...= many forms
ek hi kam alag alag tarikese karna
2types=
a]function overloading(compile time pol.  ie we write it intentionally in code)
many function of same name but diff forms

b]function overriding(runtime pol   ie happens while running overrid)
(see in inheritance)
*/
