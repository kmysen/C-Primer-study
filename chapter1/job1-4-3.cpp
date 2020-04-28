#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,d;
    int i;
    cout<<"give me 2 number and i will print all the number within them!"<<endl;
    cin>>a;
    cin>>b;
    c=min(a,b);
    d=max(a,b);
    cout<<c<<" "<<d<<endl;
    i=c;
    while(i<=d)
    {
        cout<<i<<" ";
        i++;
    }
    system("pause");
}