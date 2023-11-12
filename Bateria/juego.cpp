#include "juego.h"
#include "ui_juego.h"


Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    QLabel* titulo = new QLabel("Temporada 6 EP 2");
    titulo->setAlignment(Qt::AlignCenter);
    setCentralWidget(titulo);
}

Juego::~Juego(){
    delete ui;
}
