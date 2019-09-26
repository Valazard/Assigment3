/*****************************************
Name: Vitor Guilherme Souza Santana.
Assignment: 3.
Purpose: Program to created people and add then to a family.
Notes: 
*****************************************/
#include "main.h"

int main() {
    /*
     * this is your test data. it uses a concept called parallel arrays 
     */
    char names[NUMPEOPLE][NAMESIZE] = {"marge", "homer", "maggie", "bart", "lisa"};
    int ages[NUMPEOPLE] = {37, 42, 1, 10, 7};
    bool female[NUMPEOPLE] = {true, false, true, false, true};
    Person family[NUMPEOPLE];
    //loading the data into the array of empty persons
	for(int loopCounter=0;loopCounter<NUMPEOPLE;loopCounter++){//Solely doing 2 loops for the exercise, but everything can be solved with only one loop
		family[loopCounter].setName(names[loopCounter]);	
		family[loopCounter].setAge(ages[loopCounter]);
		family[loopCounter].setFemale(female[loopCounter]);
	}
	cout<<"List of all the family members stored\n";
	for(int divqnt=0;divqnt<38;divqnt++){//loop to create the = sign division
		cout<<"=";
	}
	cout<<"\n";
	int QntMinors=0;//create a counter for qnt of minor before printing the ages, that allows to iterate only once for the count of under ADULT age
	for(int LoopCounter=0;LoopCounter<NUMPEOPLE;LoopCounter++){
		int currentAge=family[LoopCounter].getAge();
		if (currentAge<ADULT){
			QntMinors++;
		}
		cout<<"\t"<<family[LoopCounter].getName()<<": "<<currentAge<<": ";
		if(family[LoopCounter].isFemale()){
			cout<<"female\n";
		}
		else{
			cout<<"not female\n";
		}
	}
	cout<<"\nThe last person in the list is: "<<family[NUMPEOPLE-1].getName(true)<<"\n\n";//exploring the knowledge of the array size, maybe change for something more robust?
	cout<<"The number of people in the family under 18 is: "<<QntMinors<<"\n";
    return 0;
}
