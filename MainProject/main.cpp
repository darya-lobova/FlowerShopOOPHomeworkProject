#include "Flower.h"

void print(Flower flower) {
	cout << flower.toString() << endl;
}

int main() {

	int* array = new int[3] {23, 45, 67};

	Flower tulip("Tulip", "pink", "Netherlands", 2.5, 3, true, array);
	Flower rose("Rose", "red", "Equador", 2.0, 1, false, array);
	Flower orchid("Orchid", "white", "Thailand", 5.0, 5, true, array);

	print(tulip);
	print(rose);
	print(orchid);

	delete[]array;

	return 0;
}