#include<iostream>
using namespace std;
class Hotel{
	
	private:
		int hotel_id;
		string hotel_name;
		string hotel_type;
		int hotel_rating;
		string hotel_location;
		int hotel_establish_year;
		int hotel_staff_quantity;
		int hotel_room_quantity;
		
	public:
	//setter Function	
		void sethotelinfo(int id,string name,string type,int rating,string location,int year,int staff,int room){
			hotel_id=id;
			hotel_name=name;
			hotel_type=type;
			hotel_rating=rating;
			hotel_location=location;
			hotel_establish_year=year;
			hotel_staff_quantity=staff;
			hotel_room_quantity=room;
		}
	//getter Function
		void gethotelinfo(){
			cout<<"HOTEL ID :"<<hotel_id<<endl<<"HOTEL NAME :"<<hotel_name<<endl
			<<"HOTEL TYPE :"<<hotel_type<<endl<<"HOTEL RATING :"<<hotel_rating<<endl
			<<"HOTEL LOCATION :"<<hotel_location<<endl<<"HOTEL ESTABLISH YEAR :"<<hotel_establish_year<<endl
			<<"HOTEL STAFF QUANTITY :"<<hotel_staff_quantity<<endl<<"HOTEL ROOM QUANTITY :"<<hotel_room_quantity<<endl;
		}
};
int main(){
	
	int n;
	cout<<"Enter Hotel Record Number :";
	cin>>n;
	
	Hotel hotels[50];
	int id,rating,year,staff,room;
	string name,type,location;
	
	for(int i=0;i<n;i++){
		cout<<"Enter Hotel ID :";
		cin>>id;
		
		cout<<endl<<"Enter Hotel Name :";
		cin>>name;

		cout<<endl<<"Enter Hotel Type :";
		cin>>type;

		cout<<endl<<"Enter Hotel Rating :";
		cin>>rating;

		cout<<endl<<"Enter Hotel Location :";
		cin>>location;
	
		cout<<endl<<"Enter Hotel Establish Year :";
		cin>>year;
		
		cout<<endl<<"Enter Hotel Staff Quantity :";
		cin>>staff;
		
		cout<<endl<<"Enter Hotel Room Quantity :";
		cin>>room;
		cout<<endl;
		hotels[i].sethotelinfo(id,name,type,rating,location,year,staff,room);
	}
	
	for(int i=0;i<n;i++){
		hotels[i].gethotelinfo();
		cout<<endl;
	}
	return 0;	
}