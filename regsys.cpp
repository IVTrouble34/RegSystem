#include <iostream>
#include <vector>
#include <map>
#include <list>

using namespace std;

struct User {
    int id;
    string login;
    string pass;
};

void regsystem(list<User>& users) {

    User newUser;

    cout << "Hello " << "Please complete the registration" << endl;

    cout << "Enter your id: " << endl;
    cin >> newUser.id;


    cout << "Enter your login: " << endl;
    cin >> newUser.login;

    cout << "Enter your pass" << endl;
    cin >> newUser.pass;

    users.push_back(newUser);

    cout << "REgistration completed";

};

bool login(const list<User>& users ) {

    std::string username, password;

    cout << "Enter your name: " << endl;
    cin >> username;

    cout << "Enter the password" << endl;
    cin >> password;

    for (const auto& user : users) {
        if(user.login == username && user.pass == password ) {
            cout << "Login succseful" << username <<endl;
            return true;
        } else {
            cout << "Invalid data";
            return false;
        }
    }

    return 0;
}




int main() {

    list<User>users;
    int choice;

do {
    cout << "\n1.Register \n2 Login \n3 Exit" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        regsystem(users);
        break;

    case 2:
        login(users);
        break;

    case 3:
    cout << "Bye";

    default:

    cout << "Invalid opt";
}



} while (choice !=3);

};
