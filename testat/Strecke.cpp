#include "stdafx.h"
#include "Strecke.h"


CStrecke::CStrecke()
{
	start = new CPunkt(0, 0);
}


CStrecke::~CStrecke()
{
	CPunkt* del_ptr = start;
	while (start != nullptr)
	{
		del_ptr = start;
		start = start->getNext();
		delete del_ptr;
	}
}


CPunkt* CStrecke::getStart() const
{
	return start;
}


void CStrecke::setStart(CPunkt* _start)
{
	start = _start;
}


double CStrecke::getLength() const
{
	//Temp Variables
	double length_temp = 0;
	int x_temp = 0;
	int y_temp = 0;

	CPunkt* lookup_ptr = start;

	//Sum up length
	while (lookup_ptr->getNext() != NULL)
	{
		x_temp = lookup_ptr->getX() - lookup_ptr->getNext()->getX();
		y_temp = lookup_ptr->getY() - lookup_ptr->getNext()->getY();
		length_temp += sqrt(pow(x_temp, 2) + pow(y_temp, 2));
		lookup_ptr = lookup_ptr->getNext();
	}
	return length_temp;
}


void CStrecke::add(CPunkt _punkt)
{
	CPunkt* lookup_ptr = start;
	while (lookup_ptr->getNext() != NULL)
	{
		lookup_ptr = lookup_ptr->getNext();
	}
	lookup_ptr->setNext(new CPunkt(_punkt));
}


void CStrecke::draw(CDC* _cdc) const
{
	CPen schwarz;
	_cdc->MoveTo(0, 0);
	_cdc->SetDCPenColor(RGB(255, 255, 255));
	CPunkt* lookup_ptr = start;
	while (lookup_ptr != NULL)
	{
		_cdc->LineTo(lookup_ptr->getX(), lookup_ptr->getY());
		lookup_ptr = lookup_ptr->getNext();
	}
}
