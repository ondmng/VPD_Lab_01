using System;

class Program
{
    static void Main()
    {
        string studentNameEn = "Anastas Galchev";
        string studentNameRu = "Галчев Анастас Аристотелевич";
        string groupName = "М3О-104БВ-26";
        int studentNumber = 7;
        string languageName = "C#";

        string studentId = $"{groupName}/{studentNumber:D2}";
        int controlValue = 304 * studentNumber;

        Console.OutputEncoding = System.Text.Encoding.UTF8;

        Console.WriteLine($"Hello, {studentNameEn}!");
        Console.WriteLine($"Привет, {studentNameRu}!");
        Console.WriteLine($"Student ID: {studentId}");
        Console.WriteLine($"Language:   {languageName}");
        Console.WriteLine($"Control:    {controlValue}");
    }
}