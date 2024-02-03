#include<bits/stdc++.h>

int main()
{

    using namespace std;

    int num=1,x;

    cout<<"Enter your number :";
    cin>>x;


    while(num<=x){

    cout<<num<<"   ";

    if(num%3==0 && num%5==0)
    {
        cout<<"fizzbuzz";
    }

    else if(num%3==0)
    {
        cout<<"fizz";
    }

    else if(num%5==0)
    {
        cout<<"buzz";
    }

    else
    {
        cout<<"noun";
    }

    cout<<endl;

    num++;

    }

    return 0;

}
