#include "XMLBuilder.h"
#include <fstream>
using namespace std;

char* WriteXML::WriteHeader() {
	return (char*) "<?xml version=\"1.0\" encoding=\"utf - 8\"?>\r\n";
}
char* WriteXML::WriteUniverse(char* header) {
	return (char*) _CONCAT("<Universe>", "</Universe>");
}
char* WriteXML::WriteTurn() {
	return (char*)
}
char* WriteXML::WritePlanets() {
	return (char*)
}
char* WriteXML::WritePlanet() {
	return (char*)
}
char* WriteXML::WriteFleet() {
	return (char*)
}
char* WriteXML::WriteShip() {
	return (char*)
}
char* WriteXML::WriteOwner() {
	return (char*)
}
char* WriteXML::WriteID() {
	return (char*)
}