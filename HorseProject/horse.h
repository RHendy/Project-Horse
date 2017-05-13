#pragma once
#include "track.h"
#include <string>

    // Horsie class
    class Horsie 
    {
        private:
			int spec;
			std::string strSpec;

			bool gender;
			std::string strGender;

            int rating;
            double speed;
            double endurance;
            int luck;
			std::string name;

        public:
            Horsie(int sp, bool g, int r, double s, double e, std::string n);
            ~Horsie();
			void displayStats();
			void changeToStrings(int sp, bool g)
			{
				if (sp == 3)
				{
					this->strSpec = "Rainy";
				}
				else if (sp == 2)
				{
					this->strSpec = "Clear";
				}
				else
				{
					this->strSpec = "Snowy";
				}

				if (g == true)
				{
					this->strGender = "Male";
				}
				else 
				{
					this->strGender = "Female";
				}
			}
    };

	// prints out the members to the console in a good fashion
	void Horsie::displayStats()
	{
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Stats for " << name << std::endl;
		std::cout << "Specialty: " << strSpec << std::endl;
		std::cout << "Gender: " << strGender << std::endl;
		std::cout << "Rating: " << rating << std::endl;
		std::cout << "Speed: " << speed << std::endl;
		std::cout << "Endurance: " << endurance << std::endl;
		std::cout << "-----------------------------------" << std::endl;
	}

    // constructor
    Horsie::Horsie(int sp, bool g, int r, double s, double e, std::string n) 
    {
		spec = sp;
		gender = g;
		rating = r;
		speed = s;
		endurance = e;
		name = n;
		changeToStrings(spec, gender);
    }

    //destructor
    Horsie::~Horsie()
    {
        
    }