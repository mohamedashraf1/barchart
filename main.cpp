#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream rectline("rectline.svg");
    int num1,num2,num3,num4;
    cout<<"enter the 4 numbers from the smaller to the biggest"<<endl;
    cin>>num1>>num2>>num3>>num4;

    rectline <<"<?xml version=\"1.0\" standalone=\"no\"?>"  << endl
            <<"<!DOCTYPE svg PUBLIC  \" -//W3C//DTD SVG 1.1//EN\""  << endl
            <<"\"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\" >"  << endl
            <<"<svg width=\"400\" height=\"400\"" << endl
            <<"xmlns=\"http://www.w3.org/2000/svg\">" << endl



            <<"<rect x=\"20\" y=\""<<(400-num1)<<"\""<<" width=\"50\" height=\""<<num1<<"\""<< endl
            <<"style=\"fill:black;\"/>" << endl
            <<"<rect x=\"90\" y=\""<<(400-num2)<<"\""<<" width=\"50\" height=\""<<num2<<"\""<< endl
            <<"style=\"fill:black;\"/>" << endl
            <<"<rect x=\"160\" y=\""<<(400-num3)<<"\""<<" width=\"50\" height=\""<<num3<<"\""<< endl
            <<"style=\"fill:black;\"/>" << endl
            <<"<rect x=\"230\" y=\""<<(400-num4)<<"\""<<" width=\"50\" height=\""<<num4<<"\""<< endl
            <<"style=\"fill:black;\"/>" << endl


            <<"<rect x=\"20\" y=\"399\" width=\"300\" height=\"1\""<<endl   //x-axis
            <<"style=\"fill:black;\"/>"<<endl

            <<"<rect x=\"20\" y=\"0\" width=\"1\" height=\"400\""<<endl    //y-axis
            <<"style=\"fill:black;\"/>"<<endl


            <<"</svg>" << endl;

    rectline.close();
    return 0;
}
