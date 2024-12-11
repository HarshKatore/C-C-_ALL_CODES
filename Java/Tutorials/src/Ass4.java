// import java.util.Scanner;
// class Employee{
// String emp_name;
// String emp_id;
// String address;
// String mail_id;
// int mobile_no;
// void display(){
// System.out.println(emp_name);

// System.out.println(emp_id);
// System.out.println(mail_id);
// System.out.println(mobile_no);
// }
// }
// class Programmer extends Employee{  
//  int BP;

// void display(){
//  System.out.println(BP);
//  System.out.println("DA"+0.97*BP);
//  System.out.println("HRA"+0.10*BP);
//  System.out.println("PF"+0.12*BP);
//  System.out.println("FUND"+0.001*BP);
       
// }
// }
// class Assistant_Professor extends Employee{  
//  int BP;

// void display(){
//  System.out.println(BP);
//  System.out.println("DA"+0.97*BP);
//  System.out.println("HRA"+0.10*BP);
//  System.out.println("PF"+0.12*BP);
//  System.out.println("FUND"+0.001*BP);
       
// }
// }
// class Associate_Professor extends Employee{  
//  int BP;

// void display(){
//  System.out.println(BP);
//  System.out.println("DA"+0.97*BP);
//  System.out.println("HRA"+0.10*BP);
//  System.out.println("PF"+0.12*BP);
//  System.out.println("FUND"+0.001*BP);
       
// }

// }
// class Professor extends Employee{  
//  int BP;

// void display(){
//     System.out.println(BP);
//  System.out.println("DA"+0.97*BP);
//  System.out.println("HRA"+0.10*BP);
//     System.out.println("PF"+0.12*BP);
//  System.out.println("SATFF CLUD FUND"+0.001*BP);
       
// }
// }
// public class Ass4{
// public static void main(String args[]){
//     boolean t=true;
//     while(t){
// System.out.println("\n1.Programmer\n2.Assistant_Professor\n3.Associate_Professor\n4.Professor\n5.exit");
// Scanner input=new Scanner(System.in);
// System.out.print("Enter an your choice: ");
// int ch=input.nextInt();
//  switch (ch) {
     
//     case 1:
//            Employee e1=new Employee();
//            Programmer p=new Programmer();
//            Scanner obj1=new Scanner(System.in);
//            System.out.println("Enter name");
//            e1.emp_name=obj1.nextLine();
//            System.out.println("Enter employee id");
//            e1.emp_id=obj1.nextLine();
//            System.out.println("enter mail id");
//            e1.mail_id=obj1.nextLine();
//            System.out.println("enter address");
//            e1.address=obj1.nextLine();
//            System.out.println("enter mobile no");
//            e1.mobile_no=obj1.nextInt();
//            p.BP=15000;
//            p.display();
//            e1.display();
//            break;
//     case 2:
//            Employee e2=new Employee();
//            Assistant_Professor a=new Assistant_Professor();
//            Scanner obj2=new Scanner(System.in);
//            System.out.println("Enter name");
//            e2.emp_name=obj2.nextLine();
//            System.out.println("Enter employee id");
//            e2.emp_id=obj2.nextLine();
//            System.out.println("enter mail id");
//            e2.mail_id=obj2.nextLine();
//            System.out.println("enter address");
//            e2.address=obj2.nextLine();
//            System.out.println("enter mobile no");
//            e2.mobile_no=obj2.nextInt();
//            a.BP=10000;
//            a.display();
//            e2.display();
//            break;
//     case 3:
//            Employee e3=new Employee();
//            Associate_Professor ap=new Associate_Professor();
//            Scanner obj3=new Scanner(System.in);
//            System.out.println("Enter name");
//            e3.emp_name=obj3.nextLine();
//            System.out.println("Enter employee id");
//            e3.emp_id=obj3.nextLine();
//            System.out.println("enter mail id");
//            e3.mail_id=obj3.nextLine();
//            System.out.println("enter address");
//            e3.address=obj3.nextLine();
//            System.out.println("enter mobile no");
//            e3.mobile_no=obj3.nextInt();
//            ap.BP=200000;
//            ap.display();
//            e3.display();
//            break;
//     case 4:
//            Employee e4=new Employee();
//            Professor pf=new Professor();
//            Scanner obj4=new Scanner(System.in);
//            System.out.println("Enter name");
//            e4.emp_name=obj4.nextLine();
//            System.out.println("Enter employee id");
//            e4.emp_id=obj4.nextLine();
//            System.out.println("enter mail id");
//            e4.mail_id=obj4.nextLine();
//            System.out.println("enter address");
//            e4.address=obj4.nextLine();
//            System.out.println("enter mobile no");
//            e4.mobile_no=obj4.nextInt();
//            pf.BP=15000;
//            pf.display();
//            e4.display();
//     case 5:t=!t;
//            break;    
//          default:
//          System.out.println("Error!please try again");
//         }
//         input.close();
//     }
// }
// }


