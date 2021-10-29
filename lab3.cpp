#include <iostream>
#include <string>
using namespace std;

class Goods {
	string name;
	string date;
	int cost;
	int num;
	int id;
public:
	Goods(string _name, string _date, int _cost, int _num, int _id) {
		name = _name;
		date = _date;
		cost = _cost;
		num = _num;
		id = _id;
		cout << "Constructor" << endl;
	}
	Goods() {
		name = "Unknown";
		date = "0000-00-00";
		cost = 0;
		num = 0;
		id = 0;
		cout << "Default constructor" << endl;
	}
	Goods(Goods& _ob) {
		name = _ob.name;
		date = _ob.date;
		cost = _ob.cost;
		num = _ob.num;
		id = _ob.id;
		cout << "CopyCounstructor" << endl;
	}
	~Goods() {
		cout << "Destructor"<< endl;
	};

public:
	void Show() {
		cout<< endl << "HaumeHoBaHie ToBapa: " << name << endl;
		cout << "Data oformlenia ToBapa: " << date << endl;
		cout << "Cena ToBapa: " << cost << endl;
		cout << "Kol-vo ToBapa: " << num << endl;
		cout << "Homep Hakladnoi: " << id << endl<<endl;
	}

	Goods operator=(Goods& _ob);

};

Goods tovar(Goods& _s) {
	return _s;
}

Goods Goods::operator=(Goods& _ob) {
	name = _ob.name;
	date = _ob.date;
	cost = _ob.cost;
	num = _ob.num;
	id = _ob.id;
	cout << "Operator" << endl;
	return *this;
}


int main() {
	Goods comp1("Tesla", "04.12.2020", 200, 10, 300);
	Goods comp2(comp1);
	Goods comp3;
	tovar(comp2);
	comp1 = comp3;
	comp1.Show();
	comp2.Show();
	return 0;
}
