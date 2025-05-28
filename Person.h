#pragma once
#include <iostream>
#include <string>


class Person
{
private:
	std::string first;
	std::string last;

public:
	//accessing the private data encapsulation
	//setter
	void setFirstName(std::string firstName) {
		this->first = firstName;
	}
	void setLastName(std::string lastName) {
		this->last = lastName;
	}
	void printFullName() {
		std::cout << first + " "  + last << std::endl;
	}
	//getter
	//another way of accessing private data encapsulatiion 
	std::string getName() {
		return first + " " + last;
	}
};



