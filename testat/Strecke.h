#pragma once

#include "Punkt.h"

class CStrecke
{

protected:
	CPunkt* start;

public:
	CStrecke();
	~CStrecke();

	CPunkt* getStart() const;
	void setStart(CPunkt* _start);
	double getLength(void) const;
	void add(CPunkt _punkt);
	void draw(CDC* _cdc) const;
};

