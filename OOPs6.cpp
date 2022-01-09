#include <iostream>
using namespace std;

class batsman
{
    int bcode;
    char name[20];
    int inninings,notout,runs;
    float batavg;
          void calcavg(void);
    public:
          void readdata(void);
          void display(void);
};

void batsman::readdata(void)
{
    cout<<"Enter batsman code: ";
    cin>>bcode;
    cout<<"Enter name of batsman: ";
    cin>>name;
    cout<<"Enter inninings,notouts and runs: ";
    cin>>inninings>>notout>>runs;
       calcavg();
}

void batsman::calcavg(void)
{
    batavg=runs/(inninings-notout);
}

void batsman::display(void)
{
    cout<<"Bcode: "<<bcode<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Inninings: "<<inninings<<endl;
    cout<<"Runs: "<<runs<<endl;
    cout<<"Notouts: "<<notout<<endl;
    cout<<"Batting average: "<<batavg<<endl;
}

int main()
{
    batsman object1;
    object1.readdata();
    object1.display();

    return 0;
}