#include "DataModel.h"
#include<random>
#include <time.h>
#include <iostream>
using namespace std;
void Planet() {
	srand(time(NULL));
	const int n = 10;
	double planet[n];
	for (int i = 0; i < n; i++) {
		planet[i] = (rand() % n) + 1;
	}
}
void Fleet() {
	srand(time(NULL));
	const int n = 10;
	double Fleet[n];
	for (int i = 0; i < n; i++) {
		Fleet[i] = (rand() % n) + 1;
	}
}