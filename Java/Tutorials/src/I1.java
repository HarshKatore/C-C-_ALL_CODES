class Shape1{
    public void areaDis(){
        System.out.println("Display area");
    }


    
}
class Triangles1 extends Shape1{
    public void area(int l, int h){
        System.out.println(l*h);
    }
}
public class I1 {
    public static void main(String args[]){
        Triangles1 t1=new Triangles1();
       t1.areaDis();
       t1.area(12,15);
    
    
    }
}
/*this is **single level inheritance** ie from 1 level to next level only */