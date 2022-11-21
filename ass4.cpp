//p to display all ur sneakers collection using class,constructor,inheritance,virtual function,operator overloading.





#include<iostream>
using namespace std;
class sneakers {
	public:
	int pairs,balance,wd;
	char brand[25];

	virtual void info(){
		cout<<"enter total no of pair of sneakers :"<<endl;
		cin>>pairs;
		cout<<"enter the balance u have in your account:"<<endl;
		cin>>balance;
		cout<<"enter amount to withdraw to buy a pair of sneakers:"<<endl;
		cin>>wd;
	
		
	}
  virtual void show(){
  	cout<<" total no of pair of sneakers are:"<<pairs<<endl;
  	cout <<"balance u have in your account is:"<<balance<<endl;
  	cout<<"amount to withdraw:"<<wd<<endl;
  }
  virtual void data() 
{
	cout<< "Displaying data using virtual function";
}
  
};
class nike:public sneakers {
	int air,uptempo,pairs,balance,wd;
	public:
		int sneakers(int n){
		int aj;
		cout<<"total pair of aj's u have with u:"<<aj<<endl;
		
	}

	void info(){
		cout<<"enter total no of pair of sneakers :"<<endl;
		cin>>pairs;
		cout<<"enter the balance u have in your account:"<<endl;
		cin>>balance;
		cout<<"enter amount to withdraw to buy a pair of sneakers:"<<endl;
		cin>>wd;
	
		
	}
 	void data()
	{
 		cout<<"enter pairs of airmax u have"<<endl;
 		cin>>air;
 		cout<<"enter pairs of uptempo u have"<<endl;
 		cin>>uptempo;
 	}
   	void show()
	{
  		cout<<" total no of pair of sneakers are:"<<pairs<<endl;
  		cout <<"balance u have in your account is:"<<balance<<endl;
  		cout<<"amount to withdraw:"<<wd<<endl;
  	}
 	nike operator + (nike bb){
 		nike cc;
 		cc.air=air+bb.air;
 		return cc;
 	}
 
};

int main()
{
	sneakers *str;
	nike pp;
	str=&pp;
	str->data();
	str->info();
	nike aa;
	str=&aa;
	str->data();
	str->info();
	nike cc;
	cc=pp+aa;
	cc.show();
	return 0;
}