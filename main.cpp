#include <iostream>

using namespace std;

class Shape
{
public:
    double w;
    double h;
    void setvalue(double a,double b)
    {
        w=a;
        h=b;
    }
};

class rectangle:public Shape
{
    public:
    void area1()
    {
        double s;
        s=w*h;
        cout<<"rectangle area = "<<s<<endl;
    }
};
class triangle:public Shape
{
   public:
    void area2()
    {
        double k;
        k=(w*h)/2;
        cout<<"triangle area = "<<k<<endl;
    }

};

int main()
{
    int x,y;
    cin>>x>>y;
    rectangle obj1;
    triangle obj2;
    obj1.setvalue(x,y);
    obj1.area1();
    obj2.setvalue(5,8);
    obj2.area2();
    return 0;
}
