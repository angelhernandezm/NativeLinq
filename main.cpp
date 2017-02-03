//
// Created by angel on 01/02/17.
//


#include "CommonHeaders.h"
#include "Contact.h"
#include "LinqCore.h"

int main() {
    // We set up some test data
    int numbersArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector<float> grades {12.75, 14.32, 16.76, 18.22};

    std::vector<Contact> contacts {Contact(1, "John", "Doe", "01/01/1985", "john.doe@gmail.com"),
                                   Contact(2, "Matt", "Roberts", "07/07/1975", "mattr@hotmail.com"),
                                   Contact(3, "Jane", "Doe", "07/10/1980", "janed@hotmail.com")};

    Contact contactsArray[]  = {Contact(1, "Joe", "Bloggs", "10/10/1980", "joe@bloggs.com"),
                                Contact(2, "Karly", "Smith", "05/05/1980", "karlys@gmail.com"),
                                Contact(3, "Michael", "White", "05/05/1980", "michael@gmail.com")};

    // Where method
    auto where = LinqCore<Contact>::Where(contacts, [&](Contact c) -> bool {return c.LastName == "Doe";});

    // Average method
    auto average = LinqCore<float>::Average(grades);

    // Sum method
    auto sum = LinqCore<float>::Sum(grades);

    // Cast into std::vector<Contact>
    auto castContact = LinqCore<Contact>::Cast(contactsArray, 3);

    // Cast into std::vector<int>
    auto castInt = LinqCore<int>::Cast(numbersArray, 10);

    // Count method
    auto count = LinqCore<Contact>::Count(contacts, [&](Contact c) -> bool {return c.LastName == "Doe";});

    // Max method
    auto max = LinqCore<int>::Max(castInt);

    // Min method
    auto min = LinqCore<int>::Min(castInt);

    getchar();

    return 0;
}