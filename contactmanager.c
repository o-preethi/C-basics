#include <stdio.h>
#include <string.h>

struct contact{
    char name[30];
    char phone[15];
    char email[30];
};


int main()
{
  printf("welcome to the menu\n");
    printf("1. Add a contact\n");
    printf("2. View all contacts\n");
    printf("3. Search for a contact\n");
    printf("4. Delete a contact\n");
    printf("5. Exit\n");
    printf("Please select an option: ");
    int choice;
    scanf("%d", &choice);
    struct contact contacts[100];
    int contact_count = 0;
    while (choice != 5) {
        switch (choice) {
            case 1:
                printf("Enter name: ");
                scanf("%s", contacts[contact_count].name);
                printf("Enter phone: ");
                scanf("%s", contacts[contact_count].phone);
                printf("Enter email: ");
                scanf("%s", contacts[contact_count].email);
                contact_count++;
                break;
            case 2:
                for (int i = 0; i < contact_count; i++) {
                    printf("Name: %s, Phone: %s, Email: %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
                }
                break;
            case 3:
                printf("Enter name to search: ");
                char search_name[30];
                scanf("%s", search_name);
                for (int i = 0; i < contact_count; i++) {
                    if (strcmp(contacts[i].name,search_name) == 0) {
                        printf("Found contact -Name: %s, Phone: %s, Email: %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
                        break;
                    }
                }
                break;
            case 4:
                printf("Enter name to delete: ");
                char delete_name[30];
                scanf("%s", delete_name);
                for (int i = 0; i < contact_count; i++) {
                    if (strcmp(contacts[i].name, delete_name) == 0) {
                        for (int j = i; j < contact_count - 1; j++) {
                            contacts[j] = contacts[j + 1];
                        }
                        contact_count--;
                        printf("Contact deleted.\n");
                        break;
                    }
                }
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
        printf("Please select an option: ");
        scanf("%d", &choice);
    }
    return 0;
}