#include "roster.h"

#include <iostream>
#include <string>
#include <array>
#include <sstream>

// constructor: we assume we have no students
Roster::Roster() {
    lastIndex = -1;
    classRosterArray = new Student*[MAX_STUDENTS];
}

// destructor
Roster::~Roster() {
    for (int i = 0; i <= lastIndex; ++i) {
        delete classRosterArray[i];
    }
    delete[] classRosterArray;
}

// this function is how I load my initial data into the roster
// we could just create the student objects here but the class
// requirements are decently strict
void Roster::parseAndAddStudent(const std::string& studentData) {
    std::istringstream dataStream(studentData);
    std::string token;
    std::array<std::string, 9> studentInfo;
    int index = 0;

    while (std::getline(dataStream, token, ',')) {
        studentInfo[index++] = token;
    }

    std::string studentID    = studentInfo[0];
    std::string firstName    = studentInfo[1];
    std::string lastName     = studentInfo[2];
    std::string emailAddress = studentInfo[3];
    int studentAge           = std::stoi(studentInfo[4]);
    int daysInCourse1        = std::stoi(studentInfo[5]);
    int daysInCourse2        = std::stoi(studentInfo[6]);
    int daysInCourse3        = std::stoi(studentInfo[7]);

    DegreeProgram degreeProgram;
    if (studentInfo[8] == "SECURITY") {
        degreeProgram = DegreeProgram::SECURITY;
    } else if (studentInfo[8] == "NETWORK") {
        degreeProgram = DegreeProgram::NETWORK;
    } else {
        degreeProgram = DegreeProgram::SOFTWARE;
    }

    add(studentID,
        firstName,
        lastName,
        emailAddress,
        studentAge,
        daysInCourse1,
        daysInCourse2,
        daysInCourse3,
        degreeProgram);
}

// this function meets the requirements for adding a student, however
void Roster::add(const std::string& studentID,
                 const std::string& firstName,
                 const std::string& lastName,
                 const std::string& emailAddress,
                 int age,
                 int daysInCourse1,
                 int daysInCourse2,
                 int daysInCourse3,
                 DegreeProgram degreeProgram) {
    Student* student = new Student(studentID, 
                                  firstName, 
                                  lastName, 
                                  emailAddress, 
                                  age, 
                                  daysInCourse1, 
                                  daysInCourse2, 
                                  daysInCourse3, 
                                  degreeProgram);

    classRosterArray[++lastIndex] = student;
}

// roster printAll. Passes empty string to student::print().
void Roster::printAll() const {
    for (int i = 0; i <= lastIndex; ++i) {
        classRosterArray[i]->print("");
    }
}