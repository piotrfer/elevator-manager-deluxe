#include "elevatormanager.h"
#include "ui_elevatormanager.h"

ElevatorManager::ElevatorManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ElevatorManager)
{
    ui->setupUi(this);
}

ElevatorManager::~ElevatorManager()
{
    delete ui;
}

