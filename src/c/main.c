#include <stdio.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    const char *student_name_en = "Anastas Galchev";
    const char *student_name_ru = "Галчев Анастас Аристотелевич";
    const char *group_name = "М3О-104БВ-26";
    const int student_number = 7;
    const char *language_name = "C";

    char student_id[64];
    snprintf(student_id, sizeof(student_id), "%s/%02d",
             group_name, student_number);

    int control_value = 304 * student_number;

    printf("Hello, %s!\n", student_name_en);
    printf("Привет, %s!\n", student_name_ru);
    printf("Student ID: %s\n", student_id);
    printf("Language:   %s\n", language_name);
    printf("Control:    %d\n", control_value);

    return 0;
}