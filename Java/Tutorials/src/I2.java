class Shape2{
    public void areaDis(){
        System.out.println("shape");
    }


    
}
class Triangles2 extends Shape2{
    public void area(int l, int h){
        System.out.println("triangle"+l*h);
    }
}
class RightAngTri extends Triangles2{
    public void typePrint(){
        System.out.println("right ang tri");
    }
}
public class I2 {
    public static void main(String args[]){
        RightAngTri t1=new RightAngTri();
       t1.areaDis();
       t1.area(12,15);
       t1.typePrint();
    
    
    }
}
/*multilevel */
