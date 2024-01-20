#include<iostream>
using namespace std;

int main()
{

 char choice;
 choice fuleAmount,pricePerLiter;
 totalCost;

 do{
    cout<<"\nWelocme to the Fule Sevice Certain";
    cout<<"Enter the amount of fule(in liters)";
    cin>>fuleAmount;
    cout<<"Enter the  price per liter";
    cin>>pricePerLiter;

    totalCost=fuleAmount*pricePerLiter;
    cout<<"Total cost "<<totalCost<<endl;
    cout<<"\nDo you want to continue(Y/N)?";
    cin>>choice;
 }


 while(choice=='Y' || choice=='y');
 cout<<"\nRhank you for using our service\n";

    return 0;

}
