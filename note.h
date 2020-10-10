#ifndef NOTE_H
#define NOTE_H
#include <vector>
#include <string>

using namespace std;

class Note{
public:
    static constexpr double WATER_MIN = 1;
    static constexpr double WATER_MAX = 2;
    static const unsigned int WATER_DEFAULT = 1;
    static const inline vector<unsigned int> DATA_DEFAULT = {1, 1, 2000};
    static const inline vector<string> STUDENT_DEFAULT = {"FirstName", "LastName",
                                                          "Patronymic", "1"};
    Note();
    Note(const vector<unsigned int>& dataInfo, const vector<string>& studentInfo,
         const double waterNumber);
    Note(const Note& copy);
    vector<unsigned int> getData() const;
    vector<string> getStudent() const;
    double getWaterNumber() const;
    void setData(const vector<unsigned int>& dataInfo);
    void setStudent(const vector<string>& studentInfo);
    void setWaterNumber(const double waterNumber);
    ~Note() = default;
private:
    vector<unsigned int> dataInfo_;
    vector<string> studentInfo_;
    double waterNumber_;
};

#endif // NOTE_H
