 #include <iostream>
using namespace std;


/*
template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display()
    {
        cout << data;
    }
};
@following we template the same class as above but templating of member function done outside{}
*/
/*
template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();            //here we only declare the function in class
};
 
template <class T>
void Harry<T> :: display(){      //here we define its work 
    cout<<data;
}                                //its same concept like before at initial of course just give heading: template <class T> and <T>  before:: other is conventional
int main()
{
    Harry<int> h(5.7);
    cout << h.data << endl;
    h.display();
    return 0;
}
  here onlynthing is  that here we are overloading a function ie same name but data type or no of input change 
and one of it uses template and other normal but with exact same data type 
in this case prioroty is to exact 
*/
#include <iostream>
using namespace std;
 
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
int main()
{
    func(4);  //Exact match takes the highest priority
   
   func<char>('c');
    return 0;
}
