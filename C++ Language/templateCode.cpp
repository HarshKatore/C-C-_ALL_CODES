/*#include <iostream>
using namespace std;
 
class vector
{
    public:
        int *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new int[size];
        }
    int dotProduct(vector &v){
        int d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
 
int main()
{
    vector v1(3); //vector 1
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector v2(3); //vector 2
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;
    int a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}

this program by using template:
*/
#include <iostream>
using namespace std;
 
template <class T>
class vector
{
    public:
        T *arr;
        T*arr2;
        int size;
        vector(int m)
        {
            size = m;
            arr = new T[size];                                  //first vector
            arr2 = new T[size];                                  //second vector
        }
    T dotProduct(){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=arr[i]*arr2[i];                      
        }
        return d;
    }
};
 
int main()
{
    vector<float> v1(3); //vector 1 with a float data type    specify the data type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
   
    v1.arr2[0]=0.1;
    v1.arr2[1]=1.90;
    v1.arr2[2]=4.1;
    float a = v1.dotProduct();
    cout<<a<<endl;
    return 0;
}

