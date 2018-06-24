#include "Header.h"
#include<iostream>
using namespace std;

void print(int mas[][sizeofpole]){
	for (int i = 0; i < sizeofpole; i++) {
		for (int j = 0; j < sizeofpole; j++) {
			cout << mas[i][j] << " ";
		}
		cout << "\n";
	}
}

void print_symbol(int symbol){
	//печать позиции символа в замисимости от значения
	if (symbol == 0) cout << "      ";
	else if (symbol > 0 && symbol < 10) cout << "  " << symbol << "   ";
	else if (symbol >= 10 && symbol < 100) cout << "  " << symbol << "  ";
	else if (symbol >= 100 && symbol < 1000) cout << " " << symbol << "  ";
	else cout << " " << symbol << " ";
}

void print_4(int mas[][sizeofpole]){
	system("cls");
	cout << (char)457 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)459 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)459 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)459 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)443 << "\n";
	cout << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "\n";
	cout << (char)442;
	print_symbol(mas[0][0]);
	cout << (char)442;
	print_symbol(mas[0][1]);
	cout << (char)442;
	print_symbol(mas[0][2]);
	cout << (char)442;
	print_symbol(mas[0][3]);
	cout << (char)442 << "\n";
	cout << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "\n";
	cout << (char)460 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)462 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)462 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)462 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)441 << "\n";
	cout << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "\n";
	cout << (char)442;
	print_symbol(mas[1][0]);
	cout << (char)442;
	print_symbol(mas[1][1]);
	cout << (char)442;
	print_symbol(mas[1][2]);
	cout << (char)442;
	print_symbol(mas[1][3]);
	cout << (char)442 << "\n";
	cout << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "\n";
	cout << (char)460 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)462 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)462 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)462 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)441 << "\n";
	cout << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "\n";
	cout << (char)442;
	print_symbol(mas[2][0]);
	cout << (char)442;
	print_symbol(mas[2][1]);
	cout << (char)442;
	print_symbol(mas[2][2]);
	cout << (char)442;
	print_symbol(mas[2][3]);
	cout << (char)442 << "\n";
	cout << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "\n";
	cout << (char)460 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)462 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)462 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)462 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)441 << "\n";
	cout << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "\n";
	cout << (char)442;
	print_symbol(mas[3][0]);
	cout << (char)442;
	print_symbol(mas[3][1]);
	cout << (char)442;
	print_symbol(mas[3][2]);
	cout << (char)442;
	print_symbol(mas[3][3]);
	cout << (char)442 << "\n";
	cout << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "      " << (char)442 << "\n";
	cout << (char)456 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)458 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)458 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)458 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461 << (char)461;
	cout << (char)444 << "\n\n";
}
void start(int mas[][sizeofpole]){
	for (int i = 0; i < sizeofpole; i++)
		for (int j = 0; j < sizeofpole; j++)
			mas[i][j] = 0;
	int i = 0;
	while (i < 2) {
		int poz = rand() % (sizeofpole*sizeofpole);
		if (mas[0][poz] == 0) {
			mas[0][poz] = 2;
			i++;
		}
	}
}
bool right(int mas[][sizeofpole], int &score, int &max_zn){
	bool sdvig = false;
	//поиск одинаковых значений
	for (int i = 0; i < sizeofpole; i++) {
		int j;
		for (j = sizeofpole - 1; j > 0; j--) {
			if (mas[i][j] == 0) continue;
			else {
				int k = j - 1;
				while (k >= 0) {
					if (mas[i][j] == mas[i][k]) {
						mas[i][j] += mas[i][k];
						score += mas[i][j];
						if (mas[i][j] > max_zn) max_zn = mas[i][j];
						mas[i][k] = 0;
						break;
					}
					else if (mas[i][k] == 0) k--;
					else break;
				}
			}
		}
		//сдвиг значений вправо
		for (j = sizeofpole - 1; j > 0; j--) {
			if (mas[i][j] != 0) continue;
			else {
				int k = j - 1;
				while (k >= 0) {
					if (mas[i][k] != 0) {
						mas[i][j] = mas[i][k];
						mas[i][k] = 0;
						sdvig = true;
						break;
					}
					k--;
				}
			}
		}
	}
	return sdvig;
}

