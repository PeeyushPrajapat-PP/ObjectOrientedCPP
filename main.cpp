//Author: Mr Peeyush Prajapat
/*
* This is a cpp file including all the topics which I understand in c++
* 
*
*/

#include <iostream>
#include "Car.h"
#include "Person.h"

// give a different identifier to an existing datatype
// 
// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// namespaces reduce entity name confilction

int swapNum() {

	int a = 1;
	int b = 2;
	int temp = a;
	a = b;
	b = temp;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;

	return 0;

}

int main() {

	int file_size = 100;
	double sales = 9.99;

	std::cout << file_size  << std::endl;

	swapNum();

	int rows;
	int columns;
	char symbol;


	std::cout << "How many rows?  \n";
	std::cin >> rows;

	std::cout << "How many columns?  \n";
	std::cin >> columns;

	std::cout << "enter a symbol to use..  \n";
	std::cin >> symbol;

	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= columns; j++) {
			std::cout << symbol ;
		}
		std::cout << '\n';
	}
	
	std::string cars[] = { "Corvette", "Mustang", "Camaro" };

	std::cout << "the first car in the array is " << cars[0] << '\n';

	double prices[] = { 5.00, 7.50, 9.99, 15.00 };

	std::cout << prices[0] <<  '\n' ;
	std::cout << prices[1] << '\n';
	std::cout << prices[2] << '\n';
	std::cout << prices[3] << '\n';


	// changing data type name to 'num'
	typedef int num;

	//num instead of int
	num first = 100;

	std::cout << "this is a number with data type called num instead of int   " << first << '\n';


	Car car1("BMW", "Black", 300);
	car1.printCar();

	//pointers

	// variable x
	num x = 10;

	//*p = pointer to address of x
	num *p = &x;
	std::cout << "X: " << x << std::endl;
	std::cout << "Address of X:, which is stored in P " << p << std::endl;

	Person person;

	person.setFirstName("Peeyush");
	person.setLastName("Prajapat");

	person.printFullName();
	 

	return 0;

	
}

