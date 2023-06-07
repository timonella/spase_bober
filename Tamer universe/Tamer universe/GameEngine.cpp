#include "GameEngine.h"
#include <iostream>
using namespace std;
 

//запрос команд
void GameEngine::GetComands() {}
//отображение меню загрузки
void GameEngine::ShowLoadOptions() {
	cout << "+--------------+";
	cout << "|Tamer Universe|";
	cout << "+--------------+";
	cout << "+--------------+";
	cout << "|     Menu     |";
	cout << "|    1-Load    |";
	cout << "+--------------+";

}
//отображение меню сохранения/загрузки
void GameEngine::ShowSaveLoadOptions() {
	cout << "+---------------+";
	cout << "|      Menu     |";
	cout << "| 1-Load 2-Save |";
	cout << "+---------------+";
}
//бой кораблей и захват планет
void GameEngine::BattleAndCapture(){}
//отображение инофмации о имперерии
void GameEngine::ShowEmpireInfo(){}
