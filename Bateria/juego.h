#ifndef JUEGO_H
#define JUEGO_H


#include "personaje.h"
#include <QMainWindow>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class Juego; }
QT_END_NAMESPACE

class Juego : public QMainWindow
{
    Q_OBJECT
public:
    Juego(QWidget *parent = nullptr);
    ~Juego();

private:
    Ui::Juego *ui;

    QLabel titulo;
    vector<Personaje*> personajes;
    vector<Personaje*> enemigos;

    void actualizar();
    void paintEvent(QPaintEvent* event);
    void keyPressEvent(QKeyEvent* event);

signals:

};

#endif // JUEGO_H
