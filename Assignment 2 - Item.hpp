//Header File for Item Class
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Item{
        private:
            unsigned long itemID;
            string itemName;
            float itemCost;
            int quantity;

        public:
            int getItemID(){
                return itemID;
            }
            string getItemName(){
                return itemName;
            }
            int getItemCost(){
                return itemCost;
            }
            int getQuantity(){
                return quantity;
            }
            void setItemName(string tempName){
                itemName=tempName;
            }
            void setItemID(unsigned long tempID){
                itemID=tempID;
            }
            void setItemCost(float tempCost){
                itemCost=tempCost;
            }
            void setQuantity(int tempQuantity){
                quantity=tempQuantity;
            }
            void addItem(){
                cout<<"Enter Item ID"<<endl;
                    cin>>itemID;
                    cout<<"Enter item Name"<<endl;
                    getline(cin>>ws, itemName);
                    cout<<"Enter Item Cost"<<endl;
                    cin>>itemCost;
                    cout<<"Enter Item Quantity"<<endl;
                    cin>>quantity;
            }
            void printItemList(){
                cout<<"Item ID: "<<itemID<<'\t'<<"Item Name: "<<itemName<<'\t'<<"Item Cost: "<<setprecision(.2)<<itemCost<<'\t'<<"Quantity: "<<quantity<<endl;
            }

    };

