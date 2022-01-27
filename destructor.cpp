#include<iostream>
using namespace std;
class number{
private:
int num1,num2;
public:
number(int n1,int n2)
{
num1=n1;
num2=n2;
}
void display(){
cout<<"num1="<<num1<<endl;
cout<<"num2="<<num2<<endl;
}
~number()
{
    cout<<"Destructor called"<<endl;
}
};
int main()
{
    number obj(10,20);
    obj.display();
    return 0;
}
