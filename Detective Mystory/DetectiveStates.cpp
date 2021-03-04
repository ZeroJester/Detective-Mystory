#include "DetectiveStates.h"
#include <iostream>
using namespace std;
#include <string>

DetectiveStates::DetectiveStates()
{
		INT = 10;
		IntimidationPercent = 74.f;
		badgeNumber = 5542.09f;
		Charisma = 7;
		Age = 40;
		Name = "Mark";
}

int DetectiveStates::getINT()
{
	return INT;
}
void DetectiveStates::setINT(int theINT)
{
	 INT = theINT;
}

int DetectiveStates::getCharisma()
{
	return Charisma;
}
void DetectiveStates::setCharisma(int theCharisma)
{
	Charisma = theCharisma;
}

float DetectiveStates::getIntimidation()
{
	return IntimidationPercent;
}
void DetectiveStates::setIntimidation(float theIntimidation)
{
	IntimidationPercent = theIntimidation;
}


