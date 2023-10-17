#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <iostream>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QGraphicsScene>
#include <QGraphicsView>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->frame_3->hide();
    ventana.setScene(&escena1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->generar_texto();
}


void MainWindow::generar_texto()
{
    ui->plainTextEdit->clear();

    if(lista.get_lista_beg() != NULL)
    {
        neurona *aux = lista.get_lista_beg();
        while(aux != NULL)
        {
            QString aux_qstr = QString("ID: %1\nVoltaje: %2\n Posicion x: %3\nPosicion y: %4\nRed: %5\nGreen: %6\nBlue: %7\n---------------").arg(aux->get_id()).arg(aux->get_voltaje()).arg(aux->get_posicion_x()).arg(aux->get_posicion_y()).arg(aux->get_red()).arg(aux->get_green()).arg(aux->get_blue());
            ui->plainTextEdit->appendPlainText(aux_qstr);
            aux = aux->get_sig_neurona();
        }
    }
}

void MainWindow::obtener_datos(int indicador)
{
    neurona *aux = new neurona();

    aux->set_all(ui->spinBox->value(),ui->doubleSpinBox->value(),ui->spinBox_2->value(),ui->spinBox_3->value(),ui->spinBox_4->value(),ui->spinBox_5->value(),ui->spinBox_6->value());

    if(indicador == 0)
        lista.agregar_inicio(aux);
    if(indicador == 1)
        lista.agregar_final(aux);

}


void MainWindow::on_pushButton_2_clicked()
{
    obtener_datos(0);
}


void MainWindow::on_pushButton_3_clicked()
{
    obtener_datos(1);
}


void MainWindow::on_actionGuardar_triggered()
{
    QString direccion = QFileDialog::getSaveFileName(this, tr("Guardar Neuronas"),"",tr("Text files (*.txt)"));

    if (!direccion.isEmpty())
    {
        QFile archivo_guardar(direccion);

        if (archivo_guardar.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream imprimir(&archivo_guardar);
            if(lista.get_lista_beg() != NULL)
            {
                neurona *aux = lista.get_lista_beg();
                while(aux != NULL)
                {
                    QString aux_qstr = QString("%1:%2:%3:%4:%5:%6:%7").arg(aux->get_id()).arg(aux->get_voltaje()).arg(aux->get_posicion_x()).arg(aux->get_posicion_y()).arg(aux->get_red()).arg(aux->get_green()).arg(aux->get_blue());
                    imprimir << aux_qstr << '\n';
                    aux = aux->get_sig_neurona();
                }
            }
            archivo_guardar.close();
        }
    }
}


void MainWindow::on_actionRecuperar_triggered()
{
    QString direccion = QFileDialog::getOpenFileName(this, tr("Abrir Neuronas"),"",tr("Text files (*.txt)"));

    if (!direccion.isEmpty())
    {
        QFile archivo_leer(direccion);

        if (archivo_leer.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream leer(&archivo_leer);

            while (!leer.atEnd())
            {
                QString linea = leer.readLine();
                QStringList lista_valores =  linea.split(":");
                int id = lista_valores[0].toInt();
                float voltaje = lista_valores[1].toFloat();
                int posicionX = lista_valores[2].toInt();
                int posicionY = lista_valores[3].toInt();
                int red = lista_valores[4].toInt();
                int green = lista_valores[5].toInt();
                int blue = lista_valores[6].toInt();

                neurona *aux = new neurona();
                aux->set_all(id,voltaje,posicionX,posicionY,red,green,blue);
                lista.agregar_final(aux);
            }

            archivo_leer.close();
        }

    }
}


void MainWindow::on_actionBuscar_triggered()
{
    ui->frame->hide();
    ui->frame_2->hide();
    ui->frame_3->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->label_11->setText("");
    neurona *aux = lista.get_lista_beg();
    if(aux != NULL)
    {
        bool exito;
        int id = ui->lineEdit->text().toInt(&exito);

        if(!exito)
        {
            qDebug() << "Ingrese un número entero";
        }

        exito = true;

        while(aux != NULL && exito)
        {
            cout << id <<endl;
            int id_aux = aux->get_id();
            cout << id_aux <<endl;
            if ( id_aux == id)
            {
                exito = false;
            }
            else
            {
                aux = aux->get_sig_neurona();
            }
        }

        if(!exito)
        {
            QString id_qs = QString("%1").arg(aux->get_id());
            QString voltaje_qs = QString("%1").arg(aux->get_voltaje());
            QString pos_x_qs = QString("%1").arg(aux->get_posicion_x());
            QString pos_y_qs = QString("%1").arg(aux->get_posicion_y());
            QString red_qs = QString("%1").arg(aux->get_red());
            QString green_qs = QString("%1").arg(aux->get_green());
            QString blue_qs = QString("%1").arg(aux->get_blue());

            QTableWidgetItem *id_f = new QTableWidgetItem(id_qs);
            QTableWidgetItem *voltaje_f = new QTableWidgetItem(voltaje_qs);
            QTableWidgetItem *pos_x_f = new QTableWidgetItem(pos_x_qs);
            QTableWidgetItem *pos_y_f = new QTableWidgetItem(pos_y_qs);
            QTableWidgetItem *red_f = new QTableWidgetItem(red_qs);
            QTableWidgetItem *green_f = new QTableWidgetItem(green_qs);
            QTableWidgetItem *blue_f = new QTableWidgetItem(blue_qs);

            ui->tableWidget->setItem(0,0,id_f);
            ui->tableWidget->setItem(1,0,voltaje_f);
            ui->tableWidget->setItem(2,0,pos_x_f);
            ui->tableWidget->setItem(3,0,pos_y_f);
            ui->tableWidget->setItem(4,0,red_f);
            ui->tableWidget->setItem(5,0,green_f);
            ui->tableWidget->setItem(6,0,blue_f);
        }
        else
        {
            ui->label_11->setText("ID no encontrada");
        }
    }
}


void MainWindow::on_actionCapturar_Mostrar_triggered()
{
    ui->frame->show();
    ui->frame_2->show();
    ui->frame_3->hide();
}


void MainWindow::on_actionEscenaNeuronas_triggered()
{

    QPen borde;

    if(lista.get_lista_beg() != NULL)
    {
        neurona *aux = lista.get_lista_beg();
        while(aux != NULL)
        {
            QBrush relleno(QColor(aux->get_red()+100, aux->get_green()+100, aux->get_blue()+100));

            elipse = escena1.addEllipse(aux->get_posicion_x(), aux->get_posicion_y(), aux->get_voltaje(), aux->get_voltaje(),borde,relleno);
            aux = aux->get_sig_neurona();
        }
    }

    ventana.show();
}
