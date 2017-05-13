#pragma once

// class for the racetrack
class track
{
	private:
		int distance;
		int rating;

	public:
		track(int d, int r);
		~track();
};

track::track(int d, int r)
{
	distance = d;
	rating = r;
}

track::~track()
{

}