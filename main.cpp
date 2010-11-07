/* 
 * File:   main.cpp
 * Author: Pedro
 *
 * Created on 5 de Novembro de 2010, 22:59
 */

#include <iostream>

#include "classDialog.h"

using namespace std;

/*
 * Programa de teste para a classe Dialog e suas derivadas (se existirem).
 */

int main(int argc, char** argv) {
    classDialog Dialog;
    Dialog.setDefaultFrameColor(LIGHTGREEN);
    Dialog.setDefaultTextColor(LIGHTBLUE);
    Dialog.centralizedFrameOnXY(20,10);
    Dialog.centralizeStringOnXY("LOL");
    getch();
    return 0;
}

