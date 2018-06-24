#pragma once
#define sizeofpole 4
#define superman 2048
void print(int mas[][sizeofpole]);
void print_symbol(int symbol);
void print_4(int mas[][sizeofpole]);
void start(int mas[][sizeofpole]);
bool right(int mas[][sizeofpole], int &score, int &max_zn);
bool left(int mas[][sizeofpole], int &score, int &max_zn);
bool up(int mas[][sizeofpole], int &score, int &max_zn);
bool down(int mas[][sizeofpole], int &score, int &max_zn);
bool insert_symbol(int mas[][sizeofpole], bool step = true);
void cheat_code(int mas[][sizeofpole], int &max_zn);
