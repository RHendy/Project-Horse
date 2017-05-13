// HorseProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "horse.h"
#include "track.h"

int main()
{
	int x;

	Horsie h1(4, 100, 100.1, "Proletariat");
	h1.displayStats();

	std::cin >> x;
    return 0;
}

