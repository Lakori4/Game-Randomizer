#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>

using namespace std;


int main() {


	bool cont = true;
	srand(time(NULL));

	vector <string> games;

	do {

		system("cls");

		games = {"Overwatch", "Cyberpunk 2077", "GTA V", "Forza Horizon 3", "Forza Horizon 5", "Control", "The Legend Of Zelda: TOTK", "HearthStone"};

		games.push_back("Sea of Thieves");
		games.push_back("Outer Wilds");
		games.push_back("Mirror's Edge Catalyst");
		games.push_back("The Finals");
		games.push_back("Just Cause 3");
		games.push_back("Assetto Corsa Competizione");
		games.push_back("Kerbal Space Program");
		games.push_back("Forza Horizon 4");
		games.push_back("Half-Life");
		games.push_back("SteamWorld Dig 2");
		games.push_back("Star Citizen");
		games.push_back("BioShock");
		games.push_back("MultiVersus");
		games.push_back("Super Mario Odessey");

		/*
		games.push_back("Himno");
		games.push_back("Papers, Please");
		games.push_back("Jedi: Fallen Order");
		games.push_back("Rocket League");
		games.push_back("Wolfenstein");

		*/

		int nGames = games.size();

		for (int i = nGames; i > 0; i--) {

			int j = rand() % games.size();

			cout << "\n\t" << nGames - i + 1 << ". " << games[j];

			games.erase(games.begin() + j);

		}

		char resp;

		do {

			cout << "\n\nDo you want to roll again? (Y/N): ";
			cin >> resp;
			resp = toupper(resp);

		} while (resp != 'Y' && resp != 'N');

		if (resp == 'N')
			cont = false;

	} while (cont);

	return 0;
}