#include "degree.h"
#include "student.h"

#include <string>
#include <iostream>
#include <array>
#include <sstream>

int main() {
    //Our provided input data
    const std::string studentData[] = 
    {"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
     "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
     "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
     "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
     "A5,T,Frum,tfrum@wgu.edu,99,2,3,1,SOFTWARE"};

    //Assuming we want to be able to read in other arrays we need to grab the length.

    const int numStudents = std::size(studentData);


    std::cout << "Students: " << numStudents << std::endl;

    for (const std::string& data : studentData) {
        std::string token;
        std::istringstream dataStream(data);
        std::array<std::string, 9> studentInfo;
        int index = 0;

        while (std::getline(dataStream, token, ',')) {
            studentInfo[index++] = token;
        }

        std::string studentID = studentInfo[0];
        std::string firstName = studentInfo[1];
        std::string lastName = studentInfo[2];
        std::string emailAddress = studentInfo[3];
        int studentAge = std::stoi(studentInfo[4]);
        std::array<int, 3> courseCompletionDays = {
            std::stoi(studentInfo[5]),
            std::stoi(studentInfo[6]),
            std::stoi(studentInfo[7])
        };

        DegreeProgram degreeProgram;
        if (studentInfo[8] == "SECURITY") {
            degreeProgram = DegreeProgram::SECURITY;
        } else if (studentInfo[8] == "NETWORK") {
            degreeProgram = DegreeProgram::NETWORK;
        } else {
            degreeProgram = DegreeProgram::SOFTWARE;
        }

        Student student(studentID, firstName, lastName, emailAddress, studentAge, courseCompletionDays, degreeProgram);
        
        // test print REMOVE ME
        student.print();
        std::cout << std::endl;

    }

    return 0;
}




