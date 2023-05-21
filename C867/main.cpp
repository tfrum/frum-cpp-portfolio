#include "degree.h"
#include "student.h"
#include "roster.h"

#include <string>
#include <iostream>
#include <array>
#include <sstream>

int main() {
    // our provided input data
    const std::string studentData[] = 
    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
     "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
     "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
     "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
     "A5,T,Frum,tfrum@wgu.edu,99,2,3,1,SOFTWARE"};

    // assuming we want to be able to read in other arrays we need to grab the length
    //this might not end up being used in my final code

    const int numStudents = std::size(studentData);

    // create our roster object
    Roster roster;

    // pipe data into the roster
    for (const std::string& data : studentData) {
        roster.parseAndAddStudent(data);
    }

    roster.printAll();
    std::cout << std::endl;



    return 0;
    }



