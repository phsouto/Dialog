/* 
 * File:   classDialog.h
 * Author: Pedro
 *
 * Created on 5 de Novembro de 2010, 23:01
 *
 * Versao: 0.0001 alpha. :)
 *
 *  Esta classe e semalhante ao "programa" dialog muito usado em shell script
 * para criar interfaces pseudo-graficas.
 *  Existem bugs e gafes a serem corrigidos. Este e um trabalho de aprendizado
 * acima de tudo.
 */

#ifndef CLASSDIALOG_H
#define	CLASSDIALOG_H

#include <iostream>
#include <constream>
using namespace std;

class classDialog {
public:
    // Contrutores e Destrutor default do NetBeans
    classDialog();
    classDialog(const classDialog& orig);
    virtual ~classDialog();

    // Metodos e contrutores by my own
    void frame(int a, int b, int c, int d, int color);
    void frame(int largura, int altura, int color);
    void frame(int largura, int altura);
    void centralizeStringOnX(string s);
    void centralizeStringOnY(string s);
    void centralizeStringOnXY(string s);
    void centralizedFrameOnX(int largura, int altura, int color);
    void centralizedFrameOnX(int largura, int altura);
    void centralizedFrameOnY(int largura, int altura, int color);
    void centralizedFrameOnY(int largura, int altura);
    void centralizedFrameOnXY(int largura, int altura, int color);
    void centralizedFrameOnXY(int largura, int altura);
    void setDefaultFrameColor(int color);
    void setDefaultTextColor(int color);
    void setDefaultBgColor(int color);
    void setDefaultColors(int fcolor, int tcolor, int bcolor);

private:
    int FrameColor, TextColor, BgColor;
    static int DefaultFrameColor, DefaultTextColor, DefaultBgColor;
};

#endif	/* CLASSDIALOG_H */

