#include<iostream>
using namespace std;

class Cafe{
	
	private:
		int cafe_id;
		string cafe_name;
		string cafe_type;
		int cafe_rating;
		string cafe_location;
		int cafe_establish_year;
		int cafe_staff_quantity;
				
	public:
		//Defult Constructor
		Cafe(){
			cafe_id=101;
			cafe_name="Sukoon";
			cafe_type="Rooftop";
			cafe_rating=5;
			cafe_location="Vesu";
			cafe_establish_year=1980;
			cafe_staff_quantity=5;	
		}
		void getcafeinfo(){
			cout<<"CAFE ID :"<<cafe_id<<endl<<"CAFE NAME :"<<cafe_name<<endl
			<<"CAFE TYPE :"<<cafe_type<<endl<<"CAFE RATING :"<<cafe_rating<<endl
			<<"CAFE LOCATION :"<<cafe_location<<endl<<"CAFE ESTABLISH YEAR :"<<cafe_establish_year<<endl
			<<"CAFE STAFF QUANTITY :"<<cafe_staff_quantity<<endl;
			cout<<"-------------------------"<<endl;
		}
};
int main(){
	
	int n;
	cout<<"Enter Cafe Record Number :";
	cin>>n;
	Cafe cafe_arr[n];  
	for(int i=0;i<n;i++){
		cafe_arr[i].getcafeinfo();
	}
	return 0;
}