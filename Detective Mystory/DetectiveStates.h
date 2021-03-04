#pragma once
#include <string>
using namespace std;


class DetectiveStates
{
	//The player character has a selection of states that are protected so they can be altered with mutators if needed
public:
	DetectiveStates();
	
	int Age;
	float badgeNumber;
	string Name;

	void setINT(int theINT);
	int getINT();
	void setCharisma(int theCharisma);
	int getCharisma();
	void setIntimidation(float theIntimidation);
	float getIntimidation();
	void setPerseption(float _perseption);
	float getPerseption();
	void setAggressionLevel(string _Agro);
	string getAggressionLevel();
	//void setTotalSkillPoints(int total);
	//int getTotalSkillPoints();
	
protected:
	int Charisma;
	int INT;
	float IntimidationPercent;
	bool isEthical;
	string aggressionLevel;
	bool isLucky;
	float Perseption;

	//int TotalSkillPoints;
};

