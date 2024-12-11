

import java.util.*;

class Publication{

String title;

int price;

int copies;

public void sellCopies(int qty) {

System.out.println("Total Publication Sale is "+ (qty*price));

}

}

class Book extends Publication{

String author;





public void sellCopies(int qty) {

copies=copies-qty;

System.out.println("Total Book Sale is "+ (qty*price));

}
public void orderCopies(int prevCpy) {
    super.sellCopies(prevCpy);
    copies=copies+prevCpy;
    
    }
}

public class Ass3 {

public static void main(String args[]) {

Scanner scan = new Scanner(System.in);


Publication p=new Publication();



int option=1;

int book=0;

System.out.println("Enter the count of book= ");

book=scan.nextInt();

Book obj1[] =new Book[book];

while(option!=0) {

System.out.println("Enter: 1]Read Book 2]Display Book 3]order copies");

option=scan.nextInt();

if(option==0) break;

switch(option) {

case 1:

int a=0;

while(a<book) {

obj1[a]=new Book();

System.out.println("Enter: 1]title");

obj1[a].title=scan.next();

scan.nextLine();

System.out.println("Enter: 2]price ");

obj1[a].price=scan.nextInt();

scan.nextLine();

System.out.println("Enter: 3]copies ");

obj1[a].copies=scan.nextInt();

scan.nextLine();

System.out.println("Enter: 4]author");

obj1[a].author=scan.next();

a=a+1;

}

break;

case 2:

int b=0;

while(b<book) {

System.out.println("Available Books are: ");

System.out.println("Sr.No"+"\t"+"Title"+"\t"+"Price"+"\t"+"copies"+"\t"+"Author");

System.out.println((b+1)+"\t"+obj1[b].title+"\t" + obj1[b].price +"\t"+ obj1[b].copies+"\t" + obj1[b].author);

b=b+1;

}

break;

case 3:

System.out.println("Enter book you want to buy:");

String str=scan.next();

for(int i=0;i<book;i++) {

if(str.equals(obj1[i].title)) {

System.out.println("Book Available"+"\n"+"enter no of copy you want:");

int z= scan.nextInt();

if(z<=obj1[i].copies)

obj1[i].sellCopies(z);

else {

System.out.println("Not enough books availavbe: (try next time) ");

obj1[i].orderCopies(100);



}

}

}

}

}

scan.close();

}

}