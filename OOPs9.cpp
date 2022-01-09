#include <iostream>
using namespace std;

class cla1
{
    private:
      unsigned long int a;
    protected:
      int b;
    public:
      int c;
      void getda(void){
          cout<<"enter a: ";
          cin>>a;
          cout<<a<<endl;
      }

};

class cla2:public cla1
{
     int d;
    protected:
     int e;
    public:
     int f;
     void getdata(void)
     {
         cout<<"enter d,e,f,c and b: ";
         cin>>d>>e>>f>>c>>b;
         cout<<d<<e<<f<<c<<b<<endl;
     }

};

int main()
{
    cla2 obj1;
    obj1.getdata();
    obj1.getda();
    return 0;
}