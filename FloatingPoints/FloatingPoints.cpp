#include <iostream>;

void doMaths(double num1, double num2, char symbol) {

	double result{};

	if (symbol == '*')
		result = num1 * num2;
	else if (symbol == '+')
		result = num1 + num2;
	else if (symbol == '-')
		result = num1 - num2;
	else if (symbol == '/')
		result = num1 / num2;
	else
		return;  //print nothing if a valid character wasnt inputted and return early
	//otherwise print the result
	std::cout << num1 << " " << symbol << " " << num2 << " is " << result; 
	return;
	
}

double getDouble(){

	std::cout << "input a floating point number\n";
	double input{};
	std::cin >> input;

	return input;
}

char getChar() {

	std::cout << "input a symbol (*, +, -, /)\n";
	char input{};
	std::cin >> input;
	return input;
}

int main() {

	double num1{getDouble()};
	double num2{getDouble()};

	char symbol{getChar()};

	doMaths(num1, num2, symbol);

	return 0;
}