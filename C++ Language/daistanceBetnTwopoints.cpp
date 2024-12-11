#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x, y;
    friend  int  dist(point,point);
    public:
        point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};
 int dist(point z1,point z2){                   //z1 means first itration of point 
     int r=sqrt(pow(z2.y-z1.y,2)+pow(z2.x-z1.x,2));
     return r;
 }
int main(){
    point p(1, 0);
    p.displayPoint();

    point q(4, 0);
    q.displayPoint();
    int o=dist(p,q);
    cout<<"THE DISTANCE BETN POINTS IS: "<<o<<endl;
    return 0;
}
