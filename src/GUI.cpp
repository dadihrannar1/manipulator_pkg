#include <iostream>            
#include <ros/ros.h>

int main(int argc, char const *argv[])
{

/*int black = 1;
int blue = 2;
int white = 3;*/
bool cover;
int choose_clr;
int picking;
std::string cover_input;
std::string flat ("flat");
std::string curved ("curved");

std::cout << "Please pick which cover you want" << std::endl;
std::cout << "Write 'flat' for a flat cover and 'curved' for a curved cover" << std::endl;

std::cin >> cover_input;

int res = cover_input.compare(flat);

if (res == 0) {
    cover = true;
} else {
    cover = false;
}

picking = 0;

while (picking == 0) {    
    if (cover = true){
        std::cout << "You have picked a flat cover " << std::endl;
        std::cout << "Please pick a color for your cover " << std::endl;
        std::cout << "Press 1 for black " << std::endl;
        std::cout << "Press 2 for blue " << std::endl;
        std::cout << "Press 3 for white " << std::endl;
        std::cin >> choose_clr;
    } else if (cover = false) {
        std::cout << "You have picked a curved cover " << std::endl;
        std::cout << "Please pick a color for your cover " << std::endl;
        std::cout << "Press 1 for black " << std::endl;
        std::cout << "Press 2 for blue " << std::endl;
        std::cout << "Press 3 for white " << std::endl;
        std::cin >> choose_clr;
    }

    switch (choose_clr)
    {
    case 1:
        std::cout << "You have picked black" << std::endl;
        picking ++;
        break;
    case 2:
        std::cout << "You have picked blue" << std::endl;
        picking ++;
        break;
    case 3:
        std::cout << "You have picked white" << std::endl;
        picking ++;    
        break;
    default:
        std::cout << "Invalid input" << std::endl;
        break;
    }
}


    return 0;
}
