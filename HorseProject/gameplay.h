#pragma once
#include "horse.h"
#include <iostream>

// commands lists are split up usually by the word entered second to last
std::string baseCommandList[] = { "help", "menu", "list", "train"};
std::string helpCommandList[] = {"help", "1", "one", "2", "two"};
std::string listCommandList[] = { "list", "player info", "player", "horse", "horses", "race", "races"};
std::string horseCommandList[] = { "horse", "stats" };

void formatCommand(std::string initialCommand)
{

}

// prompt for a command, get it, then format it and, if valid, carry it out
void doCommand()
{
	std::string curCommand;
	std::cout << "Awaiting command..." << std::endl;
	std::cin >> curCommand; std::cout << std::endl;
	formatCommand(curCommand);
	
}

// allow the player to login
void getSave()
{
	
}

// create a race class and assign it values, also add it to the race class array
void createRace()
{

}