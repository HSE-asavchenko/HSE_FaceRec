#include <QCoreApplication>
#include <QDir>
#include <QDebug>

void testRecognition();
void testClassification();
void testVerification();
void testANN();
void testYTFRecognition();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //TODO!!! Change to the correct directory
    //qDebug()<<QDir::current();
    //QDir::setCurrent(QStringLiteral("/Users/avsavchenko/Documents/my_soft/github/recognition_testing/precomputed_features"));
    QDir::setCurrent(QStringLiteral("../recognition_testing/precomputed_features"));
#if 0
    testRecognition();
#elif 0
    testYTFRecognition();
#elif 1
    testANN();
#elif 0
    testVerification();
#else
    testClassification();
#endif
    return 0;
    //return a.exec();
}