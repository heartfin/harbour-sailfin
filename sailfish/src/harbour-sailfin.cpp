/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020 Chris Josten

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifdef QT_QML_DEBUG
#include <QtQuick>
#endif

#include <QQmlDebuggingEnabler>
#include <QCommandLineOption>
#include <QCommandLineParser>
#include <QDebug>
#include <QJSEngine>
#include <QGuiApplication>
#include <QQuickView>
#include <QQmlEngine>
#include <QString>

#include <sailfishapp.h>

int main(int argc, char *argv[]) {
    //QQmlDebuggingEnabler enabler;
    //enabler.startTcpDebugServer(9999);
    // SailfishApp::main() will display "qml/harbour-sailfin.qml", if you need more
    // control over initialization, you can use:
    //
    //   - SailfishApp::application(int, char *[]) to get the QGuiApplication *
    //   - SailfishApp::createView() to get a new QQuickView * instance
    //   - SailfishApp::pathTo(QString) to get a QUrl to a resource file
    //   - SailfishApp::pathToMainQml() to get a QUrl to the main QML file
    //
    // To display the view, call "show()" (will show fullscreen on device).
    QGuiApplication *app = SailfishApp::application(argc, argv);
    app->setOrganizationName("nl.netsoj.chris");
    app->setOrganizationDomain("nl.netsoj.chris");
    app->setApplicationName("Sailfin");
    //: Application display name
    app->setApplicationDisplayName(QObject::tr("Sailfin"));

    QCommandLineParser cmdParser;
    cmdParser.addHelpOption();
    cmdParser.addVersionOption();

    QQuickView *view = SailfishApp::createView();
    view->setSource(SailfishApp::pathToMainQml());
    view->show();

    return app->exec();
}
