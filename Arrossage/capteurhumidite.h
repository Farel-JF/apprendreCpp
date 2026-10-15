#ifndef CAPTEURHUMIDITE_H
#define CAPTEURHUMIDITE_H
#define gpio_num_t int

class CapteurHumidite
{
private:
    gpio_num_t brocheCapteur;
public:
    CapteurHumidite(int _brocheCapteur);

    int MesureHumiditeDuSol();

};

#endif // CAPTEURHUMIDITE_H
