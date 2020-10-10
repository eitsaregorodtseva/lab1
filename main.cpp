#include "note.h"
#include <iostream>
#include <assert.h>
#include <vector>
#include <string>

using namespace std;

void setParameters(Note& note, const vector<unsigned int>& dataInfo,
                   const vector<string>& studentInfo,
                   const double waterNumber){
    note.setData(dataInfo);
    note.setStudent(studentInfo);
    note.setWaterNumber(waterNumber);
};

void check(const vector<unsigned int>& dataInfo,
           const vector<string>& studentInfo,
           const double waterNumber){
    Note note;
    setParameters(note, dataInfo, studentInfo, waterNumber);
    assert(note.getData() == dataInfo);
    assert(note.getStudent() == studentInfo);
    assert(note.getWaterNumber() == waterNumber);
};

int main(){
    check({1, 2, 2000},{"Ivan", "Ivanov", "Ivanovich", "2"}, 2);
    check({12, 4, 1999},{"Petr", "Ivanov", "Alexeevich", "4"}, 1);
    check({28, 5, 2014},{"Alex", "Ivanov", "Ivanovich", "1"}, 1.5);
    check({20, 8, 2020},{"Andrew", "Ivanov", "Petrovich", "3"}, 1.5);
    check({13, 10, 2008},{"Ivan", "Ivanov", "", "2"}, 1.3);
    cout << "All tests are passed" << endl;
    return 0;
}
