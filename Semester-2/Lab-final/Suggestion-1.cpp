#include<bits/stdc++.h>
using namespace std;
class Guest {
protected:
    string guestName;
    string phoneNumber;
public:
    Guest() {

    }
    Guest(string guestName, string phoneNumber) {
        this->guestName = guestName;
        this->phoneNumber = phoneNumber;
    }
};
class Room {
protected:
    string RoomNumber;
    string RoomType;
public:
    Room() {

    }
    Room(string RoomNumber, string RoomType){
        this->RoomNumber = RoomNumber;
        this->RoomType = RoomType;
    }
};
class Hotel {
protected:
    string hotelName, location;
public:
    Hotel() {

    }
    Hotel(string hotelName, string location) {
        this->hotelName = hotelName;
        this->location = location;
    }
};
class BookingInfo: public Guest, public Room, public Hotel {
private:
    int numOfNights;
    string bookingDate;
public:
    BookingInfo(): Guest(), Room(), Hotel() {
        this->numOfNights = 0;
    }
    BookingInfo(string guestName, string phoneNumber, string RoomNumber, string RoomType, string hotelName, string location,int numOfNights, string bookingDate):
    Guest(guestName, phoneNumber), Room(RoomNumber, RoomType), Hotel(hotelName, location) {
        this->numOfNights = numOfNights;
        this->bookingDate = bookingDate;
    }
    void showBooking() {
        cout << "Guest Name: " << this->guestName << endl;
        cout << "Phone No: " << this->phoneNumber << endl;
        cout << "Hotel Name: " << this->hotelName << endl;
        cout << "Hotel Location: " << this->location << endl;
        cout << "Room Type: " << this->RoomType << endl;
        cout << "Room No: " << this->RoomNumber << endl;
        cout << "Number of nights: " << this->numOfNights << endl;
        cout << "Booking Date: " << this->bookingDate << endl;
    }
};
int main() {
    BookingInfo d1("Tamal", "01911115314", "301", "Premium", "Sea View", "Chottogram", 2, "15-12-2026");
    d1.showBooking();
    return 0;
}