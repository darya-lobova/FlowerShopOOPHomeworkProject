#include <iostream>
#include <string>
using namespace std;

class Flower {
public:
	string name;
	string color;
	string region;
	double price;
	int freshness_days;
	bool is_blooming;
	int* store_ids;

	//default constructor / constructor without arguments
	Flower() {
		name = "";
		color = "";
		region = "";
		price = 0.0;
		freshness_days = 0;
		is_blooming = 0;
		store_ids = new int[3] {};
	}

	//canonical constructor / constructor with arguments
	Flower(string nm, string clr, string rgn, 
		double prc, int fresh_days, bool is_bloom, int* store_arr) {
		name = nm;
		color = clr;
		region = rgn;
		price = prc;
		freshness_days = fresh_days;
		is_blooming = is_bloom;
		store_ids = new int[3] {};

		if (store_arr != nullptr) {
			for (int i = 0; i < 3; i++)
			{
				store_ids[i] = store_arr[i];
			}
		}
	}

	//copy-constructor / constructor with arguments
	Flower(const Flower& flower) {
		name = flower.name;
		color = flower.color;
		region = flower.region;
		price = flower.price;
		freshness_days = flower.freshness_days;
		is_blooming = flower.is_blooming;
		store_ids = new int[3] {flower.store_ids[0],
			flower.store_ids[1], 
			flower.store_ids[2]};
	}

	~Flower() {
		if (store_ids != NULL) {
			delete[] store_ids;
		}
	}

	string toString() {
		string s = "Flower: ";
		s += "name = " + name;
		s += ", color = " + color;
		s += ", region = " + region;
		s += ", price = " + to_string(price);
		s += ", days in vase = " + to_string(freshness_days);
		s += ", is blooming? = ";
		s += (is_blooming ? "yes" : "no");
		s += ", store ids = {" + to_string(store_ids[0]) + ", " + to_string(store_ids[1])
			+ ", " + to_string(store_ids[2]) + "}";

		return s;
	}
};
