/* 
 * File:   classDialog.cpp
 * Author: Pedro
 * 
 * Created on 5 de Novembro de 2010, 23:01
 */

#include "classDialog.h"

classDialog::classDialog() {

}

classDialog::classDialog(const classDialog& orig) {
}

classDialog::~classDialog() {
}

// By my Own

int classDialog::DefaultFrameColor = YELLOW;
int classDialog::DefaultTextColor = WHITE;
int classDialog::DefaultBgColor = BLACK;

void classDialog::frame(int a, int b, int c, int d, int color) {
    int x;
    textcolor(color);
    gotoxy(a, b);
    printf("%c", 218);
    gotoxy(c, d);
    printf("%c", 217);
    gotoxy(c, b);
    printf("%c", 191);
    gotoxy(a, d);
    printf("%c", 192);
    for (x = b + 1; x < d; x++) {
        gotoxy(a, x);
        printf("%c", 179);
        gotoxy(c, x);
        printf("%c", 179);
    }
    for (x = a + 1; x < c; x++) {
        gotoxy(x, b);
        printf("%c", 196);
        gotoxy(x, d);
        printf("%c", 196);
    }
}

void classDialog::frame(int largura, int altura, int color) {
    frame(1, 1, largura, altura, color);
}

void classDialog::frame(int largura, int altura) {
    frame(largura, altura, DefaultFrameColor);
}

void classDialog::centralizeStringOnX(string s) {
    gotoxy((40 - s.size() / 2), 3);
    textcolor(DefaultTextColor);
    cout << s << endl;
}

void classDialog::centralizeStringOnY(string s) {
    gotoxy(1, 25 / 2);
    textcolor(DefaultTextColor);
    cout << s << endl;
}

void classDialog::centralizeStringOnXY(string s) {
    gotoxy((40 - s.size() / 2), 25 / 2);
    textcolor(DefaultTextColor);
    cout << s << endl;
}

void classDialog::centralizedFrameOnX(int largura, int altura, int color) {
    int a = 80 / 2 - largura / 2;
    int c = 80 / 2 + largura / 2;
    frame(a, 1, c, altura, color);
}

void classDialog::centralizedFrameOnX(int largura, int altura) {
    centralizedFrameOnX(largura, altura, DefaultFrameColor);
}

void classDialog::centralizedFrameOnY(int largura, int altura, int color) {
    int b = 25 / 2 + 1 - altura / 2;
    int d = 25 / 2 + altura / 2;
    frame(1, b, largura, d, color);
}

void classDialog::centralizedFrameOnY(int largura, int altura) {
    centralizedFrameOnY(largura, altura, DefaultFrameColor);
}

void classDialog::centralizedFrameOnXY(int largura, int altura, int color) {
    int a = 80 / 2 - largura / 2;
    int b = 25 / 2 + 1 - altura / 2;
    int c = 80 / 2 + largura / 2;
    int d = 25 / 2 + altura / 2;

    frame(a, b, c, d, color);
}

void classDialog::centralizedFrameOnXY(int largura, int altura) {
    centralizedFrameOnXY(largura, altura, DefaultFrameColor);
}

void classDialog::setDefaultFrameColor(int color) {
    DefaultFrameColor = color;
}

void classDialog::setDefaultTextColor(int color) {
    DefaultTextColor = color;
}

void classDialog::setDefaultBgColor(int color) {
    DefaultBgColor = color;
}

void classDialog::setDefaultColors(int fcolor, int tcolor, int bcolor) {
    setDefaultFrameColor(fcolor);
    setDefaultTextColor(tcolor);
    setDefaultBgColor(bcolor);
}