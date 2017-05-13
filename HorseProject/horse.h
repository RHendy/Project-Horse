#pragma once
#include "track.h"
#include <string>

    // Horsie class
    class Horsie 
    {
        private:
            int rating;
            double speed;
            double endurance;
            int luck;
			std::string name;

        public:
            Horsie(int r, double s, double e, std::string n);
            ~Horsie();
			void displayStats();
    };

	// prints out the members to the console in a good fashion
	void Horsie::displayStats()
	{
		std::cout << "---------------" << std::endl;
		std::cout << "Stats for " << name << std::endl;
		std::cout << "Rating: " << rating << std::endl;
		std::cout << "Speed: " << speed << std::endl;
		std::cout << "Endurance: " << endurance << std::endl;
		std::cout << "---------------" << std::endl;
	}

    // constructor
    Horsie::Horsie(int r, double s, double e, std::string n) 
    {
		rating = r;
		speed = s;
		endurance = e;
		name = n;
    }

    //destructor
    Horsie::~Horsie()
    {
        
    }