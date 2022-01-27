//Armstrong number
#include<iostream>
using namespace std;
class arm{

    int n,a,c,sum,rem;
public:
    void getdata(){

        cout<<"enter the number";
        cin>>n;
    }
    void armstrong()
    {      c=n;//assigning value of n in c
        sum=0;
        for( ;n>0;n=n/10)
        {
            rem=n%10;
            sum=sum+rem*rem*rem;
        }

        if(c==sum)
            cout<<"Armstrong Number";
        else
            cout<<"not Armstrong Number";

    }
    };
    int main()
    {
        arm obj;
      obj.getdata();
      obj.armstrong();

return 0;

    }
