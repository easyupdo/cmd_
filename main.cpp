#include <QCoreApplication>
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout<<"This is cmd_"<<std::endl;

    return a.exec();
}
