#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define maximum number of buses and seats
#define MAX_BUSES 10
#define MAX_SEATS 50

// Structure to represent a bus
struct Bus {
    int busNumber;
    char origin[50];
    char destination[50];
    int totalSeats;
    int availableSeats;
    float fare;
};

// Function prototypes
void initializeBuses(struct Bus buses[], int numBuses);
void displayMenu();
void purchaseTicket(struct Bus buses[], int busIndex);
void cancelTicket(struct Bus buses[], int busIndex);
void checkBusStatus(struct Bus buses[], int busIndex);

int main() {
    // Define the number of buses
    int numBuses = 3;

    // Create an array of buses
    struct Bus buses[MAX_BUSES];

    // Initialize bus information
    initializeBuses(buses, numBuses);

    int choice;
    do {
        // Display menu
        displayMenu();

        // Get user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Ticket Purchase
                purchaseTicket(buses, numBuses);
                break;

            case 2:
                // Cancel Tickets
                cancelTicket(buses, numBuses);
                break;

            case 3:
                // Checking Bus Status
                checkBusStatus(buses, numBuses);
                break;

            case 4:
                // Exit the program
                printf("Exiting the Bus Reservation System. Have a nice day!\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

void initializeBuses(struct Bus buses[], int numBuses) {
    // Initialize bus information
    for (int i = 0; i < numBuses; i++) {
        buses[i].busNumber = i + 1;
        printf("Enter origin for Bus %d: ", buses[i].busNumber);
        scanf("%s", buses[i].origin);
        printf("Enter destination for Bus %d: ", buses[i].busNumber);
        scanf("%s", buses[i].destination);
        printf("Enter total seats for Bus %d: ", buses[i].busNumber);
        scanf("%d", &buses[i].totalSeats);
        buses[i].availableSeats = buses[i].totalSeats;
        printf("Enter fare for Bus %d: ", buses[i].busNumber);
        scanf("%f", &buses[i].fare);
    }
}

void displayMenu() {
    // Display menu options
    printf("\nBus Reservation System Menu\n");
    printf("1. Purchase Ticket\n");
    printf("2. Cancel Tickets\n");
    printf("3. Checking Bus Status\n");
    printf("4. Exit\n");
}

void purchaseTicket(struct Bus buses[], int numBuses) {
    // Code to purchase a ticket
}

void cancelTicket(struct Bus buses[], int numBuses) {
    // Code to cancel a ticket
}

void checkBusStatus(struct Bus buses[], int numBuses) {
    // Code to check bus status
}