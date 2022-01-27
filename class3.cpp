#include<iostream>
#include<cstring>
using namespace std;
class test{
    string s;
    int l;

public:
    void getdata()
    {
        cout<<"enter a string";
       getline(cin,s);
    }
    void length()
    {

          l=s.length();
       cout<<"length of string="<<l;
    }
    };
   int main()
   {
       test obj;
      obj.getdata();

       obj.length();

       return 0;
   }
