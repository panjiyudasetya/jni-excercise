//
// Created by Panji Yudasetya Wiwaha on 6/5/17.
//

#ifndef JNIEXAMPLE_SECRET_H
#define JNIEXAMPLE_SECRET_H

class Secret {
private :
    const char *FIRST_STRING = "first string";
    const char *SECOND_STRING = "second string";

public :
    Secret();
    const char *getFirstSecret();
    const char *getSecondSecret();
};

#endif //JNIEXAMPLE_SECRET_H
