#include<iostream>
using namespace std;
class  Railway_booking{
	string name,from,togo;
	int age,seatno;
	string phonenumber;
	public:
		void booking()
		{
			cout<<"Enter Your Details"<<endl;
			cout<<"Enter Your FullName"<<endl;
			cin>>name;
			cout<<"Enter Your Age"<<endl;
			cin>>age;
			cout<<"Enter From location"<<endl;
			cin>>from;
			cout<<"Enter TOGo Location"<<endl;
			cin>>togo;
			cout<<"Enter Phone Number"<<endl;
			cin>>phonenumber;
			cout<<"Enter Seat Number Between 1 To 50"<<endl;
			cin>>seatno;
		}
		void status()
		{
			if(seatno<=40)
			{
				cout<<"Booking is confirmed...."<<endl;
			}
			else if(seatno>=41 && seatno<=50)
			{
				cout<<"Booking is confirmed but you in waiting list......"<<endl;;
			}
			else if(seatno>50)
			{
				cout<<"you entered Wrong seat no";
				
			}		
		}
		void print()
		{
			cout<<"Tiket_Details"<<endl;
			cout<<"-------------------"<<endl;
			cout<<"Name-"<<"\t"<<"\t"<<"SeatNo-"<<endl;
			cout<<name<<"\t"<<seatno<<endl;
			cout<<"Age-"<<"\t"<<"\t"<<"ContactNo-"<<endl;
			cout<<age<<"\t"<<"\t"<<phonenumber<<endl;
			cout<<"from-"<<"\t"<<"\t"<<"To-"<<endl;
			cout<<from<<"\t"<<"\t"<<togo<<endl;
					
		}
		
};
int main()
{
	Railway_booking r;
	r.booking();
	r.status();
	r.print();
}
