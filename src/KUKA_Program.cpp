#include <iostream>
#include <ros/ros.h>
#include <string>
//#include <sstream>

//Subscriber example
//ros::Subscriber topic_example1;

//Publisher example
//ros::Publisher topic_example2;

//Global variables
int a, colour, pattern, loop_col, loop_pat;
bool;
float;
std::string str_col;
std::string str_pat;

//Initial information
void info_flow()
{
    //Here we feed our algorithm with the required information.
    std::cout << "For a black top cover input 1, for white input 2 and for blue input 3 here. " << std::endl;
    std::cin >> colour;
    std::cout << "For engraving pattern press 1 for a triangle, 2 for a square and 3 for a circle. " << std::endl;
    std::cin >> pattern;

    //In case of an error then the goto command bellow sends back the user to try again.
    Tcover_colour:

    switch (colour)
    {
        case 1:
            str_col = "black";
            break;

        case 2:
            str_col = "white";
            break;

        case 3:
            str_col = "blue";
            break;
        
        default:
            std::cout << "Error! Input must be 1, 2 or 3." << std::endl;
            goto Tcover_colour;
    }

    //In case of an error then the goto command bellow sends back the user to try again.
    Engraving_pattern:

    switch (pattern)
    {
        case 1:
            str_pat = "triangle";
            break;

        case 2:
            str_pat = "square";
            break;

        case 3:
            str_pat = "circle";
            break;

        case 4:
            str_pat = "non-patter"

        default:
            std::cout << "Error! Input must be 1, 2, 3 or 4." << std::endl;
            goto Engraving_pattern;
    }

    std::cout << "You have choosen a " << str_col << "top cover engraved with a " << str_pat << ". " << std::endl;
}

//Pick up top cover
void pu_tcover()
{
    loop_col = 0;
    while (loop_col == 0)
    {
        loop_col ++;
        if (colour = 1)
        {
            //Access other file with the script for picking up the BLACK cover.
        }

        else if (colour = 2)
        {
            //Access other file with the script for picking up the white cover.
        }

        else if (colour = 3)
        {
            //Access other file with the script for picking up the white cover.
        }

        else
        {
            std::cout << "Error! Input must be 1, 2 or 3." << std::endl;
            loop_col = 0;
        }
    }
}

//engraving patterns - triangle, square and circle.
void engraving()
{
    loop_pat = 0;
    while (loop_pat == 0)
    {
        loop_pat ++;
        if (pattern = 1)
        {
            //Access other file with the script for engraving a triangle on the cover.
        }

        else if (pattern = 2)
        {
            //Access other file with the script for engraving a square on the cover.
        }

        else if (pattern = 3)
        {
            //Access other file with the script for engraving a circle on the cover.
        }

        else if (pattern = 4)
        [
            //Skip engraving.
        ]

        else
        {
            std::cout << "Error! Input must be 1, 2 or 3." << std::endl;
            loop_pat = 0;
        }
    }
}


//Move to pallet.
void mt_pallet()
{
    //access other file with the script for moving from engraver to
}

//Mounting the top cover.
void m_tcover()
{
    //access other file with the scrippt for mounting the top cover.
}


int main(int argc, char** argv)
{
    ros::init(argc, argv, "KUKA_P2");
    ros::NodeHandle n;

    //Publishing example - 8bit integer
    //pub_topic_example2 = n.advertise<std_msgs::Int8>("topic_example2", 10);

    //Subscribing example
    //sub_topic example1 = n.subscribe("topic_example1", 10, CallBackFunction);

    while (a != 0 && ros::ok())
    {
        // [1] In this function the program get feed the information, could be from the MES-system or the PLC.
        info_flow;
        // [2] In this function the KUKA robot is told to pick up a given top cover (and move it to the engraver). 
        pu_tcover;
        // [3] In this function the KUKA robot will engrave the top cover by moving it accordingly on a fixed engraver.
        engraving;
        // [4] In this function the KUKA robot moves the top cover to the pallet.
        mt_pallet;
        // [5] In this function the KUKA robot mounts the top cover onto the dummy phone.
        m_tcover;

        std::cout << "Inputting 0 will contenue the loop while any other value will break it." << std::endl;
        std::cin >> a;

    }

}
