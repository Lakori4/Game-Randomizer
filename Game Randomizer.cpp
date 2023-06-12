#include <iostream>
#include <vector> 
#include <string>
#include <ctime>
#include <algorithm>

using namespace std;





int main() {

	
	bool cont = true;
	srand(time(NULL));

	do {

		system("cls");

		vector<string> games = {"Overwatch", "Cyberpunk 2077", "GTA V", "Forza Horizon 3", "Forza Horizon 5", "Control", "The Legend Of Zelda: TOTK", "Himno", "Star Citizen"};
	
		games.push_back("Sea of Thieves");
		games.push_back("Just Cause 3");
		games.push_back("Assetto Corsa Competizione");
		games.push_back("Kerbal Space Program");


		/* 	

		games.push_back("Papers, Please");
		games.push_back("Jedi: Fallen Order");
		games.push_back("Rocket League");
		games.push_back("Wolfenstein"); 
		
		*/

		vector <int> printed;

		for (int i = 0; i <= games.size(); i++) {
			
			int j = rand() % games.size();


			if (!count(printed.begin(), printed.end(), j)) {

				printed.push_back(j);
				cout << "\n\t" << i+1 << ". " << games[j];

			}

			else {

				j = rand() % games.size();
				
				if (printed.size() == games.size()) {
				
					break;
				}
				
				else {

					i--;
				} 
			}
		}

		char respuesta;

		do {

			cout << endl << "\n¿Quieres volver a tirar? (S/N)";
			cin >> respuesta;
			respuesta = toupper(respuesta);
		} while (respuesta != 'S' && respuesta != 'N');

		if (respuesta == 'N') {cont = false;}

	} while (cont);

	return 0;

 } 