//cpp
#include "decision.h"

std::string get_letter_grade_using_if (int grade)
{
    std::string letter_grade;

    if (grade >= 90 && grade <= 100)
        letter_grade = "A";
    else if (grade >= 80 && grade <= 89)
        letter_grade = "B";
    else if (grade >= 70 && grade <= 79)
        letter_grade = "C";
    else if (grade >= 60 && grade <= 69)
        letter_grade = "D";
    else if (grade >= 0 && grade <= 60)
        letter_grade = "F";
    else
        letter_grade = "Out of range";
    return letter_grade;
}


std::string get_letter_grade_using_switch (int grade)
{
    std::string letter_grade;

    grade = grade / 10;

    switch (grade)
    {
        case 10: letter_grade = "A";
        break;
        case 9: letter_grade = "A";
        break;
        case 8: letter_grade = "B";
        break;
        case 7: letter_grade = "C";
        break;
        case 6: letter_grade = "D";
        break;
        case 5: letter_grade = "F";
        break;
        case 4: letter_grade = "F";
        break;
        case 3: letter_grade = "F";
        break;
        case 2: letter_grade = "F";
        break;
        case 1: letter_grade = "F";
        break;
        case 0: letter_grade = "F";
        break;
        default: letter_grade = "Out of range";
    }

    return letter_grade;
}