#include "Game.hpp"
#include <iostream>
using namespace std;

int main()
{
	//notify user to play in full screen (for display purposes)
	cout << endl;
	cout << "Assure that you are in Full Screen mode" << endl << endl;

	//wait for the user to switch to full screen
	string temp;
	cout << "PRESS ENTER TO CONTINUE" << endl;
	getline(cin, temp);
	cin.clear();
	cout << "\033[2J\033[1;1H" << endl;

	//diplay the title image
	string imageLines = "";
	string fileName = "title.txt";

	ifstream inputFile;
	inputFile.open(fileName.c_str());

	if (inputFile)
	{
		while (inputFile)
		{
			string temp;
			getline(inputFile, temp);
			temp += "\n";
			imageLines += temp;
		}
		cout << imageLines << endl;

		inputFile.close();
	}
	else
		cout << "ERROR: Image file wasn't found..." << endl;

	// Opening story
	cout << "It is a dark and stormy night in the ancient Kingdom of Moirang. You are Yamba, a cunning thief," << endl;
	cout << "wandering the countryside in search of treasure and shelter. As the rain pours down relentlessly," << endl;
	cout << "you stumble upon what seems to be a long-abandoned palace on the outskirts of the kingdom." << endl << endl;
	cout << "\"This could be the perfect place to find something valuable,\" you think with a sly grin." << endl << endl;
	cout << "Little do you know, the palace holds more secrets than you could ever imagine, waiting behind those grand doors..." << endl << endl;

	//pause
	cout << "PRESS ENTER TO CONTINUE" << endl;
	getline(cin, temp);
	cin.clear();
	cout << "\033[2J\033[1;1H";
	
	//instantiate a game object and start the play loop
	Game castle;
	castle.play();

	return 0;
}