#include<iostream>
int main(){
    std::cout<<"my name is Somia saeed.\n";
    std::cout<<"my age is 21 years.\n";
    std::cout<<"i am student of BsCs at UET.\n";
    return 0;
}
// compile this file please
// ok if you see nothing on enter that means code compiled succesfully. now see in file do u see any new file?
// it means no matter how many new .cpp files you created g++ is always making a.exe
// we can fix that by giving our own name instead of a.exe
// this is the command
// old command: g++ yourFileName.cpp
// output: a.exe
//new command: g++ -o whatEverName yourFileName.cpp
// now need to enter .exe only any name.
// we only added two extra hings in command
// -o whatEverName
// remeber after whatEverName dont put whatEverName.cpp ,g ++ automatically output whatEverName.exe
// try now
//see justAnyNameSomia.exe ? this is good now you can have many executables right? to run just type name JustAnyNameSomia.exe and u will see output in terminal
// compile my-profile.cpp file to be outputted in the name of my-profile-info.exe
// now please. press enter  and see whats the name of .exe ? nad how to run it?
// .\ then your filename
// if you press tab after just typing first letter it will write seconds file name and so on.
// please do now.  try typing m and press 1 time tabe and see and press again tab
// see tab will always try to complete name starting with m bow matter how many times you type.
// now delete all .exe files from c++ folder
// now we want to push todays code to github. what we will do is create new folde cpp inside your local repo and put your two .cpp files there, now
// please now.

// this is command always remain same with smal letter and changes with file capital letter
// g++ -o ANYNAMEYOULIKEHEREWITHOUTDOTEXE YOURFILENAME.cpp
// follow above. i am sorry noew is corrdct
//now g++ -o type kr ky apni marzi k nam rakhna ha ya my profile wala hi
// g++ -o apni_marzi_ka_nam_but_behtr_hai_k_file_k_same_name_without_exe aur_apin_cpp_file_ka_name_dot_cpp_K_sat
// this is correct
// g++ -o meriFileMeriMarzi .\my-profile.cpp
// meriFileMeriMarzi ki jaga kuch b likh sakty but .cpp ya .exe ni likhna iss word k satho
// abb try karo
//new exe file kis nam sy generate hui?
//my-profile1.exe sy
//run and see output of this exe file. now
// you already compiled
//run karny k liye sirf exe wali file ka nam likho aur done.
// now check git status and push changes to github