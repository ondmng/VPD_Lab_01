student_name_en = "Anastas Galchev"
student_name_ru = "Галчев Анастас Аристотелевич"
group_name = "М3О-104БВ-26"
student_number = 7
language_name = "Python"

student_id = f"{group_name}/{student_number:02d}"
control_value = 304 * student_number

word_count = len(student_name_en.split())

print(f"Hello, {student_name_en}!")
print(f"Привет, {student_name_ru}!")
print(f"Student ID: {student_id}")
print(f"Language:   {language_name}")
print(f"Control:    {control_value}")
print(f"Name words: {word_count}")