import java.util.*;
class employee{
	 String Emp_name;
	 int Emp_id;
	 String Address;
	 String Mail_id;
	 long  Mobile_no;
}

class programmer extends employee{
	  int bp;
	 programmer(int basicp,String name,int  id,String Add,String Mail,long Mob){
		 bp=basicp;
		 Emp_name=name;
		 Emp_id=id;
		 Address=Add;
		 Mail_id=Mail;
		 Mobile_no=Mob;
	 }
	 public void salary() {
		 double da=(97*bp)/100;
		 double hra=(10*bp)/100;
		 double pf=(12*bp)/100;
		 double cf=(0.1*bp)/100;
		 System.out.println("******************The Employee Salary Slip****************");
		 System.out.println("=========================================================");
		 System.out.println("Employee Id   :"+Emp_name);
		 System.out.println("=========================================================");
		 System.out.println("Mail-id       :"+Mail_id);
		 System.out.println("=========================================================");
		 System.out.println("Mobile Number :"+Mobile_no);
		 System.out.println("=========================================================");
		 System.out.println("Gross salary  :" + (int)(bp+da+hra));
		 System.out.println("=========================================================");	 
		 System.out.println("Net salary    :" +(int)(bp+da+hra-pf-cf));
		 System.out.println("========================================================");
		 System.out.println("\n");
	  System.out.println("\n");System.out.println("\n");

	 }
}

class AssistantProfessor extends employee{
	 public int bp;
	 AssistantProfessor(int basicp,String name,int  id,String Add,String Mail,long Mob){
		 bp=basicp;
		 Emp_name=name;
		 Emp_id=id;
		 Address=Add;
		 Mail_id=Mail;
		 Mobile_no=Mob;
	 }
	 public void salary() {
		 double da=(97*bp)/100;
		 double hra=(10*bp)/100;
		 double pf=(12*bp)/100;
		 double cf=(0.1*bp)/100;
		 System.out.println("******************The Employee Salary Slip****************");
		 System.out.println("=========================================================");
		 System.out.println("Employee Id   :"+Emp_name);
		 System.out.println("=========================================================");
		 System.out.println("Mail-id       :"+Mail_id);
		 System.out.println("=========================================================");
		 System.out.println("Mobile Number :"+Mobile_no);
		 System.out.println("=========================================================");
		 System.out.println("Gross salary  :" + (bp+da+hra));
		 System.out.println("=========================================================");	 
		 System.out.println("Net salary    :" +(bp+da+hra-pf-cf));
		 System.out.println("========================================================");
		 System.out.println("\n");
	 }
	 
}
class AssociateProfessor extends employee{
	 public int bp;
	 AssociateProfessor(int basicp,String name,int  id,String Add,String Mail,long Mob){
		 bp=basicp;
		 Emp_name=name;
		 Emp_id=id;
		 Address=Add;
		 Mail_id=Mail;
		 Mobile_no=Mob;
	 }
	 public void salary() {
		 double da=(97*bp)/100;
		 double hra=(10*bp)/100;
		 double pf=(12*bp)/100;
		 double cf=(0.1*bp)/100;
		 System.out.println("******************The Employee Salary Slip****************");
		 System.out.println("=========================================================");
		 System.out.println("Employee Id   :"+Emp_name);
		 System.out.println("=========================================================");
		 System.out.println("Mail-id       :"+Mail_id);
		 System.out.println("=========================================================");
		 System.out.println("Mobile Number :"+Mobile_no);
		 System.out.println("=========================================================");
		 System.out.println("Gross salary  :" + (bp+da+hra));
		 System.out.println("=========================================================");	 
		 System.out.println("Net salary    :" +(bp+da+hra-pf-cf));
		 System.out.println("========================================================");
		 System.out.println("\n");
	 }
	 
}
class Professor extends employee{
	 public int bp;
	 Professor(int basicp,String name,int  id,String Add,String Mail,long Mob){
		 bp=basicp;
		 Emp_name=name;
		 Emp_id=id;
		 Address=Add;
		 Mail_id=Mail;
		 Mobile_no=Mob;
	 }
	 public void salary() {
		 double da=(97*bp)/100;
		 double hra=(10*bp)/100;
		 double pf=(12*bp)/100;
		 double cf=(0.1*bp)/100;
		 System.out.println("******************The Employee Salary Slip****************");
		 System.out.println("=========================================================");
		 System.out.println("Employee Id   :"+Emp_name);
		 System.out.println("=========================================================");
		 System.out.println("Mail-id       :"+Mail_id);
		 System.out.println("=========================================================");
		 System.out.println("Mobile Number :"+Mobile_no);
		 System.out.println("=========================================================");
		 System.out.println("Gross salary  :" + (bp+da+hra));
		 System.out.println("=========================================================");	 
		 System.out.println("Net salary    :" +(bp+da+hra-pf-cf));
		 System.out.println("========================================================");
		 System.out.println("\n");
	 }
	 
}

