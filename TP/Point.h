#pragma once
class Point
{
private:
	float x;
	float y;
public:
	Point(float x, float y);
	float dist(Point p);
	void afficher();
};

