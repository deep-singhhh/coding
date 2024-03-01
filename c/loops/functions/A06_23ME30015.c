#include <stdio.h>
#include <string.h>

// Constants
#define MAX_STUDENTS 20
#define MAX_SUBJECTS 5

// Data structures
typedef struct {
    int rollNumber;
    char grades[MAX_SUBJECTS];
} Student;

// Global arrays
Student STUDENT[MAX_STUDENTS];
int CREDIT[MAX_SUBJECTS] = {3, 4, 3, 4, 2};
char GRADE1[MAX_STUDENTS][MAX_SUBJECTS];
char GRADE2[MAX_STUDENTS][MAX_SUBJECTS];
char GRADE3[MAX_STUDENTS][MAX_SUBJECTS];
char GRADE4[MAX_STUDENTS][MAX_SUBJECTS];
char GRADE5[MAX_STUDENTS][MAX_SUBJECTS];

// Function to check if a student exists
int studentExists(int rollNumber) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (STUDENT[i].rollNumber == rollNumber) {
            return 1; // Student exists
        }
    }
    return 0; // Student does not exist
}

// Function to add a new student
void addStudent(int rollNumber) {
    if (studentExists(rollNumber)) {
        printf("Student with Roll Number %d already exists.\n", rollNumber);
        return;
    }

    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (STUDENT[i].rollNumber == 0) {
            STUDENT[i].rollNumber = rollNumber;
            memset(STUDENT[i].grades, 'Z', sizeof(STUDENT[i].grades)); // Initialize grades to 'Z'
            printf("Student with Roll Number %d added successfully.\n", rollNumber);
            return;
        }
    }

    printf("Maximum number of students reached. Cannot add more students.\n");
}

// Function to delete a student
void deleteStudent(int rollNumber) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (STUDENT[i].rollNumber == rollNumber) {
            STUDENT[i].rollNumber = 0; // Mark the student as deleted
            memset(STUDENT[i].grades, 'Z', sizeof(STUDENT[i].grades)); // Clear grades
            printf("Student with Roll Number %d deleted successfully.\n", rollNumber);
            return;
        }
    }

    printf("Student with Roll Number %d not found.\n", rollNumber);
}

// Function to add grade for a subject
void addGrade(int rollNumber, int subject, char grade) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (STUDENT[i].rollNumber == rollNumber) {
            if (subject >= 1 && subject <= MAX_SUBJECTS) {
                STUDENT[i].grades[subject - 1] = grade;
                printf("Grade %c added for Roll Number %d in Subject %d.\n", grade, rollNumber, subject);
            } else {
                printf("Invalid subject number.\n");
            }
            return;
        }
    }

    printf("Student with Roll Number %d not found.\n", rollNumber);
}

// Function to delete grade for a subject
void deleteGrade(int rollNumber, int subject) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (STUDENT[i].rollNumber == rollNumber) {
            if (subject >= 1 && subject <= MAX_SUBJECTS) {
                STUDENT[i].grades[subject - 1] = 'Z'; // Mark as 'Z' to indicate no grade
                printf("Grade deleted for Roll Number %d in Subject %d.\n", rollNumber, subject);
            } else {
                printf("Invalid subject number.\n");
            }
            return;
        }
    }

    printf("Student with Roll Number %d not found.\n", rollNumber);
}

// Function to calculate CGPA for a student
float calculateCGPA(int rollNumber) {
    float totalCredits = 0.0;
    float weightedSum = 0.0;

    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (STUDENT[i].rollNumber == rollNumber) {
            for (int j = 0; j < MAX_SUBJECTS; j++) {
                if (STUDENT[i].grades[j] != 'Z') {
                    totalCredits += CREDIT[j];
                    weightedSum += (CREDIT[j] * (STUDENT[i].grades[j] - 'A' + 1));
                }
            }
            if (totalCredits == 0) {
                return 0.0; // Avoid division by zero
            }
            return weightedSum / totalCredits;
        }
    }

    printf("Student with Roll Number %d not found.\n", rollNumber);
    return -1.0; // Error code
}

