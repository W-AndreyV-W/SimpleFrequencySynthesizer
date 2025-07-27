#include "frequencysynthesizer.h"

FrequencySynthesizer::FrequencySynthesizer(std::deque<int16_t>* soundClick) : QObject{} {

    _soundClick = soundClick;
}

FrequencySynthesizer::~FrequencySynthesizer() {}

void FrequencySynthesizer::setDate(std::vector<int> frequencySound, int discretization, int timeSound) {

    numberFrequencies = 0;
    frequency.clear();
    for (int i = 0; i < frequencySound.size(); i++){

        if (frequencySound[i] >= 40 && frequencySound[i] <= 16000){

            numberFrequencies++;
            frequency.emplace_back(static_cast<float>(frequencySound[i]));
        }
    }
    discretTime = 1 / static_cast<float>(discretization);
    timePlay = static_cast<float>(timeSound);

    soundBig();
}

float FrequencySynthesizer::harmonicVibration(int num, float timeDiscret){

    return bitDepth * std::sin(2 * Pi * frequency[num] * timeDiscret);
}

void FrequencySynthesizer::totalHarmonic(float& harmonic, float timeDiscret){

    for (int i = 0; i < numberFrequencies; i++){

        harmonic += harmonicVibration(i, timeDiscret);
    }
    harmonic /= numberFrequencies;
}

void FrequencySynthesizer::harmonicFilter(float &harmonic) {

    harmonic += *_soundClick->end() * gainFactor;
    harmonic /= 2;
}

void FrequencySynthesizer::soundBig(){

    _soundClick->clear();
    for (float timeDiscret = 0; timeDiscret <= timePlay; timeDiscret += discretTime){

        float harmonic = 0;

        totalHarmonic(harmonic, timeDiscret);
        harmonicFilter(harmonic);
        _soundClick->emplace_back(static_cast<int16_t>(harmonic));
    }
}
