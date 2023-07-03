#include <iostream>
#include <vector>
#include <string>

struct Application {
    std::string name;
    std::string email;
    std::string phoneNumber;
};

void addApplication(std::vector<Application>& applications) {
    Application newApplication;
    
    std::cout << "Enter name: ";
    std::cin.ignore();
    std::getline(std::cin, newApplication.name);
    
    std::cout << "Enter email: ";
    std::getline(std::cin, newApplication.email);
    
    std::cout << "Enter phone number: ";
    std::getline(std::cin, newApplication.phoneNumber);
    
    applications.push_back(newApplication);
    
    std::cout << "Application added successfully!\n";
}

void displayApplications(const std::vector<Application>& applications) {
    if (applications.empty()) {
        std::cout << "No applications found.\n";
        return;
    }
    
    std::cout << "Applications:\n";
    
    for (size_t i = 0; i < applications.size(); ++i) {
        std::cout << "Name: " << applications[i].name << std::endl;
        std::cout << "Email: " << applications[i].email << std::endl;
        std::cout << "Phone number: " << applications[i].phoneNumber << std::endl;
        std::cout << std::endl;
    }
}

int main() {
    std::vector<Application> applications;
    int choice;
    
    while (true) {
        std::cout << "Application Management Form\n";
        std::cout << "1. Add Application\n";
        std::cout << "2. Display Applications\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                addApplication(applications);
                break;
                
            case 2:
                displayApplications(applications);
                break;
                
            case 3:
                std::cout << "Exiting the program.\n";
                return 0;
                
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
}
