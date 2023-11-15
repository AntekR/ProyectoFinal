#include "juego.h"
#include "ui_juego.h"
#include <QPainter>


Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    QLabel* titulo = new QLabel("Temporada 6 EP 2");
    titulo->setAlignment(Qt::AlignCenter);
    setCentralWidget(titulo);

    // Establecer el nivel inicial
    int nivelActual = 0;


    // Establecer la política de tamaño para que se ajuste al contenido
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);




}

Juego::~Juego()
{
    delete ui;
}

void Juego::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,800,550,QPixmap(":/fotos/fondoInicio.jpg"));
}

void Juego::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Right) {
        personajes[0]->moverse(0.1, 0.0);
    }

    // Mover el personaje hacia la izquierda
    else if (event->key() == Qt::Key_Left) {
        personajes[0]->moverse(-0.1, 0.0);
    }

    else if (event->key() == Qt::Key_Up) {
        personajes[0]->moverse(0.0, -0.1);
    }

    // Mover el personaje hacia abajo
    else if (event->key() == Qt::Key_Down) {
        personajes[0]->moverse(0.0, 0.1);
    }
}



