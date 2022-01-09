#include <iostream>
using namespace std;

class cricket
{
    private:
     int target_score;
     int overs_bowled;
     int extra_time,penalty;
       void calc_penalty(void);
    public:
       void enterdate(void);
       void displaydata(void);
};

void cricket::enterdate()
{
    cout<<"Enter target score: ";
    cin>>target_score;
    cout<<"Enter overs bowled: ";
    cin>>overs_bowled;
    cout<<"Enter extra time: ";
    cin>>extra_time;
    
    
      calc_penalty();
}

void cricket::calc_penalty(void)
{
    if (extra_time<=10)
      penalty=1;
    else if(extra_time>10 && extra_time<20)
      penalty=2;
    else
      penalty=5;
}

void cricket::displaydata(void)
{
     cout<<" target score: "<<target_score<<endl;
    
    cout<<" overs bowled: "<<overs_bowled<<endl;
    
    cout<<" extra time: "<<extra_time<<endl;
    
    cout<<" penalty: "<<penalty<<endl;

}



int main()
{
    cricket obj1;
    obj1.enterdate();
    obj1.displaydata();
    return 0;
}