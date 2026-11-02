#!/usr/bin/env bash

student_name_en="Anastas Galchev"
student_name_ru="Галчев Анастас Аристотелевич"
group_name="М3О-104БВ-26"
student_number=7
language_name="Bash"

student_id=$(printf "%s/%02d" "$group_name" "$student_number")
control_value=$((304 * student_number))
name_words=$(printf "%s\n" "$student_name_en" | wc -w)

printf "Hello, %s!\n" "$student_name_en"
printf "Привет, %s!\n" "$student_name_ru"
printf "Student ID: %s\n" "$student_id"
printf "Language:   %s\n" "$language_name"
printf "Control:    %d\n" "$control_value"
printf "Name words: %s\n" "$name_words"