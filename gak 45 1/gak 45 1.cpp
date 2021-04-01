#include <iostream>
#include<vector>
#include<string>
#include<fstream>
#include"Saxelm.h"
using namespace std;
void sortInform(vector<Saxelm> a) {
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a.size() - 1; j++) {
			if (a[j].cost < a[j + 1].cost) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}
int main()
{
	ifstream fin("Book.txt");
	vector<Saxelm> a;
	Saxelm t;
	while (fin >> t.autor >> t.grade >> t.cost >> t.name) {
		a.push_back(t);
	}
	sortInform(a);
	for (int i = 0; i < a.size(); i++) {
		a[i].result();
	}
}

