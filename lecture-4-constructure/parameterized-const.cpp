#include<iostream>
using namespace std;

class Companies{
	
	private:
		int comp_id;
		string comp_name;
		int comp_staff_quantity;
		int comp_revenue;
		int comp_import_raw_diamonds;
		int comp_export_diamonds;
		string comp_ceo;
			
	public:
		//Defult Constructor
		Companies(){
			
		}
		//Parameterized Constructor	
		Companies(int id,string name,int staff,int revenue,int import_dia,int export_dia,string ceo){
			comp_id=id;
			comp_name=name;
			comp_staff_quantity=staff;
			comp_revenue=revenue;
			comp_import_raw_diamonds=import_dia;
			comp_export_diamonds=export_dia;
			comp_ceo=ceo;
		}
		
		
		//getter function
		void getcompInfo(){
			cout<<"COMPANIE ID :"<<comp_id<<endl<<"COMPANIE NAME :"<<comp_name<<endl
			<<"COMPANIE STAFF QUANTITY :"<<comp_staff_quantity<<endl<<"COMPANIE REVENUE:"<<comp_revenue<<endl
			<<"COMPANIE IMPORT RAW DIAMONDS :"<<comp_import_raw_diamonds<<endl
			<<"COMPANIE EXPORT DIAMONDS :"<<comp_export_diamonds<<endl
			<<"COMPANIE CEO:"<<comp_ceo<<endl;
			cout<<"-------------------------"<<endl;
		}
				
};
int main(){
	
	int n;
	cout<<"Enter Companie Record Number :";
	cin>>n;
	Companies company_arr[n];
	
	int id,staff,revenue,import_dia,export_dia;
	string name,ceo; 
	
	for(int i=0;i<n;i++){
		
		cout<<"Enter Companie ID :";
		cin>>id;
		
		cout<<endl<<"Enter Companie Name :";
		cin>>name;

		cout<<endl<<"Enter Companie Staff Quantity :";
		cin>>staff;
		
		cout<<endl<<"Enter Companie Revenue :";
		cin>>revenue;

		cout<<endl<<"Enter Companie Import Raw Diamonds :";
		cin>>import_dia;

		cout<<endl<<"Enter Companie Export Raw Diamonds :";
		cin>>export_dia;
	
		cout<<endl<<"Enter Companie CEO Name :";
		cin>>ceo;
	
		cout<<endl;
		company_arr[i]=Companies(id,name,staff,revenue,import_dia,export_dia,ceo);
	}
	
	for(int i=0;i<n;i++){
		company_arr[i].getcompInfo();
	}	
	
	
	
	
	return 0;
}