#include <QApplication>
#include <QLabel>
#include <QWidget>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  QWidget window;
  window.setWindowTitle("Qt 5.14 Minimal Widget");
  window.resize(360, 160);

  QLabel label("Hello Qt 5.14 Widget", &window);
  label.move(90, 70);

  window.show();
  return app.exec();
}
