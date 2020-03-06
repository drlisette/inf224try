#ifndef PHOTO_H
#define PHOTO_H
#include "multimedia.h"
#include <string>

class Photo:public Multimedia
{
private:
    double latitude=0.0;
    double longitude=0.0;
public:
    Photo(string, string, double, double);
    double getLatitude() const;
    double getLongitude() const;
    void setLatitude(double);
    void setLongitude(double);
    virtual void displayInfo(ostream& ) const override;
    virtual void play() const override;
    virtual ~Photo() override;
};

#endif // PHOTO_H
