//**This program reads the contents of a file of real numbers, stores the numbers in a vector then writes the numbers to a new file in reverse order**//
#include <iostream>
#include <fstream> //**For file streams**//
#include <vector> //**For vectors**//
#include <string> //**For Strings**//


using namespace std;

#define INF "mydata.txt"
#define OUTF "myout.txt"

int main(){
    vector<string>numList;
//**Input stream of real numbers into a vector in main from other file**//
    ifstream dataFile(INF);
    if(dataFile.is_open()){
        while(true){
            if(dataFile.good()){
                string num;
                while(getline(dataFile, num)){
                    numList.push_back(num);
                }

            }
            else if(dataFile.eof()){
                break;
            }
            else{
                cout<<"Error: Issues Connecting With File!"<<endl;
            }
        }
    }else{
        cout<<"Can't Open "<<INF<< " For Input!";
    }
    dataFile.close();
//**Output stream into output file in reverse order**//
    int b = numList.size()-1;
    ofstream outFile(OUTF);
    if(outFile.is_open()){
        cout<<"Writing Numbers to OutFile..."<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<"New Order of Numbers (Reverse Ordered)"<<endl;
            for(int c=0;c<numList.size();++c){
                outFile<<numList[b]<<endl;
                cout<<numList[b]<<endl;
                --b;
            }
    }else{
        cout<<"Can't Open "<<OUTF<<" For Output";
    }
    outFile.close();
//**Successful Execution**//
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Writing Contents to Output File in Reverse Order Complete!"<<endl;
    return 0;
}
