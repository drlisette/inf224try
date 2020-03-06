#include "photo.h"
#include <string>
#include <iostream>

Photo::Photo(string name, string path, double width, double length):Multimedia (name, path){
    latitude=width;
    longitude=length;
}

double Photo::getLatitude()const {return latitude;}

double Photo::getLongitude()const {return longitude;}

void Photo::setLatitude(double newWidth){
    latitude=newWidth;
}

void Photo::setLongitude(double newLength){
    longitude=newLength;
}

void Photo::displayInfo(ostream& o)const{
    o<<"Media type: photo"<<endl;
    Multimedia::displayInfo(o);
    o<<"Media's size(latitude, longtitude): "<<getLatitude()<<", "<<getLongitude()<<endl;
}

void Photo::play() const{
  //  string command="cd $HOME/ImageJ; ./ImageJ "+ nomDir+ " &";
    string command= "imagej "+ nomDir+" &";
    system(command.c_str());
}

Photo::~Photo(){
     std::cout<<"Photo "<<nom<<" is about to be deleted."<<std::endl;
}

