#include <iostream>
#include <fstream>
#include "SaveLoadEngine.h"

using namespace std;

void SaveLoadEngine::CreateXML() {
	ofstream file;
	file.open("Universe.xml");
	if (file.is_open()) {
		file << "<Universe>\n\t<Turn>FirstPlayer</Turn>\n\n\t<Planets>\n\t\t<Planet>\n\t\t\t<Fleet>\n\t\t\t\t<Ship></Ship>\n\t\t\t</Fleet>\n\t\t\t<Owner>FiratPlayer</Owner>\n\t\t\t<ID>Jupiter</ID>\n\t\t</Planet>\n\t</Planets>\n</Universe>";
	}
}
void SaveLoadEngine::Save() {}
void SaveLoadEngine::Load() {}