#include <iostream>
#include <string>
using std::string;

//function prototypes
string configgitusernamestring(char*);

int main () {
    char username[30];
    string email = "";
    std::cout << "Git username: ";
    std::cin >> username;
    std::cin.clear();
    std::cin.ignore('\n', 128);
    std::cout << "Git email: ";
    std::cin >> email;
    std::cin.clear();
    std::cin.ignore('\n', 128);
    string gitusernamestring = "";
    string gituseremailstring = "";
    if(system("git version")) {
        system("gitinstall");
        gitusernamestring = configgitusernamestring(username);
        system(gitusernamestring.c_str());
        gituseremailstring = "git config --global user.email " + email;
        system(gituseremailstring.c_str());
        system("git init");
    }
    else 
        std::cout << "Git already installed. Congratulations!";
    std::system("PAUSE");
    return 0;
}

string configgitusernamestring(char* aname) {
    string return_val = "git config --global user.name \"";
    for(int i = 0; i != '\0' || i < 30; i++) {
        return_val += aname[i];
    }
    return_val += "\"";
    return return_val;
}