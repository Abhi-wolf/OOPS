

/*  DEFINE A CLASS STUDENT WITH THE FOLLOWING SPECIFICATION
PRIVATE MEMBERS:
   ADMON             INTEGER
   SNAME             STRING
   ENG,MATH,SCIENCE  INTEGER
   CTOTAL()          A FUNCTION TO CALCULATE ENG+MATH+SCIENCE
PUBLIC MEMBERS:
   TAKEDATA()        A FUNCTION TO ACCEPT VALUES FOR ADMON,STUDENTS NAME,MARKS OF ENG,MATH,SCIENCE AND INVOKE 
                       CTOTAL() TO CALCULATE TOTAL MARKS
   SHOWDATA()        A FUNCTION TO DISPLAY ALL THE DATA MEMBERS ON THE SCREEN   */




#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class student
{
    int admno;
    //string sname;
    float eng,math,science;
    float total;
           void ctotal();
    public:
           void takedata();
           void showdata();
};

void student::takedata()
{
    string sname;
    cout<<"Enter the admission no: ";
    cin>>admno;
   // cout<<endl;
    cout<<"Enter name of student: ";
    cin>>sname;
    cout<<"Enter marks of eng,math,science: ";
    cin>>eng>>math>>science;
    ctotal();
}

void student::ctotal()
{
    total=eng+math+science;
}

void student::showdata()
{
    cout<<"\n\n"<<admno<<endl<<endl<<eng<<endl<<math<<endl<<science;
    cout<<endl<<total<<endl;
}



int main()
{
    student obj1;
    obj1.takedata();
    obj1.showdata();
    return 0;
}