#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "admin.h"
#include "neurona.h"
#include <QGraphicsScene>
#include <QGraphicsView>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void generar_texto();
    void obtener_datos(int indicador);
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_actionGuardar_triggered();

    void on_actionRecuperar_triggered();

    void on_actionBuscar_triggered();

    void on_pushButton_4_clicked();

    void on_actionCapturar_Mostrar_triggered();

    void on_actionEscenaNeuronas_triggered();

private:
    Ui::MainWindow *ui;
    admin lista = admin();

    QGraphicsScene escena1;
    QGraphicsEllipseItem *elipse;
    QGraphicsView ventana;
};
#endif // MAINWINDOW_H
