//
// Created by Panji Yudasetya Wiwaha on 6/5/17.
//

#include "secret.h"

// Share library constructor
Secret::Secret() { }

// Share library member functions
const char * Secret::getFirstSecret() { return FIRST_STRING; }
const char * Secret::getSecondSecret() { return SECOND_STRING; }