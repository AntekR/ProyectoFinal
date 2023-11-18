#include "Rick.h"
#include "qpainter.h"

Rick::Rick(QObject *parent) : QObject(parent)
{
    timer = new QTimer();

    posX_Actual = 0;
    posY_Actual = 0;

    pixmap = new QPixmap(":/Imagenes/Morty.png");

    ancho_ = 130;
    alto_ = 167;

    timer->start(250);

    connect(timer,&QTimer::timeout,this,&Rick::Actualizacion);
}

QRectF Rick::boundingRect() const
{
    return QRectF(-ancho_/2, -alto_/2, ancho_, alto_);
}

void Rick::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho_/2,-alto_/2,*pixmap,posY_Actual,0,ancho_,alto_);
}

void Rick::Actualizacion()
{
    posY_Actual +=130;
    if(posY_Actual>=520){
        posY_Actual = 0;
    }


    this->update(-ancho_/2,-alto_/2,ancho_,alto_);
}
