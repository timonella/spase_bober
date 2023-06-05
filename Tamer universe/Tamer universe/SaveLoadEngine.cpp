#include <iostream>
#include "SaveLoadEngine.h"
#include "pugixml.hpp"

using namespace std;
using namespace pugi;

void SaveLoadEngine::Save() {
	
}
void SaveLoadEngine::Load() {
    xml_document doc;

    /*if (!doc.load_file("sample.xml")) return -1;*/
    xml_node tools = doc.child("TamerUniverse").child("Planets");

    for (xml_node_iterator it = tools.begin(); it != tools.end(); ++it) {
        cout << "Planet:";
        for (xml_attribute_iterator ait = it->attributes_begin();
            ait != it->attributes_end(); ++ait) {
            cout << " " << ait->name() <<
                " = " << ait->value();
        }
        cout << endl;
    }
    cout << endl;
}