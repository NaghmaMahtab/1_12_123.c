#include<iostream>
using namespace std;
class fact{
int n,f;
public:
    fact(){
    cout<<"enter the number";
    cin>>n;
    f=1;
    for( ;n>0;n--)
        {
            f=f*n;
        }
    }
    void display()
    {
        cout<<"factorial of number="<<f;
    }
};
    int main()
    {
       fact obj;
       obj.display();
       return 0;
    }
