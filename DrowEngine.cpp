#include "DrowEngine.h"
#include "ComandEngine.h"

#include <iostream>
using namespace std;

string name = "����������� - timon\n";

void DrowEngine::WelcomeMessage() {


	cout << "������� - \"help\"" << endl << endl << name;

	string help;
	cin >> help;

	if (help == "help") {
		ShowHelp();
	}
	else {
		name = "";
		cout << "�������� ������, ";
		return WelcomeMessage();
	}
}
void DrowEngine::ShowHelp() {
	string EnteringCommands;

	cout << "������� �������\n1 - create a ship\n2 - send fleet\n3 - Show Universe Status\n4 - Finish Turn";

	cin >> EnteringCommands;

}