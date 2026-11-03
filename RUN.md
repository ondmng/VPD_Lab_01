# Сборка и запуск программ

Все команды выполняются в PowerShell из корневого каталога проекта C:\VPD_Lab_01.

## 1. C


gcc -fexec-charset=UTF-8 .\src\c\main.c -o .\src\c\main.exe
.\src\c\main.exe


## 2. C++


g++ -fexec-charset=UTF-8 .\src\cpp\main.cpp -o .\src\cpp\main.exe
.\src\cpp\main.exe


## 3. Python


python .\src\python\main.py


## 4. JavaScript


node .\src\javascript\main.js


## 5. TypeScript


tsc.cmd .\src\typescript\main.ts --target ES2020 --outDir .\src\typescript\dist
node .\src\typescript\dist\main.js


## 6. Java


javac -encoding UTF-8 .\src\java\Main.java
java -cp .\src\java Main
Get-Item .\src\java\Main.class
javap -c -cp .\src\java Main


## 7. C#


dotnet run --project .\src\csharp\app


## 8. F#


dotnet run --project .\src\fsharp\app


## 9. Go


go run .\src\go\main.go


## 10. Rust


rustc .\src\rust\main.rs -o .\src\rust\main.exe
.\src\rust\main.exe


## 11. Bash


& "C:\Program Files\Git\bin\bash.exe" .\src\bash\main.sh


## 12. Prolog


& "C:\Program Files\swipl\bin\swipl.exe" -s .\src\prolog\main.pl


## 13. Assembler (x86-64)


as .\src\asm\main.s -o .\src\asm\main.o
gcc .\src\asm\main.o -o .\src\asm\main.exe
.\src\asm\main.exe
