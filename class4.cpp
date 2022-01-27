#include<iostream>
#include<cstring>
using namespace std;
class test{
    string name;
    int age;
public:
    void getdata()
    {
        cout<<"enter the name of student"<<endl;
       getline(cin,name);
       cout<<"enter the age";
       cin>>age;
    }
    void output()
    {
        cout<<"the name is "<<name<<endl;
        cout<<"the age is "<<age;
    }
    };
   int main()
   {
       test s;

       s.getdata();
       s.output();

         return 0;
   }
