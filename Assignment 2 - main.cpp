//This is a simple Inventory management program, the menu will allow the user to chose whether they want to add an item, print inventory list, search by item ID, search by item Name, or organize the list alphabetically
#include <iostream>
#include <iomanip>
#include <string>
#include "Item.hpp"

using namespace std;

void menu();

int main(void){
    int Count, a=1,p=1, i=0, id, tempQuantity, tempQuantityHolder, j,k, selection=1;
    Item itemObject[10];
    string name1, tempName, tempNameHolder;
    unsigned long tempID, tempIDHolder;
    float tempCost, tempCostHolder;

    while(selection != 6 ){
        menu();
        cin>>selection;

        switch(selection){
            case 1:
                itemObject[a].addItem();
                ++a;
                continue;

            case 2:
                while(p!=a){
                    itemObject[p].printItemList();
                    ++p;
                    if(p==a){
                        break;
                    }
                }
                p=1;
                continue;

            case 3:
                cout<<"Enter Item ID: ";
                cin>>id;
                while(id!=itemObject[i].getItemID()){
                        ++i;
                    if(id==itemObject[i].getItemID()){
                        cout<<"found"<<endl;
                        itemObject[i].printItemList();
                        break;
                    }
                    if(i==a){
                        cout<<"Error Item ID not found"<<endl;
                        break;
                    }

                }
                i=0;
                continue;

            case 4:
                cout<<"Enter Item Name: ";
                getline(cin>>ws, name1);
                while(name1!=itemObject[i].getItemName()){
                        ++i;
                    if(name1==itemObject[i].getItemName()){
                        cout<<"found"<<endl;
                        itemObject[i].printItemList();
                        break;
                    }
                    if(i==a){
                        cout<<"Error Item Name not found"<<endl;
                        break;
                    }

                }
                i=0;
                continue;

            case 5:
                for(j=1; j<11; ++j){
                    for(k=j+1; k<11; ++k){
                        if(itemObject[j].getItemName()<itemObject[k].getItemName()){

                            tempName=itemObject[j].getItemName();
                            tempNameHolder=itemObject[k].getItemName();
                            itemObject[k].setItemName(tempName);
                            tempName=tempNameHolder;
                            itemObject[j].setItemName(tempName);

                            tempID=itemObject[j].getItemID();
                            tempIDHolder=itemObject[k].getItemID();
                            itemObject[k].setItemID(tempID);
                            tempID=tempIDHolder;
                            itemObject[j].setItemID(tempID);

                            tempCost=itemObject[j].getItemCost();
                            tempCostHolder=itemObject[k].getItemCost();
                            itemObject[k].setItemCost(tempCost);
                            tempCost=tempCostHolder;
                            itemObject[j].setItemCost(tempCost);

                            tempQuantity=itemObject[j].getQuantity();
                            tempQuantityHolder=itemObject[k].getQuantity();
                            itemObject[k].setQuantity(tempQuantity);
                            tempQuantity=tempQuantityHolder;
                            itemObject[j].setQuantity(tempQuantity);
                        }
                    }
                }
                while(p!=a){
                    itemObject[p].printItemList();
                    ++p;
                    if(p==a){
                        break;
                    }
                }
                p=1;
                continue;

            case 6:
                cout<<"Program Quit..."<<endl;
                continue;

            default:
                cout<<"Invalid Menu Selection"<<endl;
                continue;
        }
    }
    return 0;
}

void menu(void){
    cout<<"\t Inventory Management System Menu"<<endl;
    cout<<"1. Add new Item"<<endl;
    cout<<"2. Print Item List"<<endl;
    cout<<"3. Find Item by ID"<<endl;
    cout<<"4. Find Item by Name"<<endl;
    cout<<"5. Sort by Name"<<endl;
    cout<<"6. Quit"<<endl;
    cout<<"Select: ";
}
