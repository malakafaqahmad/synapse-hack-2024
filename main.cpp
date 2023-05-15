#include<iostream>
#include<windows.h>
#include<string>
#include <cstdlib>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <string.h>
#include <stdio.h>

using namespace std;

////afaq code from line 8 to line 996.
//Declare Enums here
enum Admins{Afaq=1, Rameesa};

//Declare global variables here

bool adminis_Afaq;
bool adminis_Rameesa;

const int MAX_BREAKFAST = 10;
const int MAX_LUNCH = 10;
const int MAX_DINNER = 10;
const int MAX_BEVERAGE = 10;
const int MAX_DESSERT = 10;

int numBREAKFAST = 0;
int numLUNCH = 0;
int numDINNER = 0;
int numBEVERAGE = 0;
int numDESSERT = 0;

int TOTAL_ITEMS_AVAILABLE = 0;

//declare functions here

void Admin_loggedIN();
void adminDisplay();
void Admin_loggedIN();
void setAdmin(enum Admins);
void messageEmployee();
void updateSallary();
void setsallary();
void updateInventory();
void loginform();
void _menu();
void _breakfast();
void _lunch();
void _dinner();
void _beavrages();
void _dessert();

void showCostumerRewview();
//declare classes here
class Admin;
class employee;


class personInfo {         //you can also declare it as a struct
public:

	string name;
	string emailAddress;
	string orderHistory;
	string paymentInformation;
	int phoneNumber;
	char ratings;      //demonstrates his records or personal behaviours based on reviews

	

};
class Admin: public personInfo{
protected:
	string message;
	string responce;
	int sallary;

public:
	void setsallary(int sallary) {
		this->sallary = sallary;
	}
	int getsallary() {
		return sallary;
	}

	void setmessage(string message) {
		this->message = message;
	}
	string getmessage() {
		return message;
	}

	void setresponce(string responce) {
		this->responce = responce;
	}
	string getresponce() {
		return responce;
	}
	


};


class employee :public personInfo{
	friend class Admin;

protected:
	string message;
	string responce;
	int sallary;

public:
static int count;
	void setsallary(int sallary) {
		this->sallary = sallary;
	}
	int getsallary() {
		return sallary;
	}

    void setMessage(const string& message) {
        this->message = message;
    }

	string getmessage() {
		return message;
	}

	void setresponce(string responce) {
		this->responce = responce;
	}
	string getresponce() {
		return responce;
	}


};

class customer : public personInfo{
	int reviews;
public:
static int reviews_count;

	void setreviews(int reviews){
		this->reviews = reviews;
		reviews_count++;
	}
	int getreviews(){
		return reviews;
	}
};



class menuCategory {
protected:

	string name;
	string description;
	string availablityInfo;               // weather its seasonal or ...
	string allergenInfo;                // (e.g.gluten - free, vegetarian, contains nuts)
	
	int price;
	public:
	int quantity;

	virtual void setName(string name) {
		this->name = name;
	}
	virtual string getName() {
		return name;
	}

	virtual void setprice(int price) {
		this->price = price;
	}
	virtual int getprice() {
		return price;
	}

	virtual void setDescription(string description) {
		this->description = description;
	}
	virtual string getDescription() {
		return description;
	}

	virtual void getinformation() {
		cout << "-----------------------------------------------------------------------" << endl;
		cout << "-----------------------------------------------------------------------" << endl << endl;
		cout << "the name of the item is " << name << endl; 
		cout << "the price of the item is " << price << endl;
		cout << "some detailed descriptions about the item are " << description << endl << endl;
		cout << "-----------------------------------------------------------------------" << endl;
		cout << "-----------------------------------------------------------------------" << endl;
	}

};




class breakFast :public menuCategory {
protected:
public:
	void getinformation() {

		cout << "------------------------- Breakfast Menu ------------------------------" << endl;
		cout << "the name of the item is " << name << endl;
		cout << "the price of the item is " << price << endl;
		cout << "some detailed descriptions about the item are " << description << endl << endl;

	}
	
	 

};

class lunch :public menuCategory {
protected:
public:
	void getinformation() {
		cout << "-----------------------------------------------------------------------" << endl;
		cout << "-----------------------------------------------------------------------" << endl << endl;
		cout << "------------------------- Lunch Menu ------------------------------" << endl;
		cout << "the name of the item is " << name << endl;
		cout << "the price of the item is " << price << endl;
		cout << "some detailed descriptions about the item are " << description << endl << endl;
		cout << "-----------------------------------------------------------------------" << endl;
		cout << "-----------------------------------------------------------------------" << endl;
	}
	

};

