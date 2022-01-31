    #include<iostream>
    #include<string.h>
    #include <string>
    #include <fstream>
    #include <sstream>

    std::string line;

    int main(){

    ifstream myfile;    
    myfile.open("test3.csv");


     ifstream in("file.csv");
     int lineToGet = 6;


    // read all lines until you get to
    // the one you want
    for(int i = 0; i < lineToGet; i++){
        getline(in,line);
    }
    myfile<<4<<","<<48<<","<<8<<endl;



    // now that we have the line we want,
    // split it into columns

    // stringstream str(line);
    // std::string column;
    // for(int i = 0; i < 5; i++)
    //    getline(str, column, ',');

    // now, the 5th column is in variable [b]column[/b]. 
    // Since its enclosed in double quotes you will
    // have to strip those out before adding to your Form
    myfile.close();

}

