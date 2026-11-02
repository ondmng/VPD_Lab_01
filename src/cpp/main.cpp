#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    const std::string student_name_en = "Anastas Galchev";
    const std::string student_name_ru = "Галчев Анастас Аристотелевич";
    const std::string group_name = "М3О-104БВ-26";
    const int student_number = 7;
    const std::string language_name = "C++";

    const std::string student_id =
        group_name + "/" + (student_number < 10 ? "0" : "")
        + std::to_string(student_number);

    const int control_value = 304 * student_number;

    std::cout << "Hello, " << student_name_en << "!" << std::endl;
    std::cout << "Привет, " << student_name_ru << "!" << std::endl;

    std::cout << std::left
              << std::setw(15) << "Student ID:"
              << student_id << std::endl;

    std::cout << std::left
              << std::setw(15) << "Language:"
              << language_name << std::endl;

    std::cout << std::left
              << std::setw(15) << "Control:"
              << control_value << std::endl;

    return 0;
}