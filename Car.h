#pragma once
#include <string>
#include <iostream>

class Car
{
private:
	std::string model;
	std::string colour;
	int bhp;

	
public:
	 Car(std::string model, std::string colour, int bhp )
	 {
		this->model = model;
		this->colour = colour;
		this->bhp = bhp;
	 }
	 void printCar() {
		 std::cout << "the model is " << model << '\n';
		 std::cout << "the colour is " << colour << '\n';
		 std::cout << "the amount of bhp is " << bhp << '\n';
	 }

};

