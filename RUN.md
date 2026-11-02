\# Сборка и запуск программ



Все команды выполняются из корневого каталога проекта `C:\\VPD\_Lab\_01`.



\## 1. C



```powershell

gcc -finput-charset=UTF-8 -fexec-charset=UTF-8 -Wall -Wextra -pedantic .\\src\\c\\main.c -o .\\src\\c\\main.exe

.\\src\\c\\main.exe

```



\## 2. C++



```powershell

g++ -finput-charset=UTF-8 -fexec-charset=UTF-8 -Wall -Wextra -pedantic .\\src\\cpp\\main.cpp -o .\\src\\cpp\\main.exe

.\\src\\cpp\\main.exe

```



\## 3. Python



```powershell

python .\\src\\python\\main.py

```



\## 4. JavaScript



```powershell

node .\\src\\javascript\\main.js

```



\## 5. TypeScript



```powershell

tsc.cmd .\\src\\typescript\\main.ts --target ES2020 --outDir .\\src\\typescript\\dist

node .\\src\\typescript\\dist\\main.js

```



\## 6. Java



```powershell

javac -encoding UTF-8 -d .\\src\\java .\\src\\java\\Main.java

java -cp .\\src\\java Main

```



Просмотр байт-кода:



```powershell

javap -c -cp .\\src\\java Main

```



\## 7. C#



```powershell

dotnet build .\\src\\csharp\\app

dotnet run --project .\\src\\csharp\\app

```



\## 8. F#



```powershell

dotnet build .\\src\\fsharp\\app

dotnet run --project .\\src\\fsharp\\app

```



\## 9. Go



```powershell

go run .\\src\\go\\main.go

```



\## 10. Rust



```powershell

rustc .\\src\\rust\\main.rs -o .\\src\\rust\\main.exe

.\\src\\rust\\main.exe

```



\## 11. Bash



```powershell

\& "C:\\Program Files\\Git\\bin\\bash.exe" .\\src\\bash\\main.sh

```



\## 12. Prolog



```powershell

\& "C:\\Program Files\\swipl\\bin\\swipl.exe" -q -s .\\src\\prolog\\main.pl

```



\## 13. Assembler (x86-64)



```powershell

as .\\src\\asm\\main.s -o .\\src\\asm\\main.o

gcc .\\src\\asm\\main.o -o .\\src\\asm\\main.exe

.\\src\\asm\\main.exe

```



\## Примечание



Для C и C++ используются параметры UTF-8, чтобы кириллица корректно отображалась в консоли Windows. Bash запускается через Git for Windows, а Prolog — через установленный SWI-Prolog.

