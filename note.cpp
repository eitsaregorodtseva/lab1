#include "note.h"

Note::Note(){
    dataInfo_ = DATA_DEFAULT;
    studentInfo_ = STUDENT_DEFAULT;
    waterNumber_ = WATER_DEFAULT;
};

Note::Note(const vector<unsigned int>& dataInfo, const vector<string>& studentInfo,
           const double waterNumber){
    setData(dataInfo);
    setStudent(studentInfo);
    setWaterNumber(waterNumber);
};

Note::Note(const Note& copy){
    setData(copy.getData());
    setStudent(copy.getStudent());
    setWaterNumber(copy.getWaterNumber());
};

vector<unsigned int> Note::getData() const{
    return dataInfo_;
};

vector<string> Note::getStudent() const{
    return studentInfo_;
};

double Note::getWaterNumber() const{
    return waterNumber_;
};

void Note::setData(const vector<unsigned int>& dataInfo){
    dataInfo_ = dataInfo;
};

void Note::setStudent(const vector<string>& studentInfo){
    studentInfo_ = studentInfo;
};

void Note::setWaterNumber(const double waterNumber){
    if (waterNumber < WATER_MIN) {
        waterNumber_ = WATER_MIN;
    }
    else {
        if (waterNumber > WATER_MAX) {
            waterNumber_ = WATER_MAX;
        }
        else {
            waterNumber_ = waterNumber;
        }
    }
};

