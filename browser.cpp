#include <QApplication>
#include <QMainWindow>
#include <QWebEngineView>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Create main window
    QMainWindow window;
    window.setWindowTitle("Open Web View");
    window.resize(1024, 768);

    // Create WebEngineView (Chromium-based)
    QWebEngineView *view = new QWebEngineView(&window);
    view->setUrl(QUrl("http://127.0.0.1:5000"));

    window.setCentralWidget(view);
    window.show();

    return app.exec();
}
