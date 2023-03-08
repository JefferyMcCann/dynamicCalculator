/* this is a dynamic calculator I am working on in c++, I am switching from c to c++ as 
there are no jobs for c programmers in my area. I am still going to use c for personal 
projects as I love the language.*/ 

#include <iostream> 

int main() {
	std::cout << "this is a test \n"; 

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
	}


} 
