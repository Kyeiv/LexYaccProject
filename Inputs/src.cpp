#include "fileWithFunc.h"
#include <string.h>

int main() {
	int count = intFunc(10);
	string str = "inc";
	bool boolean = shouldIncrement(str);
	int retValue;
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; i++) {
			if (boolean) {
				retValue = retValue + 5;
			}
		}
	}
	if (retValue >= 100) {
		retValue = 100;
	}
	return count;
}
