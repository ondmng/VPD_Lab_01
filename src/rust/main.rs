fn main() {
    let student_name_en = "Anastas Galchev";
    let student_name_ru = "Галчев Анастас Аристотелевич";
    let group_name = "М3О-104БВ-26";
    let student_number = 7;
    let language_name = "Rust";

    let student_id = format!("{}/{:02}", group_name, student_number);
    let control_value = 304 * student_number;

    println!("Hello, {}!", student_name_en);
    println!("Привет, {}!", student_name_ru);
    println!("Student ID: {}", student_id);
    println!("Language:   {}", language_name);
    println!("Control:    {}", control_value);
}