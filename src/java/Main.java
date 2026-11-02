public class Main {
    public static void main(String[] args) {
        String studentNameEn = "Anastas Galchev";
        String studentNameRu = "Галчев Анастас Аристотелевич";
        String groupName = "М3О-104БВ-26";
        int studentNumber = 7;
        String languageName = "Java";

        String studentId = String.format("%s/%02d",
                groupName, studentNumber);
        int controlValue = 304 * studentNumber;

        System.out.printf("Hello, %s!%n", studentNameEn);
        System.out.printf("Привет, %s!%n", studentNameRu);
        System.out.printf("Student ID: %s%n", studentId);
        System.out.printf("Language:   %s%n", languageName);
        System.out.printf("Control:    %d%n", controlValue);
    }
}