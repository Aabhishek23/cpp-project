#include<iostream>
using namespace std;

int main()
{
    int range ,num;

    cout<<"Enter your number : ";
    cin>>range;

    for(int i=1;i<=range;i++){
        num=num+i;
        cout<<i;
        if(i<range){
            cout<<"+";
        }
    }
    cout<<"\n Your sum is :"<<num;

    return 0;

}
