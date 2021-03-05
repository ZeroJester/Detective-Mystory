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
		isEthical = true;
		isLucky = false;
}

int DetectiveStates::getINT()
{
	return INT;
}
void DetectiveStates::setINT(int theINT)
{
	if (theINT >= 100)
	{
		INT = 100;
	}
	else if (theINT <= 0) 
	{
		INT = 0;
	}
	else
	{
		INT = theINT;
	}
}

int DetectiveStates::getCharisma()
{
	return Charisma;
}
void DetectiveStates::setCharisma(int theCharisma)
{
	if (theCharisma >= 100)
	{
		Charisma = 100;
	}
	else if (theCharisma <= 0)
	{
		Charisma = 0;
	}
	else
	{
		Charisma = theCharisma;
	}
}

float DetectiveStates::getIntimidation()
{
	return IntimidationPercent;
}
void DetectiveStates::setIntimidation(float theIntimidation)
{
	if (theIntimidation >= 100)
	{
		IntimidationPercent = 100;
	}
	else if (theIntimidation <= 0)
	{
		IntimidationPercent = 0;
	}
	else
	{
		IntimidationPercent = theIntimidation;
	}
}

float DetectiveStates::getPerseption()
{
	return Perseption;
}
void DetectiveStates::setPerseption(float _perseption)
{
	if (_perseption >= 100)
	{
		Perseption = 100;
	}
	else if (_perseption <= 0)
	{
		Perseption = 0;
	}
	else
	{
		Perseption = _perseption;
	}
}

string DetectiveStates::getAggressionLevel()
{
	return aggressionLevel;
}
void DetectiveStates::setAggressionLevel(string _Agro)
{
	aggressionLevel = _Agro;
}

//int DetectiveStates::getTotalSkillPoints()
//{
//	return TotalSkillPoints;
//}
//void DetectiveStates::setTotalSkillPoints(int total)
//{
//	if (total < 100)
//	{
//
//	}
//	TotalSkillPoints = total;
//}