class dinner :public menuCategory {
protected:
public:
	void getinformation() {
		cout << "-----------------------------------------------------------------------" << endl;
		cout << "-----------------------------------------------------------------------" << endl << endl;
		cout << "------------------------- Dinner Menu ------------------------------" << endl;
		cout << "the name of the item is " << name << endl;
		cout << "the price of the item is " << price << endl;
		cout << "some detailed descriptions about the item are " << description << endl << endl;
		cout << "-----------------------------------------------------------------------" << endl;
		cout << "-----------------------------------------------------------------------" << endl;
	}

	

};

class dessert :public menuCategory {
protected:
public:
	void getinformation() {
		cout << "-----------------------------------------------------------------------" << endl;
		cout << "-----------------------------------------------------------------------" << endl << endl;
		cout << "------------------------- Dessert Menu ------------------------------" << endl;
		cout << "the name of the item is " << name << endl;
		cout << "the price of the item is " << price << endl;
		cout << "some detailed descriptions about the item are " << description << endl << endl;
		cout << "-----------------------------------------------------------------------" << endl;
		cout << "-----------------------------------------------------------------------" << endl;
	}
	
};


class beverage :public menuCategory {
protected:
public:
	void getinformation() {
		cout << "-----------------------------------------------------------------------" << endl;
		cout << "-----------------------------------------------------------------------" << endl << endl;
		cout << "------------------------- Beverage Menu ------------------------------" << endl;
		cout << "the name of the item is " << name << endl;
		cout << "the price of the item is " << price << endl;
		cout << "some detailed descriptions about the item are " << description << endl << endl;
		cout << "-----------------------------------------------------------------------" << endl;
		cout << "-----------------------------------------------------------------------" << endl;
	}
	

};

/// SOME BASIC DECLARATIONS///----------------------------------------------------------------////
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

int customer::reviews_count = 0;
int employee::count = 0;

customer _customer[5];
Admin _admin;
employee employ[5];

menuCategory* ptr[MAX_BREAKFAST];
breakFast breakfastItem[MAX_BREAKFAST];

// menuCategory* ptr[MAX_DESSERT];
dessert dessertItem[MAX_DESSERT];

// menuCategory* ptr[MAX_BEVERAGE];
beverage beverageItem[MAX_BEVERAGE];

// menuCategory* ptr[MAX_LUNCH];
lunch lunchItem[MAX_LUNCH];

// menuCategory* ptr[MAX_DINNER];
dinner dinnerItem[MAX_DINNER];




void messageEmployee() {
	string name;
	string message;
	int x = employee::count;
	int i = 0;

	if (adminis_Afaq==true)
	{
		
		_admin.name = "Malak Afaq Ahmad";
	}
	else if (adminis_Rameesa == true) {
		
		_admin.name = "Rameesa";
	}

	cout << "enter the name of employ " ;
	getline(cin, name);
	cin.ignore();

	
	for (i=0; i < x; i++)
	{
		if(employ[i].name == name){
			cout << "Enter message to employee: ";
    		getline(cin, message);

			employ[i].setMessage(message);

		}
		
		
	}
	

	cout << "Employee " << employ[i].name << " received message: " << employ[i].getmessage() << endl;
    

}





void _dessert() {

	char s;



	static int indexNumber = 0;
	do {

		string name, description;
		int price;



		cout << "Enter the name of the dessert: ";
		cin >> name;
		cout << "Enter the price: ";
		cin >> price;
		cin.ignore(); // ignore the newline character left in the input stream by cin

		cout << "Enter the description: ";
		getline(cin, description);

		if (indexNumber < MAX_DINNER)
		{
			ptr[indexNumber] = &dessertItem[indexNumber];


			ptr[indexNumber]->setName(name);
			ptr[indexNumber]->setprice(price);
			ptr[indexNumber]->setDescription(description);

			indexNumber++;
		}
		else {
			cout << "Max limit reached for desserts!!! " << endl;
		}




		cout << "Do you want to add more? (y/n) ";
		cin >> s;
		cin.ignore(); // ignore the newline character left in the input stream by cin
	} while (s == 'y' || s == 'Y');


	cout << "All the available desserts are: " << endl;
	for (int i = 0; i < indexNumber; i++) {

		cout << "item: " << indexNumber + 1 << endl;
		ptr[i] = &dessertItem[i];

		ptr[i]->getinformation();



	}



}


