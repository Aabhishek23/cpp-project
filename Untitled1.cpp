#include<iostream>
using namespace std;

int main()
{

    int abalibleSeat=10;
    int requestedSeats;
    cout<<"Welocome therter ! Ther are "<<abalibleSeat<<"seat availible"<<endl;
    cout<<"How many seat would  you like to reserve?";
    cin>>abalibleSeat;
    while(requestedSeats>>abalibleSeat){
        cout<<"Sorry we have"<<abalibleSeat<<"seat availible"<<endl;
        cout<<"Please smaller number of seats";
        cin>>requestedSeats;
    }
    cout<<"Reservation successful! You have reserved"<<requestedSeats<<"Seats ."<<endl;
    abalibleSeat=requestedSeats;
    cout<<"There are now"<<abalibleSeat<<"seats remining"<<endl;
    return 0;

}
