#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Room {
public:
    int roomNumber;
    string roomType;
    double pricePerNight;
    bool isAvailable;

    Room(int number, string type, double price)
        : roomNumber(number), roomType(type), pricePerNight(price), isAvailable(true) {}
};

class Hotel {
private:
    vector<Room> rooms;

public:
    void addRoom(int number, string type, double price) {
        rooms.push_back(Room(number, type, price));
        cout << "Room " << number << " added successfully.\n";
    }

    void displayAvailableRooms() {
        cout << "\nAvailable Rooms:\n";
        cout << left << setw(12) << "Room No." << setw(15) << "Room Type" 
             << setw(15) << "Price per Night" << setw(15) << "Availability" << endl;

        for (size_t i = 0; i < rooms.size(); i++) {
            if (rooms[i].isAvailable) {
                cout << left << setw(12) << rooms[i].roomNumber
                     << setw(15) << rooms[i].roomType
                     << setw(15) << rooms[i].pricePerNight
                     << setw(15) << "Available" << endl;
            }
        }
    }

    void bookRoom(int number) {
        for (size_t i = 0; i < rooms.size(); i++) {
            if (rooms[i].roomNumber == number) {
                if (rooms[i].isAvailable) {
                    rooms[i].isAvailable = false;
                    cout << "Room " << number << " booked successfully.\n";
                    return;
                } else {
                    cout << "Room " << number << " is already booked.\n";
                    return;
                }
            }
        }
        cout << "Room not found.\n";
    }

    void cancelBooking(int number) {
        for (size_t i = 0; i < rooms.size(); i++) {
            if (rooms[i].roomNumber == number) {
                if (!rooms[i].isAvailable) {
                    rooms[i].isAvailable = true;
                    cout << "Booking for Room " << number << " cancelled successfully.\n";
                    return;
                } else {
                    cout << "Room " << number << " is already available.\n";
                    return;
                }
            }
        }
        cout << "Room not found.\n";
    }
};

int main() {
    Hotel hotel;
    int choice, roomNumber;
    string roomType;
    double pricePerNight;

    while (true) {
        cout << "\n=== Hotel Reservation System ===\n";
        cout << "1. Add Room\n";
        cout << "2. Display Available Rooms\n";
        cout << "3. Book Room\n";
        cout << "4. Cancel Booking\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Room Number: ";
                cin >> roomNumber;
                cout << "Enter Room Type (Single/Double/Suite): ";
                cin >> roomType;
                cout << "Enter Price per Night: ";
                cin >> pricePerNight;
                hotel.addRoom(roomNumber, roomType, pricePerNight);
                break;

            case 2:
                hotel.displayAvailableRooms();
                break;

            case 3:
                cout << "Enter Room Number to book: ";
                cin >> roomNumber;
                hotel.bookRoom(roomNumber);
                break;

            case 4:
                cout << "Enter Room Number to cancel booking: ";
                cin >> roomNumber;
                hotel.cancelBooking(roomNumber);
                break;

            case 5:
                cout << "Exiting the system. Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}

