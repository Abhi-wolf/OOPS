// Simple object oriented programming program



#include <iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    string gender;
    
    void print()
    {
        cout<<name<<" "<<age<<" "<<gender<<endl;
    }
};


int main()
{
    student a;
    a.name="Abhijeet";
    a.age=19;
    a.gender="male";

    a.print();

    return 0;
}