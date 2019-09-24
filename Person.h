/*****************************************
Name: Vitor Guilherme Souza Santana.
Assignment: 3.
Purpose: Program to created people and add then to a family.
Notes: 
*****************************************/
#ifndef PERSON_H
#define PERSON_H
	#include <string>
	#include <bits/stdc++.h>
	class Person{
		private:
			::std::string name;
			int age;
			bool female;
		public:
			void setName(::std::string = "" );//pre-stablishing all variables so that they can be called as a null  		
			void setAge(int =0);
			void setFemale(bool = false);
			::std::string getName(bool = false); //see below for more on this method
			int getAge();
			bool isFemale();
			Person();
	};
#endif//End of PERSON_H