void _beavrages() {
	char s;

	

	static int indexNumber = 0;
	do {

		string name, description;
		int price;



		cout << "Enter the name of the drink: ";
		cin >> name;
		cout << "Enter the price: ";
		cin >> price;
		cin.ignore(); // ignore the newline character left in the input stream by cin

		cout << "Enter the description: ";
		getline(cin, description);

		if (indexNumber < MAX_BEVERAGE)
		{
			ptr[indexNumber] = &beverageItem[indexNumber];


			ptr[indexNumber]->setName(name);
			ptr[indexNumber]->setprice(price);
			ptr[indexNumber]->setDescription(description);

			indexNumber++;
		}
		else {
			cout << "Max limit reached for beverages!!! " << endl;
		}




		cout << "Do you want to add more? (y/n) ";
		cin >> s;
		cin.ignore(); // ignore the newline character left in the input stream by cin
	} while (s == 'y' || s == 'Y');


	cout << "All the available desserts are: " << endl;
	for (int i = 0; i < indexNumber; i++) {

		cout << "item: " << indexNumber + 1 << endl;
		ptr[i] = &beverageItem[i];

		ptr[i]->getinformation();



	}


	

}


void _lunch() {
	char s;



	static int indexNumber = 0;
	do {

		string name, description;
		int price;



		cout << "Enter the name of the lunch: ";
		cin >> name;
		cout << "Enter the price: ";
		cin >> price;
		cin.ignore(); // ignore the newline character left in the input stream by cin

		cout << "Enter the description: ";
		getline(cin, description);

		if (indexNumber < MAX_LUNCH)
		{
			ptr[indexNumber] = &lunchItem[indexNumber];


			ptr[indexNumber]->setName(name);
			ptr[indexNumber]->setprice(price);
			ptr[indexNumber]->setDescription(description);

			indexNumber++;
		}
		else {
			cout << "Max limit reached for lunch!!! " << endl;
		}




		cout << "Do you want to add more? (y/n) ";
		cin >> s;
		cin.ignore(); // ignore the newline character left in the input stream by cin
	} while (s == 'y' || s == 'Y');


	cout << "All the available luches are: " << endl;
	for (int i = 0; i < indexNumber; i++) {
			
		cout << "item: " << i + 1 << endl;
		ptr[i]=&lunchItem[i];

		ptr[i]->getinformation();

		
	}

}


void _dinner() {

	char s;


	static int indexNumber = 0;
	do {

		string name, description;
		int price;



		cout << "Enter the name of the dinner: ";
		cin >> name;
		cout << "Enter the price: ";
		cin >> price;
		cin.ignore(); // ignore the newline character left in the input stream by cin

		cout << "Enter the description: ";
		getline(cin, description);

		if (indexNumber < MAX_DINNER)
		{
			ptr[indexNumber] = &dinnerItem[indexNumber];


			ptr[indexNumber]->setName(name);
			ptr[indexNumber]->setprice(price);
			ptr[indexNumber]->setDescription(description);

			indexNumber++;
		}
		else {
			cout << "Max limit reached for dinner!!! " << endl;
		}




		cout << "Do you want to add more? (y/n) ";
		cin >> s;
		cin.ignore(); // ignore the newline character left in the input stream by cin
	} while (s == 'y' || s == 'Y');
	cout << "All the available dinner are: " << endl;
	for (int i = 0; i < indexNumber; i++) {

		cout << "item: " << indexNumber + 1 << endl;
		ptr[i] = &dinnerItem[i];

		ptr[i]->getinformation();



	}


}

void _breakfast() {
	char s;

	

	static int indexNumber = 0;
	do {

		string name, description;
		int price;
		
		

		cout << "Enter the name of the breakfast: ";
		cin >> name;
		cout << "Enter the price: ";
		cin >> price;
		cin.ignore(); // ignore the newline character left in the input stream by cin

		cout << "Enter the description: ";
		getline(cin, description);
		
		if (indexNumber < MAX_BREAKFAST)
		{
			ptr[indexNumber] = &breakfastItem[indexNumber];


			ptr[indexNumber]->setName(name);
			ptr[indexNumber]->setprice(price);
			ptr[indexNumber]->setDescription(description);

			indexNumber++;
		}
		else {
			cout << "Max limit reached for breakfasts!!! " << endl;
		}

		

	
		cout << "Do you want to add more? (y/n) ";
		cin >> s;
		cin.ignore(); // ignore the newline character left in the input stream by cin
	} while (s == 'y' || s =='Y');

	for (int i = 0; i < indexNumber; i++) {

		cout << "All the available breakfasts are: " << endl;
		cout << "item: " << indexNumber + 1 << endl;

		ptr[i] = &breakfastItem[i];

		ptr[i]->getinformation();

		
		
	}



}


