#include<bits/stdc++.h>

int main()
{

    using namespace std;

    int N,M,H,K=10;

    cout<<"Enter your Lable :";
    cin>>N;

    cout<<"Enter your mostor label :";
    cin>>M;

    cout<<"Enter your charecter helth :";
    cin>>H;


    int level=1;

    for( ;level<=N and H>=M ; level++){

        H=H-M;
        M=M+K;
        cout<<"level "<<level<<"qualified \n";
        cout<<"Monster helth "<<M<<"qualified \n";

    }

    if(level ==N+1){
        cout<<"CONGRUJULATIONS \n";
    }

    else{
        cout<<"Loser \n";
    }


    return 0;

}

