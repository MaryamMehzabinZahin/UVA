#include <bits/stdc++.h>
using namespace std;

void calculate(int dur, double dp, double loan, int rec)
{
    double ara[dur+1]={0.0000};

    for(int i=0;i<rec;i++)
    {
        int mon;
        double rate;
        cin>>mon>>rate;
        ara[mon]=rate;

    }

    double mp=double(loan/dur);
    double owe=loan;
    double prev=ara[0];
    double val=dp+loan;
    double car_val=double(val-val*prev);
    int i=0;

    while(owe>car_val)
    {

       i++;
       if(ara[i]!=0.00) prev=ara[i];
       car_val=car_val-car_val*prev;
       //dp+=dp;

       owe-=mp;
       //cout<<car_val<<" "<<owe<<"  "<< i<<endl;
       //printf("%0.2f %0.7f %d\n", car_val, owe, i);

    }
    if(i==1)cout<<i<<" month"<<"\n";
    else cout<<i<<" months"<<"\n";
    return;
}
int main()
{
    //freopen("input.txt", "r", stdin);

    while(1)
    {

        int duration;
        double dp,loan;
        int record;
        cin>>duration;
        cin>>dp>>loan>>record;

        if(duration<0)
        {
            break;
        }


        calculate(duration,dp,loan,record);
    }
    return 0;
}
