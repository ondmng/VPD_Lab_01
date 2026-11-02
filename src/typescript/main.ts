interface Student {
    nameEn: string;
    nameRu: string;
    group: string;
    number: number;
    language: string;
}

const student: Student = {
    nameEn: "Anastas Galchev",
    nameRu: "Галчев Анастас Аристотелевич",
    group: "М3О-104БВ-26",
    number: 7,
    language: "TypeScript"
};

const studentId = `${student.group}/${String(student.number).padStart(2, "0")}`;
const controlValue: number = 304 * student.number;

console.log(`Hello, ${student.nameEn}!`);
console.log(`Привет, ${student.nameRu}!`);
console.log(`Student ID: ${studentId}`);
console.log(`Language:   ${student.language}`);
console.log(`Control:    ${controlValue}`);