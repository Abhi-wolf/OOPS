#include <iostream>
using namespace std;

/*class cla1
{
    int a;
    public:
    int b;

    void d()
    {
        int a=1;
        int b=2;
    }

    void e()
    {
        cout<<a<<endl;
        cout<<b<<endl;

        cout<<a+b<<endl;
    }
}; */




 /* class cla2
{
    int a;
    public:
    int b;

    void d(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<a+b<<endl;
    }

    void e(int f,int g)
    {
        a=f;
        b=g;
    }
};  */




/*class cla3
{
    int a;
    int b;
    public:
    void d()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<a+b<<endl;
    }

    void e(int a,int b)                     // " this-> " is a arrow operator
    {                                       // first priority -- function value, class value, global value
        this->a=a;
        this->b=b;
    }
};  */




class cla4
{
    int a;
    int b;

    public:
    void d()
    {
        e();
        cout<<a<<endl<<b<<endl;
        cout<<a+b<<endl;
    }

    void e()
    {
        a=10000;
        b=20000;
    }
};





int main()
{
    // cla1 ob1;
    // ob1.d();
    // ob1.e();

    
    // cla2.ob2;
    // int h=12,g=1000;
    // ob2.d();
    // ob2.e(h,g);
    // ob2.d();


    // cla3 ob3;
    // int h=34000,g=200;
    // ob3.e(h,g);
    // ob3.d();
    // ob3.e(12,34);
    // ob3.d();


    cla4 ob4;
    ob4.d();
    


  return 0;
}