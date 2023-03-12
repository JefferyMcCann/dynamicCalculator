/* this is a dynamic calculator I am working on in c++, I am switching from c to c++ as 
there are no jobs for c programmers in my area. I am still going to use c for personal 
projects as I love the language.*/ 

#include <iostream>

int i = 1; 

double anws; 

int calc(){ 

	std::cout << "this is an early version of this calculator, if you want to exit press e when its asking for the symbol \n"; 

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
		std::cout << num3 << std::endl;
	case '*': 
		num3 = num1 * num2; 
		std::cout << num3 << std::endl; 
		break;
	case '+': 
		num3 = num1 + num2; 
		std::cout << num3 << std::endl; 
		break;
	case '/':
		num3 = num1 / num2; 
		std::cout << num3 << std::endl; 
		break;
	case '%':
		num3 = num1 / num2 * 100; 
		std::cout << num3 << std::endl; 
		break;
	case '-': 
		num3 = num1 - num2; 
		std::cout << num3 << std::endl; 
		break;
	case 'e': 
		i = 0; 
		break;
	}

	anws = anws + num3; // technically fully dynamic now
	if(sym != 'e'){
		std::cout << anws << std::endl; 
	}

	return 0;
} 

int main() {

	for(i > 0; i++;) {
		calc();
	}
}

