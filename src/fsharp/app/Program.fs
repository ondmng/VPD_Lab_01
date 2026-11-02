let studentNameEn = "Anastas Galchev"
let studentNameRu = "Галчев Анастас Аристотелевич"
let groupName = "М3О-104БВ-26"
let studentNumber = 7
let languageName = "F#"

let studentId =
    sprintf "%s/%02d" groupName studentNumber

let controlValue = 304 * studentNumber

let printLine text =
    printfn "%s" text

[
    sprintf "Hello, %s!" studentNameEn
    sprintf "Привет, %s!" studentNameRu
    sprintf "Student ID: %s" studentId
    sprintf "Language:   %s" languageName
    sprintf "Control:    %d" controlValue
]
|> List.iter printLine