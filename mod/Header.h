#pragma once

class Figure {
public:
	Figure();
	virtual void Draw()=0;
};

class Triangle : public Figure {
public:
	Triangle();
	void Draw();
};

class Hexagon : public Figure {
public:
	Hexagon();
	void Draw();
};