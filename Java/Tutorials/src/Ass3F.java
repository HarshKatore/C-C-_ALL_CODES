import java.util.*;
class publication {
//private data members
private String title;
private int price;
private int copies;
private int total;
Scanner sc=new Scanner(System.in);//scanner class 
object
public void settitle(String title) {
//setter method for title
this.title=title;
}
public void setcopies(int copies) {
//setter method for copies
this.copies=copies;
}
public String gettitle() {
//getter method for title
return title;
}
public int getTotal() {
//getter method for price
return total;
}
public int getCopies() {
//getter method for copies
return copies;
}
public int getprice() {
return price;
}
void read_publ() {
//read or input method for common data members 
of magazine and book class
System.out.print("enter title : ");
title=sc.next();
System.out.print("enter price: ");
price=sc.nextInt();
System.out.print("enter copies: ");
copies=sc.nextInt();
}
void display() {
//display method for common data members of book 
and magazine class
System.out.print(title+"\t"+price+"\t"+copies);
}
void sale_copy(int number) {
//common method to sale book or magazine and 
generate bill
if (number <= copies)
//if customer needed copies are less than 
available
{
copies=copies-number;
total=total + number*price;
System.out.println("\tYOU PURCHASED 
"+number +" COPIES \n\tYOU HAVE TO PAY : 
"+(price*number));
}
else //if customer needs copies more 
than available in stock
System.out.println(" INSUFFICIENT 
STOCK!!!!!!!!!");
}
}
//======================= CLASS book 
=======================//
class book extends publication {
private String author;
//data member of book class only
 
void order_copies(int number) { //increase 
available copies of book by ordering 
int x=getCopies()+number;
setcopies(getCopies()+number);
//as data members are private, we access them 
with the help of methods
System.out.println("\n\tORDER SUCESSFUL....");
System.out.println("\tCOPIES AVAILABLE : "+x);
}
void read_book() {
//method calling read method of publication 
class and also reading author
read_publ();
System.out.print("enter author book: ");
author=sc.next();
}
void display_book(){
System.out.println("title \tprice \tcopy 
\tauthor");
display();//call to display defined in 
publication class
System.out.println("\t"+author);
}
}
//======================= CLASS magazine 
=======================//
class magazine extends publication{
//magazine class is inherited from publication
private int order_qty; //data members
private String issue_date;
void receive_issue(String new_issue_date) {
//method to issue new or upgraded magazine
System.out.println("ENTER NEW COPIES ORDERED: 
");
order_qty=sc.nextInt();
setcopies(order_qty);
//setting values to copies by setter method
issue_date=new_issue_date;
System.out.println("\tTHE MAGAZINE 
"+gettitle()+" \n\t WITH ISSUE DATE 
"+issue_date+"AVAILABLE");
}
void read_mag() { //method to read or input 
magazine details
read_publ(); //call to read method defined 
in publication class
System.out.print("Enter THe Current Issue Date 
[dd/mm/yyyy]");
issue_date=sc.next();
}
void display_mag() { //display method to 
display 
System.out.println("title \tprice \tcopy 
\tdate");
display();
System.out.println("\t"+issue_date);
}
}


public class Ass3F {
    
}
