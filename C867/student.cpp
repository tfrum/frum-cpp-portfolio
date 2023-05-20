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
                 std::array<int, 3> threeCourseCompletionDays,
                 DegreeProgram degreeProgram) 
          : studentID(studentID),
            firstName(firstName),
            lastName(lastName),
            emailAddress(emailAddress),
            studentAge(studentAge),
            threeCourseCompletionDays(threeCourseCompletionDays),
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

std::array<int, 3> Student::getThreeCourseCompletionDays() const {
    return threeCourseCompletionDays;
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

void Student::setThreeCourseCompletionDays(const std::array<int, 3>& days) {
    threeCourseCompletionDays = days;
}

void Student::setDegreeProgram(DegreeProgram degreeProgram) {
    this->degreeProgram = degreeProgram;
}

// print function
void Student::print() const {
    std::cout << "Student ID: " << studentID << std::endl;
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Email Address: " << emailAddress << std::endl;
    std::cout << "Age: " << studentAge << std::endl;
    std::cout << "Course Completion Days: "
              << threeCourseCompletionDays[0] << ", "
              << threeCourseCompletionDays[1] << ", "
              << threeCourseCompletionDays[2] << std::endl;
    std::cout << "Degree Program: " << degreeProgram << std::endl;
};
