#include "fileWithClass.h"

using namespace std;

int intFunc(int var) {
	TestClass obj;
	obj.a = var;
	int intVar;
	if (var == 5) {
		intVar = 55;
	} else {
		intVar = 5;
	}
	return intVar;
}

bool shouldIncrement(string str) {
	if (str == "inc") {
		return true;
	}
	return false;
}

string incOrDec(int count) {
	if (count > 10) {
		return "inc";
	} else if (count < 10) {
		return "dec";
	} else {
		return "error";
	}
}