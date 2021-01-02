#include <iostream>
#include <string>
using std::string;

//function prototypes
int configgitusernamestring(char*);

int main () {
    char username[30];
    char email[30];
    std::cout << "Git username: ";
    std::cin >> username;
    std::cout << "Git email: ";
    std::cin >> email;
    if(system("git version")) {
        system("gitinstall");
        configgitusernamestring(username);
        system("git config --global user.name \"" +  + "\"");
        system("git config --global user.email ");
        system("git init");
        system("git clone https://github.com/jrodr544/videoApp.git");
        system("cd videoApp");
    }
}

int configgitusernamestring(char* aname) {
    
}