#ifndef ELEVATORMANAGER_H
#define ELEVATORMANAGER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ElevatorManager; }
QT_END_NAMESPACE

class ElevatorManager : public QMainWindow
{
    Q_OBJECT

public:
    ElevatorManager(QWidget *parent = nullptr);
    ~ElevatorManager();

private:
    Ui::ElevatorManager *ui;
};
#endif // ELEVATORMANAGER_H
