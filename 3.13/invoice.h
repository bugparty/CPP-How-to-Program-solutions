#include <string>
using std::string;
class Invoice{
public:
    Invoice(string,string,int,int);
    void setPart(string);
    void setDescription(string);
    void setQualtity(int);
    void setPrice(int);
    string getPart();
    string getDescription();
    int getQualtity();
    int getPrice();
    int getInvoiceAmount();
private:
    string part;
    string description;
    int qualtity;
    int price;
};