// Function to print all existing students with their grades
void printStudents() {
    printf("Roll Number\tSubject 1\tSubject 2\tSubject 3\tSubject 4\tSubject 5\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (STUDENT[i].rollNumber != 0) {
            printf("%d\t\t", STUDENT[i].rollNumber);
            for (int j = 0; j < MAX_SUBJECTS; j++) {
                printf("%c\t\t", STUDENT[i].grades[j]);
            }
            printf("\n");
        }
    }
}

// Function to calculate and print the overall merit list
void printMeritList() {
    // Sort students based on CGPA (descending order)
    for (int i = 0; i < MAX_STUDENTS - 1; i++) {
        for (int j = 0; j < MAX_STUDENTS - i - 1; j++) {
            if (calculateCGPA(STUDENT[j].rollNumber) < calculateCGPA(STUDENT[j + 1].rollNumber)) {
                // Swap students
                Student temp = STUDENT[j];
                STUDENT[j] = STUDENT[j + 1];
                STUDENT[j + 1] = temp;
            }
        }
    }

    printf("Overall Merit List (CGPA):\n");
    printf("Roll Number\tCGPA\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (STUDENT[i].rollNumber != 0) {
            printf("%d\t\t%.2f\n", STUDENT[i].rollNumber, calculateCGPA(STUDENT[i].rollNumber));
        }
    }
}

// Function to print the failure list for a subject
void printFailureList(int subject) {
    if (subject >= 1 && subject <= MAX_SUBJECTS) {
        printf("Failure List for Subject %d (Grade F):\n", subject);
        printf("Roll Number\n");
        for (int i = 0; i < MAX_STUDENTS; i++) {
            if (STUDENT[i].rollNumber != 0 && STUDENT[i].grades[subject - 1] == 'F') {
                printf("%d\n", STUDENT[i].rollNumber);
            }
        }
    } else {
        printf("Invalid subject number.\n");
    }
}

int main() {
    int choice;
    int rollNumber, subject;
    char grade;

    // Input credits for subjects
    for (int i = 0; i < MAX_SUBJECTS; i++) {
        do {
            printf("Enter credits for Subject %d (1-4): ", i + 1);
            scanf("%d", &CREDIT[i]);
        } while (CREDIT[i] < 1 || CREDIT[i] > 4);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Add Student\n");
        printf("2. Delete Student\n");
        printf("3. Add Grade for Student\n");
        printf("4. Delete Grade for Student\n");
        printf("5. Calculate CGPA for Student\n");
        printf("6. Display Overall Merit List\n");
        printf("7. Display Subject-wise Failure List\n");
        printf("8. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Roll Number of the new student: ");
                scanf("%d", &rollNumber);
                addStudent(rollNumber);
                break;
            case 2:
                printf("Enter Roll Number of the student to delete: ");
                scanf("%d", &rollNumber);
                deleteStudent(rollNumber);
                break;
            case 3:
                printf("Enter Roll Number of the student: ");
                scanf("%d", &rollNumber);
                printf("Enter Subject Number (1-5): ");
                scanf("%d", &subject);
                printf("Enter Grade (E, A, B, C, D, P, F, Z): ");
                scanf(" %c", &grade); // Use space before %c to consume newline character
                addGrade(rollNumber, subject, grade);
                break;
            case 4:
                printf("Enter Roll Number of the student: ");
                scanf("%d", &rollNumber);
                printf("Enter Subject Number (1-5): ");
                scanf("%d", &subject);
                deleteGrade(rollNumber, subject);
                break;
            case 5:
                printf("Enter Roll Number of the student: ");
                scanf("%d", &rollNumber);
                float cgpa = calculateCGPA(rollNumber);
                if (cgpa >= 0) {
                    printf("CGPA for Roll Number %d: %.2f\n", rollNumber, cgpa);
                }
                break;
            case 6:
                printMeritList();
                break;
            case 7:
                printf("Enter Subject Number (1-5): ");
                scanf("%d", &subject);
                printFailureList(subject);
                break;
            case 8:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}

