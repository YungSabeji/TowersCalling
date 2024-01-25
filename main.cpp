#include <iostream>
#include <string>

void main_menu() {

	std::string main_menu_options[] = {
		"New Game",
		"Load Game",
		"Options",
		"Exit"
	};

	std::cout << "Towers Calling" << std::endl;
	std::cout << "===========================" << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout <<  main_menu_options[i]  << std::endl;
	}	

	std::string main_menu_choice; 
	std::cout << ">";
	std::cin >> main_menu_choice;
	std::cout << "testing: " << main_menu_choice;
}

void Intro() {
	std::cout << "testing" << std::endl;
}

int main() {

	// Generate Main Menu + Handle the user input
	main_menu();	
	Intro();
	std::cout << "Hello World!";

	return 0;
}