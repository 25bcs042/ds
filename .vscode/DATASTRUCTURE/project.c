#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DAYS 100
#define PASSWORD "admin123"

struct Attendance {
    char date[15];
    int present;
};
struct Student {
    char name[50];
    int entry_no;
    struct Attendance record[MAX_DAYS];
    int total_classes;
    int total_present;
    struct Student *next;
};

struct Student *head = NULL;

int checkPassword() {
    char pass[20];
    printf("Enter teacher password: ");
    scanf("%s", pass);

    if (strcmp(pass, PASSWORD) == 0)
        return 1;
    else {
        printf("Wrong password!\n");
        return 0;
    }
}
void addStudent() {
    struct Student *newNode = (struct Student*)malloc(sizeof(struct Student));

    printf("Enter name: ");
    scanf("%s", newNode->name);

    printf("Enter entry number: ");
    scanf("%d", &newNode->entry_no);

    newNode->total_classes = 0;
    newNode->total_present = 0;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Student *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }

    printf("Student added successfully!\n");
}

void markAttendance() {
    char date[15];
    printf("Enter date: ");
    scanf("%s", date);

    struct Student *temp = head;

    while (temp != NULL) {
        int status;

        printf("%s (%d) -> 1(Present)/0(Absent): ",
               temp->name, temp->entry_no);
        scanf("%d", &status);

        int d = temp->total_classes;

        strcpy(temp->record[d].date, date);
        temp->record[d].present = status;

        temp->total_classes++;

        if (status == 1)
            temp->total_present++;

        temp = temp->next;
    }

    printf("Attendance marked!\n");
}

void checkPercentage() {
    int entry;
    printf("Enter entry number: ");
    scanf("%d", &entry);

    struct Student *temp = head;

    while (temp != NULL) {
        if (temp->entry_no == entry) {
            float percent = 0;

            if (temp->total_classes != 0)
                percent = (temp->total_present * 100.0) / temp->total_classes;

            printf("Name: %s\n", temp->name);
            printf("Attendance: %.2f%%\n", percent);

            if (percent < 75)
                printf(" Below 75%%!\n");

            return;
        }
        temp = temp->next;
    }

    printf("Student not found!\n");
}

void showDateWise() {
    int entry;
    printf("Enter entry number: ");
    scanf("%d", &entry);

    struct Student *temp = head;

    while (temp != NULL) {
        if (temp->entry_no == entry) {
            printf("\nAttendance of %s:\n", temp->name);

            for (int i = 0; i < temp->total_classes; i++) {
                printf("%s -> %s\n",
                       temp->record[i].date,
                       temp->record[i].present ? "Present" : "Absent");
            }
            return;
        }
        temp = temp->next;
    }

    printf("Student not found!\n");
}

void showShortageList() {
    struct Student *temp = head;

    printf("\n--- Below 75%% ---\n");

    while (temp != NULL) {
        if (temp->total_classes > 0) {
            float percent = (temp->total_present * 100.0) / temp->total_classes;

            if (percent < 75) {
                printf("%s (%d) -> %.2f%%\n",
                       temp->name, temp->entry_no, percent);
            }
        }
        temp = temp->next;
    }
}

void menu() {
    int choice;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Add Student\n");
        printf("2. Mark Attendance\n");
        printf("3. Check Percentage\n");
        printf("4. Show Date-wise\n");
        printf("5. Shortage List\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (checkPassword()) {
                    char more;
                    do {
                        addStudent();

                        printf("Add another student? (y/n): ");

                        while (getchar() != '\n'); // clear buffer
                        scanf("%c", &more);

                    } while (more == 'y' || more == 'Y');
                }
                break;

            case 2:
                if (checkPassword())
                    markAttendance();
                break;

            case 3:
                checkPercentage();
                break;

            case 4:
                showDateWise();
                break;

            case 5:
                if (checkPassword())
                    showShortageList();
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
}

// ---------------- MAIN ----------------
int main() {
    menu();
    return 0;
}