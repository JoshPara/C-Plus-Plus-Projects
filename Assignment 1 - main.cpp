//This program will compute the sum of positive values in an array as well as the negative values in an array, it will also count the number of values in each category
#include <iostream>
#define MAX_INPUT 10
using namespace std;

void sums(float values[], int n, int counter, int &PosValues, int &NegValues, int &SumPosValues, int &SumNegValues);

int main(void)
{
    int counter, n, PosValues, NegValues, SumPosValues, SumNegValues, AvePosSetVal, AveNegSetVal;
    n=-1;
    while(n<1 || n>MAX_INPUT){
    cout<<"Enter The Maximum Amount Of Real Numbers That Will Be Entered (Can Only Be Between 1-"<<MAX_INPUT<<")"<<endl;
    cin>>n;
    if(n>MAX_INPUT || n<1){
        cout<<"Error! Can Only Enter 1-"<<MAX_INPUT<<" Real Numbers"<<endl;
        cout<<"----------------------------------------------------------------------------------------"<<endl;
    }
    if(n>=1&&n<=MAX_INPUT){
        break;
    }
    }
    cout<<"----------------------------------------------------------------------------------------"<<endl;
    float values[n];
    for(counter=0; counter<n; counter++){
        cout<<endl;
        cout<<"Enter Real Number, Then Push Enter (Entering '0' Will Cause the Program to Stop Reading)"<<endl;
        cin>>values[counter];
        if(values[counter] == 0){
            break;
        }
    }
    sums(values, n, counter, PosValues, NegValues, SumPosValues, SumNegValues);
    cout<<"----------------------------------------------------------------------------------------"<<endl;
    cout<<"The Number of Positive Values = "<<PosValues<<endl;
    cout<<"The Number of Negative Values = "<<NegValues<<endl;
    cout<<"The Sum of Positive Values = "<<SumPosValues<<endl;
    cout<<"The Sum of Negative Values = "<<SumNegValues<<endl;
    AvePosSetVal=0;
    AveNegSetVal=0;
    //AvePosSetVal = SumPosValues / PosValues;
    //AveNegSetVal = SumNegValues / NegValues;

    cout<<"The Average Value of the Positive Set of Inputed Numbers = "<<SumPosValues / PosValues<<endl;
    cout<<"The Average Value of the Negative Set of Inputed Numbers = "<<SumNegValues / NegValues<<endl;
    return 0;
}


void sums(float values[], int n, int counter, int &PosValues, int &NegValues, int &SumPosValues, int &SumNegValues){
    PosValues=0;
    NegValues=0;
    for(counter=0; counter<n; counter++){
        if(values[counter]>0){
            ++PosValues;
        }
        if(values[counter]<0.0){
            ++NegValues;
        }
        if(values[counter]==0){
            break;
        }
    }
    SumPosValues=0;
    for(counter=0; counter<n; counter++){
        if(values[counter]>0){
            SumPosValues = SumPosValues + values[counter];
        }
        if(values[counter]==0){
            break;
        }
    }
    SumNegValues=0;
    for(counter=0; counter<n; counter++){
        if(values[counter]<0){
            SumNegValues = SumNegValues+values[counter];
        }
        if(values[counter]==0){
            break;
        }
    }

}
