#include<iostream>
using namespace std;
class test{
    int c,rem,a;
     int n;
public:
    void getdata()
    {
        cout<<"enter the number";
        cin>>n;
    }
    void Prime()
    {
        //a=n;
        c=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            c++;
        }
        if(c==2)
            cout<<"prime no.";
        else
            cout<<"not prime no.";
    }
    };
    int main()
    {
        test obj;
        obj.getdata();
        obj.Prime();

        return 0;
    }

