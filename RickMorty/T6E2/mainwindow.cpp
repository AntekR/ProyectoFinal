#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QRectF Desktop = QApplication::primaryScreen()->geometry();
    x = Desktop.x();
    y = Desktop.y();
    ancho = Desktop.width()-100;
    alto = Desktop.height()-100;

    scene = new QGraphicsScene(x,y,ancho,alto);

    ui->graphicsView->setScene(scene);

    rick = new Rick();
    scene->addItem(rick);
    rick->setPos(200,500);

}

MainWindow::~MainWindow()
{
    delete ui;
}

