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


