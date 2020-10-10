#include "note.h"
#include <iostream>
#include <assert.h>
#include <vector>
#include <string>

using namespace std;

void testDefaultConstructor(){
    Note note;
    assert(Note::DATA_DEFAULT == note.getData());
    assert(Note::STUDENT_DEFAULT == note.getStudent());
    assert(Note::WATER_DEFAULT == note.getWaterNumber());
};

void testInitConstructor(){
    vector<unsigned int> dataExample = {2, 3, 2000};
    vector<string> studentExample = {"FirstName", "LastName", "Patronymic", "3"};
    double water = 1.5;
    Note note(dataExample, studentExample, water);
    assert(dataExample == note.getData());
    assert(studentExample == note.getStudent());
    assert(water == note.getWaterNumber());
};

void testCopyConstructor(){
    vector<unsigned int> dataExample = {1, 3, 2000};
    vector<string> studentExample = {"FirstName", "LastName", "Patronymic", "1"};
    double water = 1.6;
    Note note1(dataExample, studentExample, water);
    Note note2(note1);
    assert(dataExample == note2.getData());
    assert(studentExample == note2.getStudent());
    assert(water == note2.getWaterNumber());
};

void testSetDataInfo(){
    Note note;
    vector<unsigned int> dataExample = {1, 1, 2020};
    note.setData(dataExample);
    assert(dataExample == note.getData());
};

void testSetStudentInfo(){
    Note note;
    vector<string> studentExample = {"FirstName", "LastName", "Patronymic", "1"};
    note.setStudent(studentExample);
    assert(studentExample == note.getStudent());
};

void testWaterNumber(){
    Note note;
    double water = 2;
    note.setWaterNumber(water);
    assert(water == note.getWaterNumber());
    note.setWaterNumber(Note::WATER_MIN - 1);
    assert(Note::WATER_MIN == note.getWaterNumber());
    note.setWaterNumber(Note::WATER_MAX + 1);
    assert(Note::WATER_MAX == note.getWaterNumber());
};
int main(){
    testDefaultConstructor();
    testInitConstructor();
    testCopyConstructor();
    testSetDataInfo();
    testSetStudentInfo();
    testWaterNumber();
    cout << "All tests are passed" << endl;
    return 0;
}
