#include <stdio.h>
#include <string.h>

#define MAX_ROOMS 50
#define MAX_NAME 50

// Structure for room
typedef struct {
    int isBooked;
    char customerName[MAX_NAME];
    int days;
} Room;

Room hotel[MAX_ROOMS];  // global room array

// Initialize all rooms to empty
void initializeRooms() {
    for (int i = 0; i < MAX_ROOMS; i++) {
        hotel[i].isBooked = 0;
        strcpy(hotel[i].customerName, "");
        hotel[i].days = 0;
    }
}

// Book a room
void bookRoom() {
    int roomNum;

    printf("Enter room number to book (1 - %d): ", MAX_ROOMS);
    scanf("%d", &roomNum);

    // Convert to index
    roomNum--;

    if (roomNum < 0 || roomNum >= MAX_ROOMS) {
        printf("Invalid room number!\n");
        return;
    }

    if (hotel[roomNum].isBooked == 1) {
        printf("Room already booked!\n");
        return;
    }

    printf("Enter customer name: ");
    scanf("%s", hotel[roomNum].customerName);

    printf("Enter number of days: ");
    scanf("%d", &hotel[roomNum].days);

    hotel[roomNum].isBooked = 1;

    printf("Room booked successfully!\n");
}

// Show all booked rooms
void showBookings() {
    printf("\n--- Booked Rooms ---\n");
    for (int i = 0; i < MAX_ROOMS; i++) {
        if (hotel[i].isBooked) {
            printf("Room %d - %s (%d days)\n", i + 1, hotel[i].customerName, hotel[i].days);
        }
    }
}

// Main menu
int main() {
    int choice;
    initializeRooms();

    while (1) {
        printf("\nHotel Management System\n");
        printf("1. Book Room\n");
        printf("2. Show Bookings\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookRoom();
                break;
            case 2:
                showBookings();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}