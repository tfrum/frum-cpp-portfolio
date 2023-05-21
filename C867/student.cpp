#include "student.h"
#include "degree.h"

#include <string>
#include <array>
#include <iostream>

// constructor
Student::Student(std::string studentID,
                 std::string firstName, 
                 std::string lastName,
                 std::string emailAddress,
                 int studentAge,
                 int daysInCourse1,
                 int daysInCourse2,
                 int daysInCourse3,                 
                 DegreeProgram degreeProgram)
          : studentID(studentID),
            firstName(firstName),
            lastName(lastName),
            emailAddress(emailAddress),
            studentAge(studentAge),
            daysInCourse1(daysInCourse1),
            daysInCourse2(daysInCourse2),
            daysInCourse3(daysInCourse3),
            degreeProgram(degreeProgram) {};
    

// getter functions
std::string Student::getStudentID() const {
    return studentID;
}
std::string Student::getFirstName() const {
    return firstName;
}
std::string Student::getLastName() const {
    return lastName;
}
std::string Student::getEmailAddress() const {
    return emailAddress;
}
int Student::getStudentAge() const {
    return studentAge;
}
int Student::getDaysInCourse1() const {
    return daysInCourse1;
}
int Student::getDaysInCourse2() const {
    return daysInCourse2;
}
int Student::getDaysInCourse3() const {
    return daysInCourse3;
}
DegreeProgram Student::getDegreeProgram() const {
    return degreeProgram;
}


// setter functions
void Student::setStudentID(const std::string& studentID) {
    this->studentID = studentID;
}
void Student::setFirstName(const std::string& firstName) {
    this->firstName = firstName;
}
void Student::setLastName(const std::string& lastName) {
    this->lastName = lastName;
}
void Student::setEmailAddress(const std::string& emailAddress) {
    this->emailAddress = emailAddress;
}
void Student::setStudentAge(int studentAge) {
    this->studentAge = studentAge;
}
void Student::setDaysInCourse1(int daysInCourse1) {
    this->daysInCourse1 = daysInCourse1;
}
void Student::setDaysInCourse2(int daysInCourse2) {
    this->daysInCourse2 = daysInCourse2;
}
void Student::setDaysInCourse3(int daysInCourse3) {
    this->daysInCourse3 = daysInCourse3;
}
void Student::setDegreeProgram(DegreeProgram degreeProgram) {
    this->degreeProgram = degreeProgram;
}

// print function
void Student::print(const std::string& variableName) const {
    if (variableName.empty()) {
        // Print all variables
        std::cout << "Student ID: " << studentID << std::endl;
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "Email Address: " << emailAddress << std::endl;
        std::cout << "Age: " << studentAge << std::endl;
        std::cout << "Course Completion Days: "
                  << daysInCourse1 << ", "
                  << daysInCourse2 << ", "
                  << daysInCourse3 << std::endl;
        switch (degreeProgram) {
            case SECURITY:
                std::cout << "Degree Program: SECURITY" << std::endl;
                break;
            case NETWORK:
                std::cout << "Degree Program: NETWORK" << std::endl;
                break;
            case SOFTWARE:
                std::cout << "Degree Program: SOFTWARE" << std::endl;
                break;}
        std::cout << std::endl;
    } else {
        // take a string of a variable name and output just that info
        // I structured this like this so that you could potentially
        // take user input, though we aren't doing that
        if (variableName == "studentID") {
            std::cout << "Student ID: " << studentID << std::endl;
        } else if (variableName == "firstName") {
            std::cout << "First Name: " << firstName << std::endl;
        } else if (variableName == "lastName") {
            std::cout << "Last Name: " << lastName << std::endl;
        } else if (variableName == "emailAddress") {
            std::cout << "Email Address: " << emailAddress << std::endl;
        } else if (variableName == "studentAge") {
            std::cout << "Age: " << studentAge << std::endl;
        } else if (variableName == "courseCompletionDays") {
            std::cout << "Course Completion Days: "
                      << daysInCourse1 << ", "
                      << daysInCourse2 << ", "
                      << daysInCourse3 << std::endl;

        } else if (variableName == "degreeProgram") {
            // this would be preferrable to extract out as a function but we won't.
            switch (degreeProgram) {
                case SECURITY:
                    std::cout << "Degree Program: SECURITY" << std::endl;
                    break;
                case NETWORK:
                    std::cout << "Degree Program: NETWORK" << std::endl;
                    break;
                case SOFTWARE:
                    std::cout << "Degree Program: SOFTWARE" << std::endl;
                    break;}
        } else {
            std::cout << "Invalid variable name." << std::endl;
        }
    }
};