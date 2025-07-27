#include "savingtofile.h"

SavingToFile::SavingToFile(std::deque<int16_t>* soundOut) : QObject() {

    _soundOut = soundOut;
}

SavingToFile::~SavingToFile() {}

void SavingToFile::fileSave(std::string nameFile) {

    std::ofstream soundFile(nameFile, std::ios::binary);
    if (soundFile.is_open()){

        for(int i = 0; i < _soundOut->size(); i++){

            soundFile.write((char*)&_soundOut[i], 16);
        }
        soundFile.close();
    }
}
