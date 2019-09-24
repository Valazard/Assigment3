/*****************************************
Name: Vitor Guilherme Souza Santana.
Assignment: 3.
Purpose: Program to created people and add then to a family.
Notes: 
*****************************************/
#include "Person.h"

void Person:: setName(std::string NewName){	
	name=NewName;
}
void Person:: setAge(int NewAge){
	age=NewAge;
}
	
void Person:: setFemale(bool isF){
	female=isF;
}
std::string Person:: getName(bool isCstr){
	std::string PersonName="";
	if (!isCstr){
		PersonName=name;
	}
	else{
		PersonName = name.c_str();//check this later
	}
	return PersonName;
} 
int Person:: getAge(){
	return age;	
}

bool Person:: isFemale(){
	return female;
}
Person:: Person(){
	setName();
	setAge();
	setFemale();	
}
