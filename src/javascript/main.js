const studentNameEn = "Anastas Galchev";
const studentNameRu = "Галчев Анастас Аристотелевич";
const groupName = "М3О-104БВ-26";
const studentNumber = 7;
const languageName = "JavaScript";

const studentId = `${groupName}/${String(studentNumber).padStart(2, "0")}`;
const controlValue = 304 * studentNumber;

console.log(`Hello, ${studentNameEn}!`);
console.log(`Привет, ${studentNameRu}!`);
console.log(`Student ID: ${studentId}`);
console.log(`Language:   ${languageName}`);
console.log(`Control:    ${controlValue}`);
console.log(`Name length: ${studentNameEn.length}`);