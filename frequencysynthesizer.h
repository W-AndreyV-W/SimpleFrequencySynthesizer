#ifndef FREQUENCYSYNTHESIZER_H
#define FREQUENCYSYNTHESIZER_H

#include <QObject>
#include <vector>
#include <deque>
#include <cmath>

#define Pi 3.01415926

class FrequencySynthesizer : public QObject {

    Q_OBJECT

public:

    FrequencySynthesizer(std::deque<uint16_t>* soundClick);
    ~FrequencySynthesizer();

    void setDate(std::vector<int> frequencySound, int discretization, int timeSound);

private:

    float timePlay = 0;
    float discretTime = 0;
    float bitDepth = 32767;
    float numberFrequencies = 0;
    float cyclicFrequency = 0;
    float discretLine = 2;
    float gainFactor = 0.9;
    std::vector<float> frequency;
    std::deque<uint16_t>* _soundClick;
    std::deque<float> audioDelay;

    float harmonicVibration(int num, float timeDiscret);
    void totalHarmonic(float& harmonic, float timeDiscret);
    void harmonicFilter(float& harmonic, float timeDiscret);
    void soundBig();
};

#endif // FREQUENCYSYNTHESIZER_H