void _menu() {
	int choice;

	cout << "choose an option here" << endl;
	cout << "        ||  1_ add into breakfast menus" << endl;
	cout << "        ||  2_ add into luch menu" << endl;
	cout << "        ||  3_ add into dinner menu" << endl;
	cout << "        ||  4_ add into dessert menu" << endl;
	cout << "        ||  5_ add into beaverages" << endl;
	cout << "        ||  6_ go back" << endl;
	cout << "        ||  -1_ exit" << endl;

	cout << "iafqahmad>>> ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		_breakfast();
		break;

	case 2:
		_lunch();
		break;

	case 3:
		_dinner();
		break;

	case 4:
		_dessert();
		break;

	case 5:
		_beavrages();
		break;

	case 6:
		adminDisplay();
		break;

	case -1:
		exit(0);
		break;

	default:
		cout << "enter correct option";
		break;
	} 
}


void showCostumerRewview(){
	// customer _costomer;
	int x = customer::reviews_count;
	cout << "----------------------------------------------------------------" << endl;
	cout << "following are revies of the customers " << endl;

	for (int i = 0; i < x; i++)
	{
		cout << _customer[i].getreviews() << endl;
	}
	
}
void updateInventory(){
	int choice = 1;
	while(choice !=-1){

breakFast b_serves;
lunch l_serves;
dinner d_serves;
beverage be_serves;
dessert dz_serves;

		cout << "----------------------------------------------------------------" << endl;
		cout << "----------------------------------------------------------------" << endl;
		cout <<"what do you want to update?" << endl;

		cout << "1_ breakfast" << endl;
		cout << "2_ lunch" << endl;
		cout << "3_ dinner" << endl;
		cout << "4_ beavrages" << endl;
		cout << "5_ desserts" << endl;

		cout << "----------------------------------------------------------------" << endl;
		cout << "----------------------------------------------------------------" << endl;

		cout << "enter your choice: " ;
		cin >> choice;




		switch(choice){

			case 1:
				int Quantity;
				cout << "Quantity you want to add: " ;
				cin >> Quantity;
				b_serves.quantity = Quantity;

			break;
			
			case 2:
			int q;
				cout << "Quantity you want to add: " ;
				cin >> q;
				l_serves.quantity = q;
			break;

			case 3:
			int w;
				cout << "Quantity you want to add: " ;
				cin >> w;
				d_serves.quantity = w;
			break;

			case 4:
			int e;
				cout << "Quantity you want to add: " ;
				cin >> e;
				be_serves.quantity = e;
			break;

			case 5:
			int r;
				cout << "Quantity you want to add: " ;
				cin >> r;
				dz_serves.quantity = r;
			break;


		}
		
		
		}
	
}void setsallary() {
	// employee employ;
	int sallary;
	int howMany;
	cout << "how many employees you wannt to set sallary" << endl;
	cin >> howMany;
	for(int i=0 ; i<howMany ; i++){
	cout << "enter sallary ";
	cin >> sallary;

	cin.ignore();
	employ[i].setsallary(sallary);

	}

}

void updateSallary() {
	// employee employ;
	string name;
	int sallary;
	int x = employee::count;
		cout << "enter the name of the employee to update sallary " << endl;
		cin >> name;

	for(int i=0 ; i < x; i++ ){
		if(employ[i].name == name){
			cout << employ[i].getsallary();
			cout << "enter his sallary" << endl;
			cin >> sallary;
			employ[i].setsallary(sallary);
		}
		else{
			cout << "not found " << endl;
		}
	}
	
}



void adminDisplay() {
	int choice=1;

while(choice!=-1){
	system("color 2");
	cout << "-----------------------------------------------------" << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "           welcome to admin panel" << endl;
	cout << "           Sir, what are you looking after" << endl << endl;
	cout << "           ||       1_ update menu" << endl;
	cout << "           ||       2_ inform an employee" << endl;
	cout << "           ||       3_ update employees' salary" << endl;
	cout << "           ||       4_ set sallary of employee" << endl;
	cout << "           ||       5_ update inventory" << endl;
	cout << "           ||       6_ view analytics" << endl;
	cout << "           ||       7_ view Customer Reports and Reviews" << endl;
	cout << "           ||       8_ go back" << endl;
	cout << "           ||       -1 exit the programne" << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "-----------------------------------------------------" << endl;
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		_menu();
		break;

	case 2:
		messageEmployee();
		break;

	case 3:
		updateSallary();
		break;

	case 4:
		setsallary();
		break;

	case 5:
		updateInventory();
		break;

	case 6:
		//customerDisplay();
		break;

	case 7:
		showCostumerRewview();
		break;

	case 8:
		loginform();
		break;

	case -1:
		exit(0);
		break;

	default:
	cout << "please enter a valid option" << endl;
		break;
	}
}

}



