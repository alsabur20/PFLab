#include <iostream>
using namespace std;

float transportationCost(float budget, int noOfPeople);
float ticketCosts(string category, int noOfPeople);
main()
{
    float budget, transportCost, remainingCost, costOfTickets, moneysaved, moneyneeded;
    string category;
    int noOfPeople;

    cout << "Enter the Budget: ";
    cin >> budget;
    cout << "Enter Category: ";
    cin >> category;
    cout << "Enter number of people in the group: ";
    cin >> noOfPeople;

    transportCost = transportationCost(budget, noOfPeople);
    costOfTickets = ticketCosts(category, noOfPeople);
    remainingCost = budget - transportCost;

    if (costOfTickets < remainingCost)
    {
        moneysaved = remainingCost - costOfTickets;
        cout << "Yes! You have " << moneysaved << " QR Left." << endl;
    }
    else
    {
        moneyneeded = costOfTickets - remainingCost;
        cout << "Not enough money! You need " << moneyneeded << " QR." << endl;
    }
}

float transportationCost(float budget, int noOfPeople)
{
    float transportCost;
    if (noOfPeople >= 1 && noOfPeople <= 4)
    {
        transportCost = budget * 0.75;
    }
    else if (noOfPeople >= 5 && noOfPeople <= 9)
    {
        transportCost = budget * 0.60;
    }
    else if (noOfPeople >= 10 && noOfPeople <= 24)
    {
        transportCost = budget * 0.50;
    }
    else if (noOfPeople >= 25 && noOfPeople <= 49)
    {
        transportCost = budget * 0.40;
    }
    else
    {
        transportCost = budget * 0.25;
    }
    return transportCost;
}

float ticketCosts(string category, int noOfPeople)
{
    float ticketCosts;
    if (category == "VIP")
    {
        ticketCosts = 499.99 * noOfPeople;
    }
    else if(category == "Normal")
    {
        ticketCosts = 249.99 * noOfPeople;
    }
    return ticketCosts;
}
