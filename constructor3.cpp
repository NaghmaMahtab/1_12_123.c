#include<iostream>
using namespace std;
class simple{
    private:
int p,r,t;
float S_I;
public:
    simple(int p1,int r1,int t1){
        p=p1;
        r=r1;
        t=t1;
    }
    void display()
    {
        S_I=p*r*t/100;
        cout<<"the simple interest is "<<S_I;
    }
};
    int main()
    {
       simple obj(20,30,40);
       obj.display();
       return 0;
    }

