#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include "qcustomplot.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  // Creation du graphe (q2 de l'exercice)
  QCustomPlot* customPlot = new QCustomPlot;
  QVector<double> x(101), y(101);
  for (int i=0; i<101; ++i)
  {
    x[i] = i/50.0 - 1;
    y[i] = x[i]*x[i];
  }
  customPlot->addGraph();
  customPlot->graph(0)->setData(x, y);
  customPlot->xAxis->setLabel("x");
  customPlot->yAxis->setLabel("y");
  customPlot->rescaleAxes();

  QPushButton *quitButton = new QPushButton("&Quit");
  QObject::connect(quitButton, SIGNAL(clicked()), qApp, SLOT(quit()));

  QVBoxLayout *layout = new QVBoxLayout;
  layout->addWidget(customPlot);
  layout->addWidget(quitButton);


  QWidget window;
  window.setLayout(layout);
  window.setGeometry(100, 100, 500, 400);
  window.show();

  return a.exec();
}
