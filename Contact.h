//
// Created by angel on 01/02/17.
//

#ifndef NATIVELINQ_CONTACT_H
#define NATIVELINQ_CONTACT_H

#include "CommonHeaders.h"

class Contact {
public:
    int ContactId;
    std::string FirstName;
    std::string LastName;
    std::string DoBAsString;
    std::string Email;

    Contact(){}

    Contact(int contactId, std::string firstname, std::string lastname, std::string dobAsStr, std::string email ) {
        ContactId = contactId;
        FirstName = firstname;
        LastName = lastname;
        DoBAsString = dobAsStr;
        Email = email;
    }

};


#endif //NATIVELINQ_CONTACT_H
