#include <iostream>
#include "SaveloadEngine.h"
using namespace std;

int main() {
	srand(time(NULL));
	enum Bobers { apples, pear, balls };

	Bobers arr[20];
	int aple = 0;
	for (int i = 0; i < 20, i++) {
		arr[i] = (Bobers)(rand() % 3);
	}
	for (int i = 0; i < 20; i++) {
		if (arr[i] == Bobers::apples) {
			aple++;
		}
		else if (arr[i] == Bobers::pear);
	}

	return 0;
}