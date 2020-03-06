#ifndef GROUP_H
#define GROUP_H
#include <string>
#include <list>
#include <memory>
#include "multimedia.h"

// typedef Multimedia* T; //Q8
typedef std::shared_ptr<Multimedia> T; // Q9

template <typename T>
class Group:public list<T>
{
private:
    string groupName;

public:
    Group(){}

    Group(string name){
        groupName=name;
    }

    const string getGroupName() const {return groupName;} //accesseur

    void printEachAttr(ostream &o) const {
        for (auto &it: *this){
            if(it)
                it->displayInfo(o);
            else
                std::cout<<"object no longer exists in "<<getGroupName()<<endl;
        }
    }
    

    ~Group(){}
};


#endif
