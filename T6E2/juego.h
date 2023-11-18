#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include <QtCore/QSize>
#include <QtGui/QImage>
#include <QtWidgets/QLabel>
#include <QtGui/QPaintEvent>
#include <QGraphicsScene>


#include "personaje.h"
#include "nivel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Juego; }
QT_END_NAMESPACE

class Juego : public QMainWindow
{
    Q_OBJECT

public:
    Juego(QWidget *parent = nullptr);
    ~Juego();
    void paintEvent(QPaintEvent *);
    QGraphicsScene *createInitialScene();
    QGraphicsScene *createlevel1Scene();
    QGraphicsScene *createlevel2Scene();

    void init();

private:
    Ui::Juego *ui;

    QLabel titulo;
    vector<Personaje*> personajes;
    vector<Personaje*> enemigos;

    QGraphicsScene *initialScene;
    QGraphicsScene *level1Scene;
    QGraphicsScene *level2Scene;


    void actualizar();
    void keyPressEvent(QKeyEvent* event);

};
#endif // JUEGO_H
