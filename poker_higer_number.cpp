#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int save=-1,save1=-2;

void getpoker() {
	int color = rand() % 4 + 1;
	
	int number = rand() % 13 + 1;
	save = color * 100 + number;
	if (save != save1) {
		switch (color) {
		case 1: cout << "����";
			break;
		case 2: cout << "�٧�";
			break;
		case 3: cout << "�R��";
			break;
		case 4: cout << "�®�";
			break;


		}



		switch (number) {
		case 1:
			cout << "A" << endl;
			break;
		case 11:
			cout << "J" << endl;
			break;
		case 12:
			cout << "Q" << endl;
			break;
		case 13:
			cout << "K" << endl;
			break;
		default:
			cout << number << endl;
			break;

		}
	}
	
}

int main() {
	string compare;
	string end="continue";
	srand(time(0));
	
	while ( 1) {
		cout << "�A���P�O" << endl;
		
			getpoker();
		
			save1 = save;
		
		cout << "��j�Τ�p(��J�j�Τp)" << endl;
		cin >> compare;
		
		cout << "��⪺�P�O" << endl;

		getpoker();
		while (save1 == save) {
			getpoker();
		}
		if (compare == "�j") {
			if (save1 % 100 > save % 100) {
				cout << "�AĹ�F" << endl;
			}
			else if (save1 % 100 == save % 100) {
				if (save1 / 100 > save / 100) {
					cout << "�AĹ�F" << endl;
				}
				else
					cout << "�A��F" << endl;
			}
			else
				cout << "�A��F" << endl;

		}

		else if (compare == "�p") {
			if (save1 % 100 < save % 100) {
				cout << "�AĹ�F" << endl;
			}
			else if (save1 % 100 == save % 100) {
				if (save1 / 100 < save / 100) {
					cout << "�AĹ�F" << endl;
				}
				else
					cout << "�A��F" << endl;
			}
			else
				cout << "�A��F"<<endl;
		}
		cout << endl;
		
	}
}