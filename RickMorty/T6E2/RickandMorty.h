#ifndef RICKANDMORTY_H
#define RICKANDMORTY_H

#include <QObject>

class GraphicsScenes;
class QGraphicsView;


class RickandMorty :  public QObject
{
    Q_OBJECT
public:
    RickandMorty(QGraphicsView *graphicsView, QObject *parent = nullptr);

    void startGame();
    void stopGame();
private:

    GraphicsScenes *mScene;
};

#endif // RICKANDMORTY_H
