# include<iostream>
# include<math.h>
#include <fstream>
int main()
{
    int r,s;
    std::cout<<"enter width and height of triangle";
    std::cin >>r>>s;
    auto t =sqrt(pow(r,2)+pow(s,2));
    std::cout<<"the answer is "<<t;
    std:: ofstream myfile;
    myfile.open("example.txt");
    myfile<<"writing this to a file .\n "<< t;
    myfile.close();
 return 0;
}