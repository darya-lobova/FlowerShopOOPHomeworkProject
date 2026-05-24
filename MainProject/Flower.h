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

	//default constructor / constructor without arguments
	Flower() {
		name = "";
		color = "";
		region = "";
		price = 0.0;
		freshness_days = 0;
		is_blooming = 0;
	}

	//canonical constructor / constructor with arguments
	Flower(string nm, string clr, string rgn, 
		double prc, int fresh_days, bool is_bloom) {
		name = nm;
		color = clr;
		region = rgn;
		price = prc;
		freshness_days = fresh_days;
		is_blooming = is_bloom;
	}

	//copy-constructor / constructor with arguments
	Flower(const Flower& flower) {
		name = flower.name;
		color = flower.color;
		region = flower.region;
		price = flower.price;
		freshness_days = flower.freshness_days;
		is_blooming = flower.is_blooming;
	}

	~Flower() {
		//some code here
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

		return s;
	}
};
