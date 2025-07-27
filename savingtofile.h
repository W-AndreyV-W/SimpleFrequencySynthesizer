#ifndef SAVINGTOFILE_H
#define SAVINGTOFILE_H

#include <QObject>
#include <iostream>
#include <fstream>
#include <string>
#include <deque>

class SavingToFile : public QObject {

    Q_OBJECT

public:

    SavingToFile(std::deque<int16_t>* soundOut);
    ~SavingToFile();

    void fileSave(std::string nameFile);

private:

    std::deque<int16_t>* _soundOut;
};

#endif // SAVINGTOFILE_H
