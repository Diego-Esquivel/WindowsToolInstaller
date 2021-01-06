#include <iostream>
#include <string>
using std::string;

//function prototypes
int configgitglobaldata(char[], string);
int configgitglobaldata(string,string);
string configgitusernamestring(char*);

//global variables
char username[30];
string email = "";

int main () {
    
    std::cout << "Git username: ";
    std::cin >> username;
    std::cin.clear();
    std::cin.ignore(128, '\n');
    std::cout << "Git email: ";
    std::cin >> email;
    std::cin.clear();
    std::cin.ignore(128, '\n');
    
    if(system("git version")) {
        std::system("gitinstall");
    }
    else 
        std::cout << "Git already installed. Congratulations!";
    configgitglobaldata(username,email);
    std::system("git init");
    std::system("PAUSE");
    return 1;
}

int configgitglobaldata(char aname[], string aemail) {
    string gitusernamestring = "";
    gitusernamestring = configgitusernamestring(aname);
    configgitglobaldata(gitusernamestring,aemail);
    return 0;
}

int configgitglobaldata(string aname, string aemail) {
    string gitusernamestring = "";
    string gituseremailstring = "";
    gitusernamestring = aname;
    system(gitusernamestring.c_str());
    gituseremailstring = "git config --global user.email " + aemail;
    system(gituseremailstring.c_str());
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