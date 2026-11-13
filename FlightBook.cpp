#include <iostream>
using namespace std;


int main()
{
    const int size = 50;
    int seats[size] = {
        1, 0, 1, 0, 1, 1, 0, 0, 1, 0,
        1, 1, 0, 1, 0, 0, 1, 0, 1, 0,
        1, 0, 0, 1, 1, 0, 1, 0, 0, 1,
        0, 1, 0, 1, 0, 1, 0, 0, 1, 0,
        1, 0, 1, 0, 0, 1, 0, 1, 0, 0
    };

    int booked = 0;
    int available = 0;

    // 1. Count booked and available seats
    for (int i = 0; i < size; i++)
    {
        if (seats[i] == 1)
            booked++;
        else
            available++;
    }

    cout << "Total booked seats: " << booked << endl;
    cout << "Total available seats: " << available << endl;

    // 2. Display all available seat numbers
    cout << "\nAvailable seat numbers:" << endl;

    for (int i = 0; i < size; i++)
    {
        if (seats[i] == 0)
            cout << i + 1 << " ";
    }
    cout << endl;

    // 3. Book the first available seat
    bool seatBooked = false;

    for (int i = 0; i < size; i++)
    {
        if (seats[i] == 0)
        {
            seats[i] = 1;
            cout << "\nFirst available seat booked: "
                 << i + 1 << endl;
            seatBooked = true;
            break;
        }
    }

    if (!seatBooked)
        cout << "\nNo seats available for booking." << endl;

    // 4. Check a specific seat
    int seatNo;

    cout << "\nEnter seat number to check (1-50): ";
    cin >> seatNo;

    if (seatNo < 1 || seatNo > size)
    {
        cout << "Invalid seat number." << endl;
    }
    else if (seats[seatNo - 1] == 0)
    {
        cout << "Seat " << seatNo << " is available." << endl;
    }
    else
    {
        cout << "Seat " << seatNo << " is booked." << endl;
    }

    // 5. Find the last available seat
    int lastSeat = -1;

    for (int i = 0; i < size; i++)
    {
        if (seats[i] == 0)
            lastSeat = i + 1;
    }

    if (lastSeat != -1)
        cout << "\nLast available seat: " << lastSeat << endl;
    else
        cout << "\nNo seats are available." << endl;

    return 0;
}

