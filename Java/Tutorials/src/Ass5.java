//Harsh Vilas Katore(SYITA49)


//Shape Class:

import java.util.*;

abstract class Shape {

	

	Scanner sc=new Scanner(System.in);

	

	double length;

	double breadth;

	

	double CalLength() {

		return length;

	}

	

	double CalBreadth() {

		return breadth;

	}

	

	Shape(double a, double b){

		length=a;

		breadth=b;

	}

	abstract double compute_Area();

	

	void getData() {

		System.out.println("Enter the length of the rectangle: ");

		length=sc.nextDouble();

		System.out.println("Enter the breadth of the rectangle: ");

		breadth=sc.nextDouble();

	}

	

}



class Rectangle extends Shape{

	

	Scanner sc=new Scanner(System.in);

	double rectangle_Area=0;

	

	Rectangle(double a, double b){

		super(a, b);

	}

	

	double compute_Area() {

		rectangle_Area=CalLength()*CalBreadth();

		return rectangle_Area;

	}

}



class Triangle extends Shape{

	

	Scanner sc=new Scanner(System.in);

	

	double Triangle_Area=0;

	

	Triangle(double l, double b){

		super(l, b);

	}

	

	double compute_Area() {

		Triangle_Area=0.5*CalLength()*CalBreadth();

		return Triangle_Area;

	}

}













public class Ass5 {



	public static void main(String[] args) {

		

		Scanner sc=new Scanner(System.in);

		

		Shape s;

		double a, b, c, d;

		

		//RECTANGLE AREA

		System.out.println("Enter the Base of the Rectangle: ");

		a=sc.nextDouble();

		System.out.println("\n");

		System.out.println("Enter the Height of the Rectangle: ");

		b=sc.nextDouble();

		System.out.println("\n");

		

		Rectangle r=new Rectangle(a, b);

		s=r;

		System.out.println("The area of the Rectangle is: "+s.compute_Area());

		System.out.println("\n");

		

		//TRIANGLE AREA

		System.out.println("Enter the Base of the Triangle: ");

		c=sc.nextDouble();

		System.out.println("\n");

		System.out.println("Enter the Height of the Triangle: ");

		d=sc.nextDouble();

		System.out.println("\n");

		

		Triangle t=new Triangle(c, d);

		s=t;

		System.out.println("The area of the Triangle is: "+s.compute_Area());

		System.out.println("\n");

        sc.close();

	}

}
