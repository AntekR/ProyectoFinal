#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include <QtCore/QSize>
#include <QtGui/QImage>
#include <QtWidgets/QLabel>
#include <QtGui/QPaintEvent>

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


private:
    Ui::Juego *ui;

    QLabel titulo;
    vector<Personaje*> personajes;
    vector<Personaje*> enemigos;

    void actualizar();
    void keyPressEvent(QKeyEvent* event);

};
#endif // JUEGO_H
