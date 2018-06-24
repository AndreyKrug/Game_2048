#include<iostream>
#include<conio.h>
#include<time.h>
#include"Header.h"
using namespace std;
void main()
{
	srand(time(NULL));
	system("color 2");
	int pole[sizeofpole][sizeofpole];
	start(pole);
	print_4(pole);
	char ch;
	int score = 0;
	int max_zn = 0;
	bool step = true;
	do {
		
		ch = _getch();
		switch (ch) {
		case 'K':
			step = left(pole, score, max_zn);
			if (step) {
				step = insert_symbol(pole);
			}
			else step = insert_symbol(pole, step);
			print_4(pole);
			cout << "Score: " << score << "\n";
			if (max_zn == superman) step = false;
			break;
		case 'H':
			step = up(pole, score, max_zn);
			if (step) {
				step = insert_symbol(pole);
			}
			else step = insert_symbol(pole, step);
			print_4(pole);
			cout << "Score: " << score << "\n";
			if (max_zn == superman) step = false;
			break;
		case 'M':
			step = right(pole, score, max_zn);
			if (step) {
				step = insert_symbol(pole);
			}
			else step = insert_symbol(pole, step);
			print_4(pole);
			cout << "Score: " << score << "\n";
			if (max_zn == superman) step = false;
			break;
		case 'P':
			step = down(pole, score, max_zn);
			if (step) {
				step = insert_symbol(pole);
			}
			else step = insert_symbol(pole, step);
			print_4(pole);
			cout << "Score: " << score << "\n";
			if (max_zn == superman) step = false;
			break;
		case 'Z':
			cheat_code(pole, max_zn);
			print_4(pole);
			if (max_zn == superman) step = false;
			break;
		}
	} while (step);
	if (max_zn == superman) cout << "Congratulations! You win!!!\n";
	else cout << "You looooose!!!\n";
	system("pause");
}
