#include <iostream>
#include <string>
using namespace std;


class dress
{
    string code;
    string type;
    int size;
    string material;
    float price;
         void cal_prize();
    public:
         void input();
         void display();
};

void dress::input()
{
    cout<<"Enter code: ";
    cin>>code;
    cout<<"Enter type: ";
    cin>>type;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter type of material: ";
    cin>>material;
      cal_prize();
}

void dress::cal_prize()
{
    if(material=="fabric")
    {
        if(type=="western")
          price=2500;
        else
          price=2200;
    }
    else
    {
        if(type=="western")
          price=(2500 - (20*2500/100));
        else
          price=(2200 - (20*2200/100));
    }
}


void dress::display()
{
    cout<<"******************** OUTPUT *******************"<<endl;
    cout<<"Code: "<<code<<endl;
    cout<<"Type: "<<type<<endl;
    cout<<"Size: "<<size<<endl;
    cout<<"Material: "<<material<<endl;
    cout<<"Price: "<<price<<endl;
}


int main()
{
  dress obj1;
  obj1.input();
  obj1.display();

    return 0;
}