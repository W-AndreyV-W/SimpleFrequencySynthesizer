#ifndef SIMPLEFREQUENCYSYNTHESIZER_H
#define SIMPLEFREQUENCYSYNTHESIZER_H

#include <QMainWindow>
#include <deque>
#include <vector>

#include "frequencysynthesizer.h"
#include "savingtofile.h"

namespace Ui {
class SimpleFrequencySynthesizer;
}

class SimpleFrequencySynthesizer : public QMainWindow
{
    Q_OBJECT

public:

    explicit SimpleFrequencySynthesizer(QWidget *parent = 0);
    ~SimpleFrequencySynthesizer();

private slots:

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:

    Ui::SimpleFrequencySynthesizer *ui;
    FrequencySynthesizer* frequencySynthesizer;
    SavingToFile* savingToFile;

    std::deque<uint16_t>* soundClick;
};

#endif // SIMPLEFREQUENCYSYNTHESIZER_H
