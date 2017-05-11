//
// Created by Ahmed Yakout on 5/10/17.
//

#ifndef SIC_ASSEMBLER_BYTE_DIRECTIVE_H
#define SIC_ASSEMBLER_BYTE_DIRECTIVE_H

#include <string>
#include <directives/directive.h>

class byte_directive: public directive {
public:
    byte_directive(std::string);
    virtual void handle();
};


#endif