#include <bits/stdc++.h>
using namespace std;

class person
{
public:
  
  person(){cout<<1<<endl;}
  ~person(){cout<<2<<endl;}

};
class male: protected person{
  public: 
    
  male(){cout<<3<<endl;}
  ~male(){cout<<4<<endl;}

   
};
class harsh: public male{
  public: 
    
  void p(){ cout<<0;}
};
int main()
{
  
  person* a = new male();
    
  return 0;
}