#include "Flower.h"

void print(Flower flower) {
	cout << flower.toString() << endl;
}

int main() {

	Flower tulip("Tulip", "pink", "Netherlands", 2.5, 3, true);
	Flower rose("Rose", "red", "Equador", 2.0, 1, false);
	Flower orchid("Orchid", "white", "Thailand", 5.0, 5, true);

	print(tulip);
	print(rose);
	print(orchid);


	return 0;
}