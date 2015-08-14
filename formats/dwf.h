#ifndef DWF_H
#define DWF_H


#include "format.h"



class Dwf : public Format
{
public:
    using Format::Format;

    size_t Leanify(size_t size_leanified = 0);

    static const unsigned char header_magic[16];
};



#endif