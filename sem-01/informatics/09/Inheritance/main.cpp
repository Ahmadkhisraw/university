#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age;
    }
};

class Resident : public Person {
private:
    class House {
    public:
        int roomCount;
        std::string address;

        House(int rooms, const std::string& addr) : roomCount(rooms), address(addr) {}

        void displayInfo() const {
            std::cout << "House Info - Rooms: " << roomCount << ", Address: " << address;
        }
    };

    House* residence;

public:
    Resident(const std::string& n, int a, int rooms, const std::string& addr)
        : Person(n, a), residence(new House(rooms, addr)) {}

    void setHouse(int rooms, const std::string& addr) {
        residence = new House(rooms, addr);
    }

    void displayResidenceInfo() const {
        displayInfo();
        std::cout << "\n";
        residence->displayInfo();
    }

    ~Resident() {
        delete residence;
    }
};

int main() {
    Resident resident("John Doe", 25, 3, "123 Main St");

    resident.displayResidenceInfo();

    resident.setHouse(4, "456 Oak St");

    resident.displayResidenceInfo();

    return 0;
}
