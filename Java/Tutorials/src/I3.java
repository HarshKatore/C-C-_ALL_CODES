class Shape3{                           //1 2 3 is given bcz same class is there in previous file ignore see name only
    public void areaDis(){
        System.out.println("shape");
    }


    
}
class Triangles3 extends Shape3{
    public void area(int l, int h){
        System.out.println("triangle"+l*h);
    }
}
class circle extends Shape3{
    public void typePrint(){
        System.out.println("right ang tri");
    }
}
public class I3 {
    public static void main(String args[]){
        Triangles3 t1=new Triangles3();
       t1.areaDis();
        circle c2=new circle();
       c2.areaDis();
      
    
    
    }
}
/*hierarchycal */
