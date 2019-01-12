#include "stdafx.h"
#include "Punkt.h"


CPunkt::CPunkt()
{
	x = 0;
	y = 0;
}

CPunkt::CPunkt(int _x, int _y, CPunkt* _next)
	:x(_x)
	,y(_y)
	,next(_next)
{
}

CPunkt::~CPunkt()
{
}


int CPunkt::getX() const
{
	return x;
}


int CPunkt::getY() const
{
	return y;
}


void CPunkt::setY(const int _y)
{
	y = _y;
}


void CPunkt::setX(const int _x)
{
	x = _x;
}


CPunkt* CPunkt::getNext() const 
{
	return next;
}


void CPunkt::setNext(CPunkt* _next)
{
	next = _next;
}
