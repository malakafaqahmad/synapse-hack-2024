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


