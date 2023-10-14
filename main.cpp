#include "mainwindow.h"
#include <QApplication>

/*
 * Main que recebe 2 argumentos
 * Instancia de QApplication criada para gerenciamento e execuçao do app
 * mainwindow w é a janela principal sendo criada
 * e chama o show para ser exbida
 * por fim o a.exec inicia o loop para manter a execuçao do app ativa
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
