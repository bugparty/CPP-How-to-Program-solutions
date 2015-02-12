#include "invoice.h"

Invoice::Invoice(string part,string desc,int qualtity,int price){
    setDescription(desc);
    setPart(part);
    setQualtity(qualtity);
    setPrice(price);
}
void Invoice::setDescription(string desc){
    description = desc;
}
void Invoice::setPart(string part){
    this->part = part;
}
void Invoice::setPrice(int price){
    if(price > 0)
        this->price = price;
    else{
        this->price = 0;
    }
}
void Invoice::setQualtity(int qualtity){
    if(qualtity > 0)
        this->qualtity = qualtity;
    else{
        this->qualtity  = 0;
    }
}
string Invoice::getDescription(){
    return description;
}
string Invoice::getPart(){
    return part;
}
int Invoice::getPrice(){
    return price;
}
int Invoice::getQualtity(){
    return qualtity;
}
int Invoice::getInvoiceAmount(){
    return price*qualtity;
}
