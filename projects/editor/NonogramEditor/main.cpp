#include <QtQml/QQmlApplicationEngine>
#include <QtWidgets/QApplication>
#include <QtQml/qqml.h>

#include <NonogramModel.h>
#include <NonogramEditor.h>
#include <RecentNonogramsModel.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<NonogramEditor>("QtQuick.Nonogram.NonogramEditor", 1, 0, "NonogramEditor");
    qmlRegisterType<NonogramModel>("QtQuick.Nonogram.NonogramModel", 1, 0, "NonogramModel");
    qmlRegisterType<RecentNonogramsModel>("QtQuick.Nonogram.RecentNonogramsModel", 1, 0, "RecentNonogramsModel");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:///qml/main.qml")));

    return app.exec();
}
