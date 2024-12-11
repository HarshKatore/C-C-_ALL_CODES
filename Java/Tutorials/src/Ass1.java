import java.util.Scanner;

class complex{
    int r,i;
    complex(){

    }
    complex(int real, int image){
        r=real;
        i=image;
    }
   
    static complex complex_add(complex c1, complex c2){
        complex temp= new complex();
        temp.r=c1.r+c2.r;
        temp.i=c1.i+c2.i;
        return temp;
       
    }
     static complex complex_sub(complex c1, complex c2){
        complex temp= new complex();
        temp.r=c1.r-c2.r;
        temp.i=c1.i-c2.i;
        return temp;
       
    }
   
    void printcomp(){
        System.out.println("Complex Number:"+r+'+'+i+"i");
    }
}
public class Ass1
{
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the real part of complex no:");
    int a=sc.nextInt();
    System.out.println("Enter the imaginary part of complex no:");
    int b=sc.nextInt();
    System.out.println("Enter the real part of complex no:");
    int c=sc.nextInt();
    System.out.println("Enter the imaginary part of complex no:");
    int d=sc.nextInt();
      complex C1 = new complex(a, b);
        C1.printcomp();
        complex C2 = new complex(c, d);
        C2.printcomp();
        complex C3 = new complex();
         C3 = complex.complex_add(C1, C2);
        System.out.print("Sum of ");
        C3.printcomp();
        C3 = complex.complex_sub(C1, C2);
        System.out.print("Difference of ");
        C3.printcomp();
        sc.close();
}
}