bool left(int mas[][sizeofpole], int &score, int &max_zn){
	bool sdvig = false;
	//поиск одинаковых значений
	for (int i = 0; i < sizeofpole; i++) {
		int j;
		for (j = sizeofpole - 1; j > 0; j--) {
			if (mas[i][j] == 0) continue;
			else {
				int k = j - 1;
				while (k >= 0) {
					if (mas[i][j] == mas[i][k]) {
						mas[i][j] += mas[i][k];
						score += mas[i][j];
						if (mas[i][j] > max_zn) max_zn = mas[i][j];
						mas[i][k] = 0;
						break;
					}
					else if(mas[i][k]==0) k--;
					else break;
				}
			}
		}
		//сдвиг значений влево
		for (j = 0; j <sizeofpole-1; j++) {
			if (mas[i][j] != 0) continue;
			else {
				int k = j + 1;
				while (k <= sizeofpole-1) {
					if (mas[i][k] != 0) {
						mas[i][j] = mas[i][k];
						mas[i][k] = 0;
						sdvig = true;
						break;
					}
					k++;
				}
			}
		}
	}
	return sdvig;
}

bool up(int mas[][sizeofpole], int &score, int &max_zn){
	bool sdvig = false;
	//поиск одинаковых значений
	for (int i = 0; i < sizeofpole; i++) {
		int j;
		for (j = sizeofpole - 1; j > 0; j--) {
			if (mas[j][i] == 0) continue;
			else {
				int k = j - 1;
				while (k >= 0) {
					if (mas[j][i] == mas[k][i]) {
						mas[j][i] += mas[k][i];
						score += mas[j][i];
						if (mas[j][i] > max_zn) max_zn = mas[j][i];
						mas[k][i] = 0;
						break;
					}
					else if (mas[i][k]==0) k--;
					else break;
				}
			}
		}
		//сдвиг значений вверх
		for (j = 0; j <sizeofpole - 1; j++) {
			if (mas[j][i] != 0) continue;
			else {
				int k = j + 1;
				while (k <= sizeofpole - 1) {
					if (mas[k][i] != 0) {
						mas[j][i] = mas[k][i];
						mas[k][i] = 0;
						sdvig = true;
						break;
					}
					k++;
				}
			}
		}
	}
	return sdvig;
}

bool down(int mas[][sizeofpole], int &score, int &max_zn){
	bool sdvig = false;
	//поиск одинаковых значений
	for (int i = 0; i < sizeofpole; i++) {
		int j;
		for (j = sizeofpole - 1; j > 0; j--) {
			if (mas[j][i] == 0) continue;
			else {
				int k = j - 1;
				while (k >= 0) {
					if (mas[j][i] == mas[k][i]) {
						mas[j][i] += mas[k][i];
						score += mas[j][i];
						if (max_zn < mas[j][i]) max_zn = mas[j][i];
						mas[k][i] = 0;
						break;
					}
					else if(mas[i][k]==0) k--;
					else break;
				}
			}
		}
		//сдвиг значений вниз
		for (j = sizeofpole-1; j >0; j--) {
			if (mas[j][i] != 0) continue;
			else {
				int k = j - 1;
				while (k >= 0) {
					if (mas[k][i] != 0) {
						mas[j][i] = mas[k][i];
						mas[k][i] = 0;
						sdvig = true;
						break;
					}
					k--;
				}
			}
		}
	}
	return sdvig;
}

bool insert_symbol(int mas[][sizeofpole], bool step){
	bool tmp = true;
	if (step) {
		int chislo = rand() % 100;
		if (chislo < 90) chislo = 2;
		else chislo = 4;
		int i = 0;
		while (i < 1) {
			int poz = rand() % (sizeofpole*sizeofpole);
			if (mas[0][poz] == 0) {
				mas[0][poz] = chislo;
				//tmp = true;
				i++;
			}
		}
	}
	else {
		int i;
		for (i = 0; i < sizeofpole*sizeofpole; i++)
			if (mas[0][i] == 0) break;
		if (i == sizeofpole*sizeofpole) tmp = false;
	}
	return tmp;
}

void cheat_code(int mas[][sizeofpole], int &max_zn){
	int imax = 0;
	for (int i = 0; i < sizeofpole*sizeofpole; i++)
		if (mas[0][i] > mas[0][imax]) imax = i;
	mas[0][imax] *= 2;
	if (mas[0][imax] > max_zn) max_zn = mas[0][imax];
}
