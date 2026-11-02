package main

import "fmt"

func main() {
    studentNameEn := "Anastas Galchev"
    studentNameRu := "Галчев Анастас Аристотелевич"
    groupName := "М3О-104БВ-26"
    studentNumber := 7
    languageName := "Go"

    studentID := fmt.Sprintf("%s/%02d", groupName, studentNumber)
    controlValue := 304 * studentNumber

    fmt.Printf("Hello, %s!\n", studentNameEn)
    fmt.Printf("Привет, %s!\n", studentNameRu)
    fmt.Printf("Student ID: %s\n", studentID)
    fmt.Printf("Language:   %s\n", languageName)
    fmt.Printf("Control:    %d\n", controlValue)
}