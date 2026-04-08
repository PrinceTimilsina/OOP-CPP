//C++ Program of Hierarchical inheritance to display area and circumference of circle
#include<iostream>
using namespace std;
class Circle{
    protected:
    int r,a,c;
    float pi=3.14;
    public:
    int setData(int r){
        this->r=r;
        return 0;
    }
};
class area:public Circle{
    public:
    int calculateArea()
	{
        a=pi*r*r;
        cout<<"Area of Circle is:"<<a<<endl;
        return 0;
    }
};

class cc:public Circle{
    public:
    int calculatecc(){
      c=2*pi*r;
     cout<<"Perimeter of Rectangle is:"<<c<<endl;
      return 0;
    }
};

int main(){
    area obj;
    cc obj1;  
    obj.setData(5);
    obj.calculateArea();
    obj1.setData(4);
    obj1.calculatecc();
    return 0;
}
