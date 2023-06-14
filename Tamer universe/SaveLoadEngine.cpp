#include <iostream>
#include <fstream>
#include "SaveLoadEngine.h"
using namespace std;
string filepath = "Universe.xml";

void SaveLoadEngine::CreateXML() {
	ofstream file(filepath);

	if (file.is_open()) {
		file << "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<Universe>\n\t<Turn>FirstPlayer</Turn>\n\n\t<Planets>\n\t\t<Planet>\n\t\t\t<Fleet>\n\t\t\t\t<Ship>2</Ship>\n\t\t\t</Fleet>\n\t\t\t<Owner>FirstPlayer</Owner>\n\t\t\t<ID>Jupiter</ID>\n\t\t</Planet>\n\n\t\t<Planet>\n\t\t\t<Fleet>\n\t\t\t\t<Ship>2</Ship>\n\t\t\t</Fleet>\n\t\t\t<Owner>SecondPlayer</Owner>\n\t\t\t<ID>Mars</ID>\n\t\t</Planet>\n</Universe>";
		file.close();
	}
}
	void SaveLoadEngine::Save() {}
	void SaveLoadEngine::Load() {}