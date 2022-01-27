#include<iostream>
using namespace std;
class p{
    int n,a, rev,rem;
public:
    void getdata()
    {
        cout<<"enter the number";
        cin>>n;
    }
    void Palindrome()
    {
        a=n;
        rev=0;
        for( ;n>0;n=n/10)
        {
            rem=n%10;
            rev=rev*10+rem;
        }
        if(a==rev)
            cout<<"palindrome";
        else
            cout<<"not palindrome";
    }
    };
    int main()
    {
         p obj;
         obj.getdata();
        obj.Palindrome();

        return 0;
    }

