#include<iostream>
using namespace std;
class prime{
    private:
int n,c,i;
public:
    prime(){
    cout<<"enter the number";
    cin>>n;
    c=0;
    for(i=1;i<=n;i++)
        {
            if(n%i==0)
                c++;
        }

    }
    void display()
    {
        if(c==2)
        cout<<"number is prime";
        else
            cout<<"number is not prime";
    }
};
    int main()
    {
       prime obj;
       obj.display();
       return 0;
    }