public class Ass4 {

	public static void main(String[] args) {
		int o=1;
		Scanner scan= new Scanner(System.in);
		while(o!=0) {
		System.out.println("Enter the employee type(0 to end):= 1]programmer 2]Assistant Professor 3]Associate Professor and 4]Professor");
		
		o=scan.nextInt();
		if(o==0) {break;}
		switch(o) {
		case 1:
		
		System.out.println("Enter the values:=1]basic pay 2]name 3] id 4] Address 5] mail 6]mobile Number\\n");
		int bp=scan.nextInt();
		scan.nextLine();
		String Emp_name=scan.next();
		scan.nextLine();
		int Emp_id=scan.nextInt();
		scan.nextLine();
		String Address=scan.next();
		scan.nextLine();
		String Mail_id=scan.next();
		scan.nextLine();
		long  Mobile_no=scan.nextLong();
		scan.nextLine();
		programmer p=new programmer(bp,Emp_name,Emp_id, Address,Mail_id, Mobile_no );
		p.salary();
		break;	
		case 2:
			System.out.println("Enter the values:=1]basic pay 2]name 3] id 4] Address 5] mail 6]mobile Number\\n");
		int bp1=scan.nextInt();
		scan.nextLine();
		String Emp_name1=scan.next();
		scan.nextLine();
		int Emp_id1=scan.nextInt();
		scan.nextLine();
		String Address1=scan.next();
		scan.nextLine();
		String Mail_id1=scan.next();
		scan.nextLine();
		long  Mobile_no1=scan.nextLong();
		scan.nextLine();
		AssistantProfessor x=new AssistantProfessor(bp1,Emp_name1,Emp_id1, Address1,Mail_id1, Mobile_no1 );
		x.salary();
		
		break;	
		case 3:
			System.out.println("Enter the values:=1]basic pay 2]name 3] id 4] Address 5] mail 6]mobile Number\\n");
		int bp2=scan.nextInt();
		scan.nextLine();
		String Emp_name2=scan.next();
		scan.nextLine();
		int Emp_id2=scan.nextInt();
		scan.nextLine();
		String Address2=scan.next();
		scan.nextLine();
		String Mail_id2=scan.next();
		scan.nextLine();
		long  Mobile_no2=scan.nextLong();
		scan.nextLine();
		AssociateProfessor y=new AssociateProfessor(bp2,Emp_name2,Emp_id2, Address2,Mail_id2, Mobile_no2 );
		y.salary();	
		break;	
		case 4:
			System.out.println("Enter the values:=1]basic pay 2]name 3] id 4] Address 5] mail 6]mobile Number\n");
		int bp3=scan.nextInt();
		scan.nextLine();
		String Emp_name3=scan.next();
		scan.nextLine();
		int Emp_id3=scan.nextInt();
		scan.nextLine();
		String Address3=scan.next();
		scan.nextLine();
		String Mail_id3=scan.next();
		scan.nextLine();
		long  Mobile_no3=scan.nextLong();
		scan.nextLine();
		Professor z=new Professor(bp3,Emp_name3,Emp_id3, Address3,Mail_id3, Mobile_no3 );
		z.salary();
		break;	
		
		
		}
			
	}
		scan.close(); 	
	
}

 
 
}