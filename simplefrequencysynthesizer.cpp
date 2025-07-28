#include "simplefrequencysynthesizer.h"
#include "ui_simplefrequencysynthesizer.h"

SimpleFrequencySynthesizer::SimpleFrequencySynthesizer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SimpleFrequencySynthesizer)
{
    ui->setupUi(this);
    soundClick = new std::deque<uint16_t>(6);

    frequencySynthesizer = new FrequencySynthesizer(soundClick);
    savingToFile = new SavingToFile(soundClick);
}

SimpleFrequencySynthesizer::~SimpleFrequencySynthesizer()
{
    delete ui;
    delete soundClick;
    delete frequencySynthesizer;
    delete savingToFile;
}

void SimpleFrequencySynthesizer::on_pushButton_clicked() {

    SimpleFrequencySynthesizer::close();
}

void SimpleFrequencySynthesizer::on_pushButton_2_clicked() {

    std::vector<int> frequency;

    frequency.push_back(ui->spinBox->value());
    frequency.push_back(ui->spinBox_2->value());
    frequency.push_back(ui->spinBox_3->value());
    frequency.push_back(ui->spinBox_4->value());
    frequency.push_back(ui->spinBox_5->value());
    frequency.push_back(ui->spinBox_6->value());

    frequencySynthesizer->setDate(frequency, ui->spinBox_7->value(), ui->spinBox_8->value());

    if (ui->lineEdit->text().isEmpty()){

        savingToFile->fileSave("1.bin");
    }
    else{

        savingToFile->fileSave(ui->lineEdit->text().toStdString());
    }
}
