#include "config.h"

using namespace std;

class Building {
	friend void laoWang(Building& building);
public:
	Building() {
		m_SittingRoom = "¿ÍÌü";
		m_BedRoom = "ÎÔÊÒ";
	}
	string m_SittingRoom;
private:
	string m_BedRoom;
};




class WCX {
	friend class YJ;
private:
	string ID = "2300";
public:
	string name = "wcx";
};
class YJ {
public:
	void visit() {
		WCX b;
		cout << b.name << endl;
		cout << b.ID;
	}
};





class wcx;
class yj {
public:
	void complete_visit();
	void part_visit();
};
class wcx {
	friend void yj::complete_visit();
public:
	string name = "wcx";
private:
	string ID = "2300";
};
void yj::complete_visit() {
	wcx w;
	cout << "Name: " << w.name << endl;
	cout << "ID: " << w.ID << endl;
}
void yj::part_visit() {
	wcx b;
	cout << "Name: " << b.name << endl;
}
