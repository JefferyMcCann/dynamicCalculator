/* this is a dynamic calculator I am working on in c++, I am switching from c to c++ as 
there are no jobs for c programmers in my area. I am still going to use c for personal 
projects as I love the language.*/ 

#include <iostream> 

int calc(){ 

	std::cout << "this is an early version of this calculator \n"; 

	double num1;

	double num2;

	double num3; 

	char sym; 

	std::cin >> num1; 

	std::cin >> sym; 

	std::cin >> num2; 

	switch(sym){
	case 'x':
		num3 = num1 * num2; 
		std::cout << num3; // first semi dynamic function for outputs, program is still very early on
		break;   
	case '*': 
		num3 = num1 * num2; 
		std::cout << num3; 
		break;
	case '+': 
		num3 = num1 + num2; 
		std::cout << num3; 
		break;
	case '/':
		num3 = num1 / num2; 
		std::cout << num3; 
		break;
	case '%':
		num3 = num1 / num2 * 100; 
		std::cout << num3; 
		break;

	}

	return 0;
} 

int main() {

	int i = 1; 

	for(i > 0; i++;) {
		calc();
	}
}
