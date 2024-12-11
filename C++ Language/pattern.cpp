/*
i is how many rws have to print
second j/...  is for how much time we have to traverse in horizontal dirn 
if whiile printing in horizontal dirn we have to ptint sequentially we can take start in that position and then increment and print 
for reverse sequence also we can use start
see for condition where it starts and ends 
i condithin contain n,j->i,n


we dont need to print space in any line after the significant character bbcoz its void automatically its printer  (only before spaces have to print )
*****A     
****ABA
***ABCBA
**ABCDCBA
*ABCDEDCBA

*/
#include<iostream>
using namespace std;

int main(){
/*char a= 'A'+1;
cout<<a<<endl;
*/

/*bool a=9<1;                //stores both true,false or 0,1;
cout<<a<<endl;
*/




int n;
cin>>n;
int row=1;
while(row<=n){

int i=1;
while(i<=n-row+1){
    cout<<"*";
    i++;
}

int j=1;
while(j<=row){
    char c= 'A'+j-1;
    cout<<c;
    j++;
}

int k=1;
int start=row-2;
while(k<=row-1){
    char c= 'A'+start;
    cout<<c;
    k++;
    start--;
}
cout<<endl;
row++;
}
    return 0;
}