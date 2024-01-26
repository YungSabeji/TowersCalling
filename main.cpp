#include <iostream>
#include <string>
#include <windows.h>

#define RESET         "\033[0m"
#define RESET_BG      "\033[0m"
#define RED_TEXT      "\033[31m"
#define GREEN_TEXT    "\033[32m"
#define YELLOW_TEXT   "\033[33m"
#define BLUE_TEXT     "\033[34m"
#define BLACK_TEXT      "\033[30m"
#define BLACK_BG      "\033[40m"
#define RED_BG        "\033[41m"
#define GREEN_BG      "\033[42m"
#define YELLOW_BG     "\033[43m"
#define BLUE_BG       "\033[44m"
#define WHITE_TEXT    "\033[97m"
#define LIGHT_GRAY_BG   "\033[47m"



void main_menu() {

		std::string main_menu_options[] = {
		"New Game",
		"Load Game",
		"Options",
		"Exit"
	};

	int index = 0;
	int slectedindex;

	do
	{
		if (index == 0) {
			std::cout << main_menu_options[index] << std::endl;
			index++;
		}
		else {
			std::cout << main_menu_options[index] << std::endl;
		}


		std::cout << "Towers Calling" << std::endl;
		std::cout << "===========================" << std::endl;
		for (int i = 0; i < 4; i++) {
			std::cout << main_menu_options[i] << std::endl;
			index++;
		}
	} while (true);
	
	
	

	std::cout << BLACK_TEXT << LIGHT_GRAY_BG << "Enter Key: " RESET;


	/*
	

	std::string main_menu_choice; 
	std::cout << ">";
	std::cin >> main_menu_choice;
	std::cout << "testing: " << main_menu_choice;

	*/
	
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