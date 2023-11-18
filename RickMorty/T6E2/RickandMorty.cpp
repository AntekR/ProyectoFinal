#include "RickandMorty.h"
#include "GraphicsScenes.h"
#include <QGraphicsView>


RickandMorty::RickandMorty(QGraphicsView *graphicsView, QObject *parent)
{
    mScene = new GraphicsScenes(this);
    graphicsView->setScene(mScene);
}

void RickandMorty::startGame()
{
   //
}
