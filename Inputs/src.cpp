#include "fileWithFunc.h"

int main() {
	int count = intFunc(10);
	std::string str = incOrDec(count);
	bool boolean = shouldIncrement(str);
	int retValue;
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; i++) {
			if (boolean) {
				retValue = retValue + 5;
			}
			i = j;
		}
	}
	if (retValue >= 100) {
		retValue = 100;
	}
	return count;
}