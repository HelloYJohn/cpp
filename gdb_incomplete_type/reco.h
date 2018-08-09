#ifndef RECO_H
#define RECO_H

#include <iostream>
#include <string>

class reco {
    public:
        reco(float weight);
        virtual ~reco(void);

        virtual float getWeight();

    private:
        float weight;
};

#endif
