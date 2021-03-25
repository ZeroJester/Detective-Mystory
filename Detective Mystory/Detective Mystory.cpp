#include <iostream>
#include <string>
#include <time.h>
using namespace std;
#include "DetectiveStates.h"
#include "OverallClues.h"
#include "Clues.h"

void Prologue(void)
{
	cout << "PROLOGUE:\n";
	cout << "Your a retired detective, you spent your last years trying to track down a serial killer before the trail when cold.\n";
	cout << "It had been several years since the last murder and although you had kept the reports and paper work, you secretly hoped it was over, that he was dead.\n";
	cout << "Until today, you get an email from your old partner, he had sent you a few new files that had been passed onto his desk and brushed under a few other files\n";
	cout << "Many like you also thought he was dead and subsequently belived that this was just a fake report\n";
	cout << "\n";
	cin.get();
}
void SuspectList(void)
{
	//This Function is used to display the suspects of the murder. -_- Original plan is to have their names be revialed as you find clues (this proved to be hard to impliment)

	string Suspects[5];
	cout << "Current Suspect List:\n";
	Suspects[0] = "Jim, 34, Brown Hair";
	Suspects[1] = "Elizabeth, 19, Blue Hair";
	Suspects[2] = "Harry, 50, white Hair";
	Suspects[3] = "Anna, 20, Pink-highlights Hair";
	Suspects[4] = "Harold, 21, Blond Hair";

	for (int S = 0; S < 5; S++)          
	{
		Suspects[S];
	}
	for (int S = 0; S < 5; S++)
	{
		cout << "Suspect " << S << ": " << Suspects[S] << endl;
	}
}
void SDetails(int &a)
{ // The player will be given the chance to look at all the suspects in more detail, the input is passed by value.
	switch (a)
	{
	case 1:
		cout << "Name: Jim Mcguver\n";
		cout << "Age: 34\n";
		cout << "Description: Tall male,Brown hair, last seen in a blue hoodie.\n";
		cout << "Alibi: Jim stated that he was at a friends house, on the other side of town, at the time of the murder.\n"
			            "We were unable to get hold of his friend to clarify his story." << endl;
		break;

	case 2:
		cout << "Name: Elizabeth Taylor\n";
		cout << "Age: 19\n";
		cout << "Description: Midsize female,Blue hair, last seen in a tracksuit.\n";
		cout << "Alibi: Elizabeth quoted that she was at the liabry all night and then walked home in the opposite direction 3 hours after the murder.\n"
		             	"The librarian saw her there but could not clarify the time exactly she left and went home." << endl;
		break;

	case 3:
		cout << "Name: Harry Rogers\n";
		cout << "Age: 50\n";
		cout << "Description: Hunche back short male,white/grey hair, last seen in an oversized brown coat and a black fadora.\n";
		cout << "Alibi: Harry was last seen at a local pub and was seen leaving several hours later.\n"
			            "The bartender told us that he was too drunk to walk and had to get a taxi home." << endl;
		break;

	case 4:
		cout << "Name: Anna Ramsey\n";
		cout << "Age: 20\n";
		cout << "Description: Average hight, pink-highlighted hair, last seen in a yellow jacket with a black dress underneath.\n";
		cout << "Alibi: Anna was at a protest and was said to have been part of a group that had chained them selves to a butchers all night.\n"
			            "This was clarified by a local police cheif, who arrested her group before the murder had taken place, she was in custedy throught the night." << endl;
		break;

	case 5:
		cout << "Name: Harold Sing\n";
		cout << "Age: 21\n";
		cout << "Description: Tall male ,BLond hair, last seen in a black suit, white shirt and black slim tie.\n";
		cout << "Alibi: Harold spent the night at home with his wife and kids, it was there anniversary, he said he was cooking dinner at the time of the murder.\n"
			"His neighbour clarifies that he was in fact cooking as he had turned up to there house asking for some flour for a cake he was baking." << endl;
		break;

	default:
		break;
	}
}
int Rand(int &u)
{
	// picks a random number between 0 and a number chosen via the peramiter
	int max;
	max = u;
	srand(time(0));
	int s = rand() % max;
	return s;
}

int main()
{
	DetectiveStates Detective;
	int INT;
	int Char;
	float Intimidation;
	float Perseption;
	string aggressionLevel;

	cout << "Lets start your adventure by deciding on your stats.\n";
	cin.get(); // Waits for an input before the next line will run.

	cout << "What is your Intelect?" << endl;
	cin >> INT;
	cout << "How charasmatic are you?" << endl;
	cin >> Char;
	cout << "How intimidating are you as a percentage?" << endl;
	cin >> Intimidation;
	cout << "How perspective are you?" << endl;
	cin >> Perseption;
	cout << "What level of aggression do you have:\nHigh,Medium,Low" << endl;
	cin >> aggressionLevel;

	Detective.setCharisma(Char);
	Detective.setINT(INT);
	Detective.setIntimidation(Intimidation);
	Detective.setPerseption(Perseption);
	Detective.setAggressionLevel(aggressionLevel);

	cout << "Your stats are as follows: " << endl;
	cout << "Charisma: " << Detective.getCharisma() << endl << "Intelegence: " << Detective.getINT() << endl << "Intimidation: " << Detective.getIntimidation() << endl << "Perseption: " << Detective.getPerseption() << endl << "Aggression: " << Detective.getAggressionLevel() << endl;

	cout << "Now lets begin the story" << endl;
	cout << endl;
	cin.get();
	//_____________________________________________________ End of character creation and moving onto the base of the game. ___________________________________________________________________________

	Prologue();

	cout << "Detective Smith: Morning " << Detective.Name << " hope you dont have any plans for the rest of the week as this new case may take a while." << endl;
	cin.get();
	cout << Detective.Name << ": I was planing on having a relaxing week but that can wait till this monster is captured." << endl;
	cin.get();
	cout << Detective.Name << ": Show me the recent reports and am I able to look at the bodys?" << endl;
	cin.get();
	cout << "Detective Smith: The body's are currently geting an autopsy but once the report is done you are more than welcome to look over it.\n" << "The bodys were found outside the Winchester pub at 3:30 this morning" << endl;
	cout << "There are currently five suspects, we have only fully identified one so far, they have an alibie for the night but we need you to follow up on the leads from the crime scene" << endl;
	cout << "These are the suspects we have identified:" << endl;
	SuspectList();
	cout << "Detective Smith: These suspects were seen by eye witnesses within the area around the time of the murder, however we have yet to get any info about all the suspects and so you will have to conduct the investigation with only one full suspect breakdown" << endl;

	int y = 5;
	int s = Rand(y);
	SDetails(s);

	cout << "Detective Smith: We managed to find a few clues scattered around the crime scene, hopefully they can help point you in the right direction\n\n";

	bool notUseful = true;;
	Clues clue;
	char k;

	do 
	{
		cin.get();
		cout << "First Clue" << endl;
		clue.firstClue();
		cout << "Second Clue" << endl;
		clue.secondClue();		
		cout << "Third Clue" << endl;
		clue.thirdClue();

		cout << "Have you found all you need from the clues?" << endl;
		cout << "y/n" << endl;
		cin >> k;

		if (k == 'y')
		{
			cout << "Amazing, were so close to soliving this" << endl;
			notUseful == false;
		}
		else if (k == 'n')
		{
			cout << "Ill give you some more time to examine the clues" << endl;
			
		}

	} while (notUseful == true);

	cout << "wooo";
}