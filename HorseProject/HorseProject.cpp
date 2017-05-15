// HorseProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "horse.h"
#include "gameplay.h"

int main()
{
	int x;

	Horsie h1(1, true, 4, 100, 100.1, "Proletariat");
	h1.displayStats();

	bool endIt = false;
	while (endIt == false)
	{
		endIt = true;
	}

	std::cin >> x;
    return 0;
}

