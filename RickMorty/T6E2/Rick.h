#ifndef RICK_H
#define RICK_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>

class Rick : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit Rick(QObject *parent = nullptr);

    QTimer *timer;
    QPixmap *pixmap;

    float posX_Actual, posY_Actual;
    float ancho_, alto_;

    //graficar el objeto - sprite
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


public slots:
    void Actualizacion();
};

#endif // RICK_H
