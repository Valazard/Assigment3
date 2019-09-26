/*****************************************
Name: Vitor Guilherme Souza Santana.
Assignment: 3.
Purpose: Program to created people and add then to a family.
Notes: 
*****************************************/
#include "person.h"

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
	PersonName=name;
	if(isCstr){
		transform(PersonName.begin(),PersonName.end(),PersonName.begin(), ::toupper);//using transform to operate on the entire sequence of chars
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
