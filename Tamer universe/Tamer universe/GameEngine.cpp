#include "GameEngine.h"
#include "Variables.h"
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


	cout << "Напищите цыфру в соответствии с нужным вам пунктом: ";
	cin >> menuModeSelection;


	if (menuModeSelection = loadPoint) {
		//Load();
	}
	if (menuModeSelection = newgamePoint) {
		//GenerateMap()
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


	cout << "Напищите цыфру в соответствии с нужным вам пунктом: ";
	cin >> menuModeSelection;


	if (menuModeSelection = loadPoint) {
		//Load();
	}
	if (menuModeSelection = savePoint) {
		//Save()
	}

}
//бой кораблей и захват планет
void GameEngine::BattleAndCapture(){}
//отображение инофмации о имперерии
void GameEngine::ShowEmpireInfo(){}
