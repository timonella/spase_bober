#include "GameEngine.h"
#include "ModelGenerator.h"
#include "SaveLoadEngine.h"
#include <iostream>
using namespace std;
 


//отображение меню загрузки
void GameEngine::ShowLoadOptions() {
	cout << "                     `. ___" << endl;
	cout << "                    __,' __`.                _..----....____" << endl;
	cout << "        __...--.'``;.   ,.   ;``--..__     .'    ,-._    _.-'" << endl;
	cout << "  _..-''-------'   `'   `'   `'     O ``-''._   (,;') _,'" << endl;
	cout << ",'________________                          \\`-._`-','" << endl;
	cout << " `._              ```````````------...___   '-.._'-:" << endl;
	cout << "    ```--.._      ,.                     ````--...__\\-." << endl;
	cout << "            `.--. `-`                       ____    |  |`" << endl;
	cout << "              `. `.                       ,'`````.  ;  ;`" << endl;
	cout << "                `._`.        __________   `.      \\'__/`" << endl;
	cout << "                   `-:._____/______/___/____`.     \\  `" << endl;
	cout << "                               |       `._    `.    \\" << endl;
	cout << "                               `._________`-.   `.   `.___" << endl;
	cout << "                                             SSt  `------'`" << endl;
	cout << "" << endl;



	cout << "+--------------+" << endl;
	cout << "|Tamer Universe|" << endl;
	cout << "+--------------+" << endl;
	cout << "+--------------+" << endl;
	cout << "|     Menu     |" << endl;
	cout << "|    1-Load    |" << endl;
	cout << "|  2-New Game  |" << endl;
	cout << "+--------------+" << endl;


	int menuModeSelection;
	int loadPoint = 1;
	int newgamePoint = 2;
	cout << "Напищите цыфру в соответствии с нужным вам пунктом: ";
	cin >> menuModeSelection;


	if (menuModeSelection = loadPoint) {
		//Load();
	}
	if (menuModeSelection = newgamePoint) {
		//GenerateMap()
	}
	if (menuModeSelection >= 3){
		cout << "Такого пункта нет";

	}
	if (menuModeSelection <= 0) {
		cout << "Такого пункта нет";

	}
}
//отображение меню сохранения/загрузки
void GameEngine::ShowSaveLoadOptions() {
	cout << endl;
	cout << "+---------------+" << endl;
	cout << "|      Menu     |" << endl;
	cout << "| 1-Load 2-Save |" << endl;
	cout << "+---------------+" << endl;
	cout << endl;

	int menuModeSelection;
	int loadPoint = 1;
	int savePoint = 2;
	cout << "Напищите цыфру в соответствии с нужным вам пунктом: ";
	cin >> menuModeSelection;


	if (menuModeSelection = loadPoint) {
		//Load();
	}
	if (menuModeSelection = savePoint) {
		//Save()
	}
	if (menuModeSelection >= 3) {
		cout << "Такого пункта нет";

	}
	if (menuModeSelection <= 0) {
		cout << "Такого пункта нет";

	}

}
//бой кораблей и захват планет
void GameEngine::BattleAndCapture(){
	//while (fleet1_size > 0 && fleet2_size > 0) {
	//	// fleet1 attacks fleet2
	//	for (int i = 0; i < fleet1_size; i++) {
	//		if (fleet2_size <= 0) break;
	//		fleet2[0].health -= fleet1[i].damage;
	//		if (fleet2[0].health <= 0) {
	//			// remove destroyed ship from fleet2
	//			for (int j = 0; j < fleet2_size - 1; j++) {
	//				fleet2[j] = fleet2[j + 1];
	//			}
	//			fleet2_size--;
	//		}
	//	}
	//}


}
//отображение инофмации о имперерии
void GameEngine::ShowEmpireInfo(){}
