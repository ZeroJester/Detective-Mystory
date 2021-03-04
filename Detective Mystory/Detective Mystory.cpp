#include <iostream>
#include <string>
using namespace std;
#include "DetectiveStates.h"

void Intro(void)
{
	cout << "Your a retired detective, you spent your last years trying to track down a serial killer before the trail when cold\n";
	cout << "Until today, you get an email from your old partner, he had sent you some of the old files from the case but along side them were what seemed to be new leads into the case\n";
	cout << "";
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
			            "We were unable to get hold of his friend to clarify his story.";
		break;

	case 2:
		cout << "Name: Elizabeth Taylor\n";
		cout << "Age: 19\n";
		cout << "Description: Midsize female,Blue hair, last seen in a tracksuit.\n";
		cout << "Alibi: Elizabeth quoted that she was at the liabry all night and then walked home in the opposite direction 3 hours after the murder.\n"
		             	"The librarian saw her there but could not clarify the time exactly she left and went home.";
		break;

	case 3:
		cout << "Name: Harry Rogers\n";
		cout << "Age: 50\n";
		cout << "Description: Hunche back short male,white/grey hair, last seen in an oversized brown coat and a black fadora.\n";
		cout << "Alibi: Harry was last seen at a local pub and was seen leaving several hours later.\n"
			            "The bartender told us that he was too drunk to walk and had to get a taxi home.";
		break;

	case 4:
		cout << "Name: Anna Ramsey\n";
		cout << "Age: 20\n";
		cout << "Description: Average hight, pink-highlighted hair, last seen in a yellow jacket with a black dress underneath.\n";
		cout << "Alibi: Anna was at a protest and was said to have been part of a group that had chained them selves to a butchers all night.\n"
			            "This was clarified by a local police cheif, who arrested her group before the murder had taken place, she was in custedy throught the night.";
		break;

	case 5:
		cout << "Name: Harold Sing\n";
		cout << "Age: 21\n";
		cout << "Description: Tall male ,BLond hair, last seen in a black suit, white shirt and black slim tie.\n";
		cout << "Alibi: Harold spent the night at home with his wife and kids, it was there anniversary, he said he was cooking dinner at the time of the murder.\n"
						"His neighbour clarifies that he was in fact cooking as he had turned up to there house asking for some flour for a cake he was baking.";
		break;

	default:
		break;
	}
}
int main()
{
	//DetectiveStates Detective;
	//int INT;
	//int Char;
	//float Intim;

	//cout << "Lets start with a light character creation shall we" << endl;

	//cout << "What is your Intelect?" << endl;
	//cin >> INT;
	//cout << "How charasmatic are you?" << endl;
	//cin >> Char;
	//cout << "How intimidating are you as a percentage?" << endl;
	//cin >> Intim;

	//Detective.setCharisma(Char);
	//Detective.setINT(INT);
	//Detective.setIntimidation(Intim);

	//cout << "Charisma: " <<  Detective.getCharisma() << endl << "Intelegence: " << Detective.getINT() << endl << "Intimidation: " << Detective.getIntimidation() << endl;

	int X = 67;
	int* Pointer = &X;
	cout << Pointer << endl;

	//string result;
	//cout << "There are currently five suspects, we know nothing about,\nIt is on you to collect infomation on these people and fill out a suspect list." << endl;
	//SuspectList();
	//cout << "Would you like to get an in depth understanding of your suspects\nY/N" << endl; // Allows the player to decide if they want to look at the suspects or not -_- currently the "N"||"n" is not being registered.
	//cin >> result;
	//if (result == "Y" || result == "y")
	//{
	//	cout << "What suspect would you like to know about?\n";
	//	int a;
	//	cin >> a;
	//	SDetails(a);
	//}
	//else if (result == "N" || result == "n")
	//{
	//	cout << "Okay, lets continue";
	//}
}
//void CharacterCreation()
//{
//	DetectiveStates Detective;
//	int INT;
//	int Char;
//	float Intim;
//	
//	cout << "Lets start with a light character creation" << endl;
//
//	cout << "What is your Intelect?" << endl;
//	cin >> INT;
//	cout << "How charasmatic are you?" << endl;
//	cin >> Char;
//	cout << "How intimidating are you?" << endl;
//	cin >> Intim;
//
//}
