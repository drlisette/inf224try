#include "film.h"
#include <string>

Film::Film(string name,string path, int timeLength,
           unsigned long chapCnt, const int* chaps):
    Video(name, path, timeLength)
{
    chapterCount = chapCnt;
    chapters = new int[chapCnt];
    for(unsigned long i = 0 ; i < chapCnt ; ++i)
        chapters[i] = chaps[i];
}

void Film::changeChapters(const int* chapsNew, unsigned long chapCntNew){
    chapterCount = chapCntNew;
    if(chapsNew){
        delete[] chapters;
        chapters = new int[chapCntNew];
        for(unsigned long i = 0 ; i < chapCntNew; ++i)
            chapters[i] = chapsNew[i];
    }
    else{
        if (chapters){
            delete[] chapters;
            chapters = nullptr;
        }
    }

}

Film::Film(const Film& fm):Video(fm){
    changeChapters(fm.chapters,fm.chapterCount);
}

Film& Film::operator=(const Film& fm){
    Video::operator=(fm);
    changeChapters(fm.chapters,fm.chapterCount);
}

const int* Film::getChapters() const{
    int* chaptersCopy = new int[chapterCount];
    for(unsigned long i = 0 ; i < chapterCount ; i++)
        chaptersCopy[i] = chapters[i];
    return chaptersCopy;
}

unsigned long Film::getChapterCnt() const{
    return chapterCount;
}

void Film::displayInfo(ostream& o) const{
    Video::displayInfo(o);
    o << "The film has " << getChapterCnt() << " chapiters." << endl;
    o << "Chapiter durations: ";
    const int* table=getChapters();
    for(unsigned long i = 0 ; i < chapterCount ; ++i)
        o << table[i] << ' ';
    o << endl;
};

Film::~Film(){
    delete[] chapters;
};

//Film::Film(string name, string path, int timeLength,
//           unsigned long durCnt, const int* dur):
//    Video(name, path, timeLength)
//{
//    durationCount=durCnt;
//    if(dur){
//        durations=new int[durationCount];
//        for(int i=0;i<durationCount;++i)
//            durations[i]=dur[i];
//    }
//};

//Film::Film(const Film& fm):Video(fm){

//}

//Film::Film(const Film& fm):Video(fm){
//    numChap = fm.numChap;
//    if ( fm.chapDuration ) {
//        chapDuration=new int[fm.numChap];
//        for(int i=0;i<fm.numChap;++i)
//            chapDuration[i]=fm.chapDuration[i];
//    }
//    else
//        chapDuration=nullptr;
//}

//Film& Film::operator=(const Film& fm){
//    Video::operator=(fm);
//    numChap=fm.numChap;
//    delete[] chapDuration;
//    chapDuration=nullptr;
//    if(fm.chapDuration){
//        chapDuration=new int[fm.numChap];
//        for(int i=0;i<fm.numChap;++i)
//            chapDuration[i]=fm.chapDuration[i];
//    }

//    if(fm.chapDuration){
//        // if not nullptr
//        if(chapDuration)
//            delete[] chapDuration;
//        chapDuration=new int[fm.numChap];
//        for(int i=0; i<fm.numChap; ++i)
//            chapDuration[i]=fm.chapDuration[i];
//    }
//    else{
//        if(chapDuration){
//            delete[] chapDuration;
//            chapDuration=nullptr;
//        }
//    }
//    return *this;
//}

//void Film::changeDurations(int* newDuration){
//    for(int i=0; i<numChap; ++i){
//        chapDuration[i]=newDuration[i];
//    }
//};

//const int* Film::getAllChapterDuration() const{
//    int* copyChapDuration=new int[numChap];
//    for(int i=0; i<numChap; ++i)
//        copyChapDuration[i]=chapDuration[i];
//    return copyChapDuration;
//};

//const int Film::countChapter() const{
//    return numChap;
//};

//void Film::displayInfo(ostream& o) const{
//    Video::displayInfo(o);
//    o<<"Le film a "<<countChapter()<<" chapitres."<<endl;
//    o<<"Durees des chapitres: ";
//    const int* table=getAllChapterDuration();
//    for(int i=0;i<numChap;++i)
//        o<<table[i]<<' ';
//    o<<endl;
//};

//Film::~Film(){delete[] chapDuration;};
