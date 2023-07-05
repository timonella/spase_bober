#include "ComandEngine.h"
#include <iostream>
using namespace std;


//global variable
string name = "����������� - timon\n";

//�������������� �����
int ComandEngine::WelcomeMessage() {
    cout << "������� - \"help\"" << endl << endl << name;

    string help;
    cin >> help;

    if (help == "help") {
        ShowHelp();
    }
    else {
        name = "";
        cout << "�������� ������";
        return WelcomeMessage();
    }
}

//������� � ���������
int ComandEngine::ShowHelp() {

    string EnteringCommands;

    cout << "������� �������:\n1 - bild a ship\n2 - send fleet\n3 - Show Universe\n4 - Finish Turn\n5 - Start\n";

    cout << "������� \" stop \" ��� �� ��������� ����" << endl;

    cin >> EnteringCommands;

    for (; EnteringCommands == "stop";) {
        if (EnteringCommands == "bild a ship") {
            return BuildShip();
        }
        if (EnteringCommands == " send fleet") {
            return SendFleet();
        }
        if (EnteringCommands == "Show Universe") {
            return ShowUniverseStatus();
        }
        if (EnteringCommands == "Finish Turn") {
            return FinishTurn();
        }
        if (EnteringCommands == "Start") {
            return Start();
        }

        else
            return ShowHelp();
    }

}

int ComandEngine::FinishTurn() {
    cout << "1";
    return ShowHelp();
}

int ComandEngine::ShowUniverseStatus() {
    cout << "2";
    return ShowHelp();
}

int ComandEngine::SendFleet(/*int targetPlanetId*/) {
    cout << "3";
    return ShowHelp();
}

int ComandEngine::BuildShip(/*int attack, int shield*/) {
    cout << "4";
    return ShowHelp();
}

int ComandEngine::Start() {
    cout << "5";
    return ShowHelp();
}