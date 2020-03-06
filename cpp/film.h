#ifndef FILM_H
#define FILM_H
#include "video.h"
#include <string>


class Film:public Video
{
private:
    int* chapters = nullptr;

    unsigned long chapterCount = 0;


public:
    Film(string name, string path, int timeLength,
         unsigned long chapCnt, const int* chaps);

    Film(const Film&);

    Film& operator=(const Film& );

    void changeChapters(const int* chapsNew, unsigned long chapCntNew);
    // modifieur //appele autres methodes

    const int* getChapters() const;
    //retourner le tableau de durees

    unsigned long getChapterCnt() const;
    // retourner le nombre de chapitres

    virtual void displayInfo(ostream&) const override;

    virtual ~Film() override;
};

#endif // FILM_H
