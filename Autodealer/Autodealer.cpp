#include <iostream>
#include <map>
#include <windows.h>;
#include <conio.h>;
#include <stdio.h>
#include <fstream>

using namespace std;

struct Avto {
	string model;
	int year;
	double engine_volume;
	int price;

};

int main()
{
	Avto avto;
	multimap<string, Avto> avtodealer;
	string brand;
	string find_car;
	string del_car;
	bool exit = false;
	do {
		cout << "    __________________________" << endl;
		cout << "   | 1 - Add car              |" << endl;
		cout << "   | 2 - Delete car           |" << endl;
		cout << "   | 3 - Show cars            |" << endl;
		cout << "   | 4 - Find car             |" << endl;
		cout << "    **************************" << endl;
		if (!_kbhit()) {
			switch (_getch())
			{
			case'1':
				system("cls");
				cout << "Enter brand: ";
				cin >> brand;
				cout << endl;
				cout << "Enter model: ";
				cin >> avto.model;
				cout << endl;
				cout << "Enter year: ";
				cin >> avto.year;
				cout << endl;
				cout << "Enter engine_volume: ";
				cin >> avto.engine_volume;
				cout << endl;
				cout << "Enter price: ";
				cin >> avto.price;
				cout << endl;
				avtodealer.insert(pair<string, Avto>(brand, avto));
				system("cls");
				break;
			case'2':
				system("cls");
				cout << "Enter name: ";
				cin >> del_car;
				for (auto iter = avtodealer.begin(); iter != avtodealer.end(); iter++) {
					avtodealer.erase(del_car);
				}
				cout << "Deleted!";
				system("pause");
				system("cls");
				break;
			case'3':
				system("cls");
				for (auto iter = avtodealer.begin(); iter != avtodealer.end(); iter++) {
					cout <<"Brand: "<< iter->first << endl;
					cout <<"Model: "<< iter->second.model << endl;
					cout <<"Year: "<< iter->second.year << endl;
					cout <<"Engine volume: "<<iter->second.engine_volume << endl;
					cout <<"Price: "<< iter->second.price << endl;
					cout << endl;
				}
				system("pause");
				system("cls");
				break;
			case'4':
				system("cls");
				cin >> find_car;
				for (auto iter = avtodealer.find(find_car); iter != avtodealer.end(); iter++) {
					cout << "Brand: " << iter->first << endl;
					cout << "Model: " << iter->second.model << endl;
					cout << "Year: " << iter->second.year << endl;
					cout << "Engine volume: " << iter->second.engine_volume << endl;
					cout << "Price: " << iter->second.price << endl;
					cout << endl;
					break;
				}
				system("pause");
				system("cls");
				break;
			case'0':
				system("cls");
				exit = true;
				break;
			default:
				break;
			}
		}
	} while (!exit);
}
