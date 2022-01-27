#include<iostream>
using namespace std;
class abc{

public:
    int x;
    abc(int a)  //parameterize constructor
    {
        x=a;
    }
    abc( abc &i)   //copy constructor
    {
        x=i.x;
    }

};

int main()
{
    abc a1(40);
    abc a2(a1);
    cout<<a2.x;
    return 0;
}
