#include <iostream>
#include "SaveloadEngine.h"
using namespace std;

int main() {
	
	enum Bobers { apples, pear, balls };

	Bobers arr[20];
	for (int i = 0; i < 20, i++) {
		arr[i] = (Bobers)(rand() % 3);
	}

	return 0;
}