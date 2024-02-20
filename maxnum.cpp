#include<iostream>

using namespace std;

int main(){

int x,y,z;

x=0;
y=30;
z=8;

if(x>y){

    if(x>z){
        cout<<x<<" is Biggest number";
    }
    else{
         cout<<z<<" is Biggest number";
    }
}

else{

    if(y>z){
        cout<<y<<" is Biggest number";
    }

    else{
        cout<<z<<" is Biggest number";
    }
}

return 0;
}
