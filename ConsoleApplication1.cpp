#include <iostream>
#include <typeinfo>

class Calculator {
public:
	double _num1;
	double _num2;

	void setNum1();
	void setNum2();

	void setData();

private:
	double add();
	double multiply();
	double subtract_1_2();
	double subtract_2_1();
	double divide_1_2();
	double divide_2_1();

	void print();

public:
	bool set_num1(double num1);
	bool set_num2(double num2);

	void work();


};

int main()
{
	Calculator calculator;
	calculator.work();
	

}

void Calculator::setNum1() {
	while (true) {
		std::cout << "Enter num1: ";
		double number;
		std::cin >> number;
		if (number == 0) {
			std::cout << "You entered an incorrect number." << std::endl;
		}
		else {
			_num1 = number;
			break;
		}
	}
}

void Calculator::setNum2() {
	while (true) {
		std::cout << "Enter num2: ";
		double number;
		std::cin >> number;
		if (number == 0) {
			std::cout << "You entered an incorrect number." << std::endl;
		}
		else {
			_num2 = number;
			break;
		}
	}
};

void Calculator::setData() {
	setNum1();
	setNum2();
}

double Calculator::add() {
	return _num1 + _num2;
}

double Calculator::multiply() {
	return _num1 * _num2;
}

double Calculator::subtract_1_2() {
	return _num1 - _num2;
}

double Calculator::subtract_2_1() {
	return _num2 - _num1;
}

double Calculator::divide_1_2() {
	return _num1 / _num2;
}

double Calculator::divide_2_1() {
	return _num2 / _num1;
}

bool Calculator::set_num1(double num1) {
	if (num1 != 0) {
		this->_num1 = num1;
		return true;
	}
	else {
		return false;
	};
}

bool Calculator::set_num2(double num2) {
	if (num2 != 0) {
		this->_num2 = num2;
		return true;
	}
	else {
		return false;
	};
}

void Calculator::print() {
	std::cout << "num1 + num2 = " << add()<< std::endl;
	std::cout << "num1 - num2 = " << subtract_1_2() << std::endl;
	std::cout << "num2 - num1 = " << subtract_2_1() << std::endl;
	std::cout << "num1 * num2 = " << multiply() << std::endl;
	std::cout << "num1 / num2 = " << divide_1_2() << std::endl;
	std::cout << "num2 / num1 = " << divide_2_1() << std::endl;
}

void Calculator::work() {

	while (true) {
		setData();
		print();
	}
}