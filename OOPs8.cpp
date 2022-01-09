/* When a class is inherited ,constructor of the base is called first whereas the 
       destructor of the derived class is called first. */


#include <iostream>
using namespace std;

class a
{
    private:
      int b;
      char c;
    public:
      a()
      {
          cout<<"constructor of a is  called \n";
      }
      int d;
      char e;
    protected:
      ~a()
      {
          cout<<"Destructot of a is  called \n";
      }
      int f;
      char g;
};

class a2: public a
{
    private:
      int x;
    public:
      int y;
      a2()
      {
          cout<<"constructor of a2 is  called \n";
      }
      ~a2()
      {
          cout<<"Destructor of a2 called \n";
      }
      void fun(void)
      {
          x=12;
          z=10;
          f=98;
          cout<<x<<z<<f<<endl;
      }
    protected:
      int z;
};

int main()
{
    a2 obj1;
    obj1.y=12;
    //obj1.z=34;
    obj1.d=34;
    //obj1.b=67;
    obj1.fun();


    return 0;
}