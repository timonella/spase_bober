#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

class FileManager {
public:
	void OpenFile();
	void ReadFile();
	void WriteFile(const char* Data);
	void CloseFile();
};