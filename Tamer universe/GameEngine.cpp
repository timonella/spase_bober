#include "GameEngine.h"
#include <iosstream>

using namespace std;

 
//запрос команд
void GameEngine::GetCommands() {}
//отображение меню сохранения/загрузки
void GameEngine::ShowSaveLoadMenu() {
	cout << "+--------------+";
	cout << "|Tamer Universe|";
	cout << "+--------------+";
	cout << endl;
	cout << "+--------------------+";
	cout << "|        MENU		  |";
	cout << "|   Tamer Universe	  |";
	cout << "|1-Load		2-Save|";
	cout << "+--------------------+";
	cout << endl;


}
//бой кораблей и захват планет
void GameEngine::BattleAndCapture() {}
//отображение инофмации о имперерии
void GameEngine::ShowEmpireInfo() {}