#include<iostream>
#include<string.h>

#define max 100
using namespace std;

//class customer

class customer
{
public:
	char name[100];
	char address[100];
	char phone[12];
	char from_date[20];
	char to_date[20];
	float payment_advance;
	int booking_id;
	
};


//class room

class Room
{
public:
	char type;
	char stype;
	char ac;
	int roomNumber;
	int rent;
	int status;
	
	
	class customer cust;
	class Room addroom(int);
	void searchroom(int);
	void deleteroom(int);
	void displayroom(Room);
		
};

//global declarations

class Room rooms[max];
int count=0;

Room Room::addroom(int rno)
{
	class Room room;
	room.roomNumber==rno;
	cout<<"\nType AC/NON-AC (A/N):";
	cin>>room.ac;
	cout<<"\nType Comfort (S/N):";
	cin>>room.type;
	cout<<"\nType Size (B/S) :";
	cin>>room.stype;
	cout<<"\nDaily Rent:";
	cin>>room.rent;
	room.status=0;
	
	cout<<"\n Room added Successfully!";
	return room;
	
}


void Room::searchroom(int rno)
{
	int i,found=0;
	for(i=0;i<count;i++)
	{
		if(rooms[i].roomNumber==rno)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		cout<<"Room Details\n";
		if(rooms[i].status==1)
		{
			cout<<"\n Room is Reserved\n";
		}
		else
		{
			cout<<"\nRoom is Available\n";
		}
		displayRoom(rooms[i]);
	}
	else
	{
		cout<<"\nRoom not found\n";
	}
}


void Room::displayroom(Room temproom)
{
	cout<<"\nRoom Number:\t"<<temproom.roomNumber;
	cout<<"\nType AC/NON-AC (A/N)"<<temproom.ac;
	cout<<"\nType Comfort (S/N)"<<temproom.type;
	cout<<"\nType Size (B/S)"<<temproom.stype;
	cout<<"\nRent:"<<temproom.rent;
}



//Hotel management Class

class HotelMgnt:protected Room
{
	public:
		void CheckIn();
		void getavailRoom();
		void searchCustomer(char *);
		void checkout(int);;
		
		void guestSummaryReport();
};

void HotelMgmt::guestSummaryReport()
{
	if(count==0){
		cout<<"\nNo Guest in Hotel !!";
		for(int i=0;i<count;i++)
		{
			if(rooms[i].status==1){
				cout<<"\nCustomer First Name: "<<rooms[i].cust.name;
				cout<<"\nRoom Number:"<<rooms[i].roomNumber;
				cout<<"\nCustomer Address:"<<rooms[i].cust.address;
				cout<<"\nCustomer Phone:"<<rooms[i].cust.phone;
				cout<<"\nCustomer Entry date:"<<rooms[i].cust.from_date;
				cout<<"\nCustomer exit date:"<<rooms[i].cust.to_date;
				cout<<"\nCustomer Payment Status:"<<rooms[i].cust.payment_advance;
				cout<<"\nCustomer ID:"<<rooms[i].cust.booking_id;
				cout<<"\n---------------------------------------------------------";
				
			
			}
		}
	}
	
	//Hotel management reservation of rooms
	void Hotelmgmt::CheckIn()
	{
		int i,found=0,rno;
		
		class Room room;
		cout<<"\nEnter Room Number:";
		cin>>rno;
		for(i=0;i<count;i++)
		{
			if(rooms[i].roomNumber==rno)
			{
				found=1;
				break;
			}
		}
		if(found==1)
		{
			if(rooms[i].status==1)
			{
				cout<<"\nRoom is already Booked!!";
				return;
			}
			
			cout<<"\nEnter Booking ID :";
			cin>>rooms[i].cust.booking_id;
			
			cout<<"\nEnter Customer Name :";
			cin>>rooms[i].cust.name;
			
			cout<<"\nEnter Address :";
			cin>>rooms[i].cust.address;
			
			cout<<"\nEnter Phone  :";
			cin>>rooms[i].cust.phone;
			
			cout<<"\nEnter From Date: ";
			cin>>rooms[i].cust.from_date;
			
			cout<<"\nEnter to Date:";
			cin>>rooms[i].cust.to_date;
			
			cout<<"\nEnter Advance Amount:";
			cin>>rooms[i].cust.payment_advance;
			
			rooms[i].status=1;
			
			cout<<"\nCustomer Checked-In Successfully...";				
		}
	}
	
	//Hotel management shows available rooms
	void Hotelmgmt::getAvailRooms()
	{
		int i,found=0;
		for(i=0;i<count;i++)
		{
			if(rooms[i].status==0)
			{
				displayRoom(rooms[i]);
				cout<<"\n\nPress Enter for next room";
				found=1;
			}
		}
		if(found==0)
		{
			cout<<"\nAll rooms are Booked!";
			
		}
	}
	
	//hotel management shows all persons that have booked rooms
	void Hotelmgmt::searchCustomer(char *phone)
	{
		int i,found=0;
		for(i=0;i<count;i++)
		{
			if(rooms[i].status==1 && strcmp(rooms[i].cust.name,pname)==0)
			{
				cout<<"\nCustomer Name:"<<rooms[i].cust.name;
				cout<<"\nRoom Number:"<<rooms[i].roomNumber;
				
				cout<<"\nPress Enter for next record\n";
				found=1;
			}
		}
		if(found==0)
	}
}
}



