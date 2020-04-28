#include<iostream>
using namespace std;
int main()
{
    int i;
    int sum=0;
    cout<<"give me sum number and i will tell you their sum! (end with ctrl+z)"<<endl;
    while(cin>>i)
    {
        sum+=i;
    }
    cout<<"Their sum is "<<sum<<"!!"<<endl;
    system("pause");
}