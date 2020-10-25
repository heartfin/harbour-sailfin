#include <QGuiApplication>
#include <JellyfinQt/jellyfin.h>

int main(int argc, char** argv) {
    QGuiApplication app(argc, argv);
	Jellyfin::registerTypes();

    return app.exec();
}
