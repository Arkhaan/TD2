#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  QPushButton *quitButton = new QPushButton("&Quit");
  QObject::connect(quitButton, SIGNAL(clicked()), qApp, SLOT(quit()));

  QVBoxLayout *layout = new QVBoxLayout;
  layout->addWidget(quitButton);

  QWidget window;
  window.setLayout(layout);
  window.setGeometry(100, 100, 500, 400);
  window.show();

  return a.exec();
}
