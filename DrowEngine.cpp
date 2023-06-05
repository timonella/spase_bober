#include "DrowEngine.h"
#include "ComandEngine.h"

#include <iostream>
using namespace std;

string name = "разработчик - timon\n";

void DrowEngine::WelcomeMessage() {


	cout << "введите - \"help\"" << endl << endl << name;

	string help;
	cin >> help;

	if (help == "help") {
		ShowHelp();
	}
	else {
		name = "";
		cout << "попробуй заново, ";
		return WelcomeMessage();
	}
}
void DrowEngine::ShowHelp() {
	string EnteringCommands;

	cout << "введите команду\n1 - create a ship\n2 - send fleet\n3 - Show Universe Status\n4 - Finish Turn";

	cin >> EnteringCommands;

}