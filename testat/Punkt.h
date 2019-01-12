#pragma once
class CPunkt
{
protected:
	int x;
	int y;
	CPunkt* next;


public:
	CPunkt();
	CPunkt(int _x, int _y,  CPunkt* _next = NULL);
	~CPunkt();

	int getX() const;
	int getY() const;
	void setY(const int _y);
	void setX(const int _x);
	CPunkt* getNext() const;
	void setNext(CPunkt* _next);
};

