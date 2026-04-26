#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for Account
struct account {
    int accNo;
    char name[20];
    float balance;
    struct account *next;
};

// Queue for customers
struct queue {
    int accNo;
    struct queue *next;
};

// Stack for transactions
struct stack {
    char action[50];
    struct stack *next;
};

struct account *head = NULL;
struct queue *front = NULL, *rear = NULL;
struct stack *top = NULL;

// 🔹 Create Account
void createAccount() {
    struct account *temp = (struct account*)malloc(sizeof(struct account));

    printf("Enter Account No: ");
    scanf("%d", &temp->accNo);

    printf("Enter Name: ");
    scanf("%s", temp->name);

    printf("Enter Balance: ");
    scanf("%f", &temp->balance);

    temp->next = head;
    head = temp;

    printf("Account Created Successfully!\n");
}

// 🔹 Display Accounts
void displayAccounts() {
    struct account *ptr = head;

    while(ptr != NULL) {
        printf("AccNo: %d | Name: %s | Balance: %.2f\n",
               ptr->accNo, ptr->name, ptr->balance);
        ptr = ptr->next;
    }
}

// 🔹 Deposit
void deposit() {
    int acc;
    float amt;
    printf("Enter Account No: ");
    scanf("%d", &acc);

    struct account *ptr = head;
    while(ptr != NULL) {
        if(ptr->accNo == acc) {
            printf("Enter amount: ");
            scanf("%f", &amt);
            ptr->balance += amt;

            // push to stack
            struct stack *s = (struct stack*)malloc(sizeof(struct stack));
            sprintf(s->action, "Deposited %.2f in %d", amt, acc);
            s->next = top;
            top = s;

            printf("Amount Deposited!\n");
            return;
        }
        ptr = ptr->next;
    }
    printf("Account not found!\n");
}

// 🔹 Withdraw
void withdraw() {
    int acc;
    float amt;
    printf("Enter Account No: ");
    scanf("%d", &acc);

    struct account *ptr = head;
    while(ptr != NULL) {
        if(ptr->accNo == acc) {
            printf("Enter amount: ");
            scanf("%f", &amt);

            if(ptr->balance >= amt) {
                ptr->balance -= amt;

                struct stack *s = (struct stack*)malloc(sizeof(struct stack));
                sprintf(s->action, "Withdrawn %.2f from %d", amt, acc);
                s->next = top;
                top = s;

                printf("Amount Withdrawn!\n");
            } else {
                printf("Insufficient Balance!\n");
            }
            return;
        }
        ptr = ptr->next;
    }
    printf("Account not found!\n");
}

// 🔹 Add to Queue
void addCustomerQueue() {
    struct queue *temp = (struct queue*)malloc(sizeof(struct queue));

    printf("Enter Account No: ");
    scanf("%d", &temp->accNo);
    temp->next = NULL;

    if(front == NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }

    printf("Customer added to queue!\n");
}

// 🔹 Serve Customer
void serveCustomer() {
    if(front == NULL) {
        printf("No customers in queue!\n");
        return;
    }

    printf("Serving Account No: %d\n", front->accNo);

    struct queue *temp = front;
    front = front->next;
    free(temp);
}

// 🔹 Show Transactions (Stack)
void showTransactions() {
    struct stack *ptr = top;

    printf("Recent Transactions:\n");
    while(ptr != NULL) {
        printf("%s\n", ptr->action);
        ptr = ptr->next;
    }
}

// 🔹 Main Menu
int main() {
    int choice;

    while(1) {
        printf("\n--- BANK SYSTEM ---\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Add Customer to Queue\n");
        printf("6. Serve Customer\n");
        printf("7. Show Transactions\n");
        printf("8. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: createAccount(); break;
            case 2: displayAccounts(); break;
            case 3: deposit(); break;
            case 4: withdraw(); break;
            case 5: addCustomerQueue(); break;
            case 6: serveCustomer(); break;
            case 7: showTransactions(); break;
            case 8: exit(0);
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}