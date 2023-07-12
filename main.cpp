#include <iostream>
using namespace std;


//////Creating a named Structure
/// //Declare the structure named "MyCars"
struct MyCars { //this structure is named "MyCars"
    string Brand;
    string Model;
    int Year;
};


int main()
{
    //Create a structure variable called mystructure
    struct {                  //The Structure declaration
        int myNum;            //Member(int variable)
        string mystring;      //Member(string variable)
    } mystructure;            //THe structure variable

    //Assign value to members of myStructure
    mystructure.myNum = 1;
    mystructure.mystring = "Hello world!";

    //print members of mystructure
    cout<<mystructure.myNum <<endl;
    cout<<mystructure.mystring<<endl;

    /////Using comma for Multiple Structures variables separated with commas
    struct {
        string brand;
        string model;
        int year;
    }Car1, Car2; //we can add variables by separating them with a comma here

    //Put data into the first structure
    Car1.brand = "Ferrari";
    Car1.model = "Daytona";
    Car1.year = 1995;

    //Put data into the second structure
    Car2.brand = "GMC";
    Car2.model = "Denali";
    Car2.year = 2023;

    //Print out the Structure members
    cout<<Car1.brand<< ", "<< Car1.model<< ", "<< Car1.year<<endl;
    cout<<Car2.brand<< ", "<< Car2.model<< ", "<<Car2.year<<endl;


    //We create a MyCars structure and store it in MyCar1
    MyCars MyCar1;
    MyCar1.Brand = "Bently";
    MyCar1.Model = "Continental GT";
    MyCar1.Year = 2019;

    //We create another MyCars Structure and store it in MyCar2
    MyCars MyCar2;
    MyCar2.Brand = "Buggati";
    MyCar2.Model = "Chiron";
    MyCar2.Year = 2019;

    //Print out the Structure Members
    cout<<"Brand: "<<MyCar1.Brand<<", Model: "<<MyCar1.Model<<", Year: "<<MyCar1.Year<<endl;
    cout<<"Brand: "<<MyCar2.Brand<<", Model: "<<MyCar2.Model<<", Year: "<<MyCar2.Year<<endl;

    return 0;
}
