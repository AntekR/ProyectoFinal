#include "juego.h"
#include "ui_juego.h"
#include <qgraphicsitem.h>
#include <QPainter>


Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);

    initialScene = createInitialScene();
}

Juego::~Juego()
{
    delete ui;
}

void Juego::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,1600,900,QPixmap(":/fotos/fondoInicio.jpg"));
}

QGraphicsScene *Juego::createInitialScene()
{
    //Se crea la pantalla inicial
    QGraphicsScene *scene = new QGraphicsScene();

    //Agrega elementos a la pantalla
    QGraphicsRectItem *rect1 =  new QGraphicsRectItem(0,0,100,100);

    rect1->setBrush(QBrush(Qt::red));
    scene->addItem(rect1);

    return scene;
}


QGraphicsScene *Juego::createlevel1Scene()
{
    QGraphicsScene *scene = new QGraphicsScene();

    // Agrega elementos a la escena del primer nivel
    QGraphicsRectItem *rect2 = new QGraphicsRectItem(0, 0, 200, 200);
    rect2->setBrush(QBrush(Qt::blue));
    scene->addItem(rect2);

    return scene;
}

QGraphicsScene *Juego::createlevel2Scene()
{
    QGraphicsScene *scene = new QGraphicsScene();

    // Agrega elementos a la escena del primer nivel
    QGraphicsRectItem *rect2 = new QGraphicsRectItem(0, 0, 200, 200);
    rect2->setBrush(QBrush(Qt::black));
    scene->addItem(rect2);

    return scene;
}

void Juego::init()
{
    initialScene = createInitialScene();
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



