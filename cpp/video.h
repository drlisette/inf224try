#ifndef VIDEO_H
#define VIDEO_H
#include "multimedia.h"
#include <string>

class Video:public Multimedia
{
protected:
    int duration=0;
public:
    Video(string name, string path, int timeLength);
    int getDuree() const;
    void setDuree(int);
    virtual void displayInfo(ostream& ) const override;
    virtual void play() const override;
    virtual ~Video() override;
};

#endif // VIDEO_H
