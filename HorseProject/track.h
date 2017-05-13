#pragma once

// class for the racetrack
class track
{
	private:
		int distance;
		int rating;
		int competitors;

	public:
		track(int d, int r, int c);
		~track();
};

// constructor
track::track(int d, int r, int c)
{
	distance = d;
	rating = r;
	competitors = c;
}

// destructor
track::~track()
{

}