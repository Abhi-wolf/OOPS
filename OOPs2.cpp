#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;


class student
{
    public:
    string name;
    int age;
    bool gender;                        // 1 for female and 0 for male

    student()
    {
        cout<<"Default constructor"<<endl;
    }


    void printinfo()
    {
        transform(name.begin(),name.end(),name.begin(), :: toupper);
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        if(gender==0)
         cout<<"Gender : "<<"Male"<<endl;
        else
         cout<<"Gender : "<<"Female"<<endl;
    }

};


int main()
{
    student a[3];
    cout<<"Enter data in gender enter 1 for female and 0 for male \n";
    for(int i=0;i<3;i++)
    {
        cout<<"Enter name: ";
        cin>>a[i].name;
        cout<<"Enter age: ";
        cin>>a[i].age;
        cout<<"Enter gender : ";
        cin>>a[i].gender;
    }

    for(int i=0;i<3;i++)
    {
        a[i].printinfo();
    }

    cout<<"\n\n";
    student b;



    return 0;
}