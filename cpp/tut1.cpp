// now second step u see i am always typing // and the color of that line is green
// green line or green text means this is only for software engineer who writes it. g++ ignores these lines.
// these lines are only hints or help text. now in next line create green text which says what are steps for c++
//steps for c++
//step 1 download and install visual studio code.then install g++ configure it
//step 2 create folder named c++ course()or any name of your choice . open this folder by visual studio code.
// step 2 can be completed by going to that folder and right clicking anywhere and you see open code here. 
// step 3 go to settings of visual studio code to change mousewheel setting.
// step 4 create file named tut1.cpp(or any name of your choice but file should be .cpp)
// before you can run your cpp code you need to install g++
// g++ is a special software which compile(or convert) your .cpp file to .exe file
// this .exe file is executable file meaning it can be exected on your windows computer
// to compile .cpp to .exe do below step in the same folder by either opening cmd or terminal from visual studio code
// g++ nameOfYourFile.cpp
// by runninmg above command you will see a new file is created in that folder. it can be a.exe or anything.exe
// now you can rin this .exe file by either double clicking or by typing name of that .exe in terminal
// our code starts from next line. you can see by the different color.
// Please save and run this code somia now.
// so u ran this command g++ tut1.cpp
// it should++ have produced a.exe
// now show me two ways to run your executable .exe file. nowa
// space between new line? we will fix that in a second. first show me how two run this file with second method
// so as you see std::cout is not printing our text on new line
// to fix this cpp has special code
// \n
// this above backslash n means goto new line
// we add this before closing of our double quotations
// u r running old comiled code. please compile again. it will regenerate a.exe then run from terminal. now
// this should be comment u should have see this. now again compile and run this code. now first sav
// what are the steps of compiling?
// g++ nameOfFile.cpp
// a.exe
// right?yes but did you saved the latest cpp file see it is white do meanss not saved
// now your task is create another file my_profile.cpp
// in that file print in first line your full name 
// second your previous education
// third your current occupation. now
// first save this
// can i close this? ofcoursei
// please also add comments for information thta what is the purpose of your code just one or two lines are enough. sprry
#include<iostream>
int main(){   
    std::cout<<"My Name is Somia Saeed.\n";
    std::cout<<"I recently started BsCS from UET\n";
    std::cout<<"This is my first C++ or CPP code\n";
    return 0;    
}
