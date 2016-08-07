// 
// NvUtil/Tnlv.h
//

// Encoding Version
// Magic = 0x5403
//
//   0    1    2    3
//+----+----+----+----+
//| Magic   |  Version|
//-----+----+----+----+
//
//NvList Encoding
//
//Length includes the type and length fields
//
//    0    1    2    3    4    5    6    7       ...        n    n+1
//  +----+----+----+----+----+----+----+----+----+       +----+----+-- ...
//     type   |        length     |name len |   name     |type len | type ...
//
//
// Type sint8    len = 1
// Type uint8    len = 1
// Type sint16   len = 2
// Type uint16   len = 2
// Type sint32   len = 4
// Type uint32   len = 4
// Type sint64   len = 8
// Type uint64   len = 8
// Type float32  len = 4
// Type float64  len = 8
// Type bool     len = 1
//
//    0    1    2    3    4    5    6    7       ...        n    n+1 ...   n+len-1
//  +----+----+----+----+----+----+----+----+----+       +----+----+-- ...   +
//  |  Type   | Name len| Name                         0 | value             | 
//  +----+----+----+----+----+----+----+----+----+       +----+----+-- ...   +
//
//  Type string len = value len
//
//    0    1    2    3    4    5    6    7       ...        n    n+1 ...   n+len-1
//  +----+----+----+----+----+----+----+----+----+       +----+----+-- ...   +
//  |  Type   | Name len| Name                         0 |value len| value .0|  
//  +----+----+----+----+----+----+----+----+----+       +----+----+-- ...   +
//
//  Type Raw len = value len
//
//    0    1    2    3    4    5    6    7       ...        n    n+1 ...   n+len-1
//  +----+----+----+----+----+----+----+----+----+       +----+----+-- ...   +
//  |  Type   | Name len| Name                         0 |value len| value .0|  
//  +----+----+----+----+----+----+----+----+----+       +----+----+-- ...   +
//
//  Type <any new type> len = Value Len ( it will be treated like raw)
//  
//    0    1    2    3    4    5    6    7       ...        n    n+1 ...   n+len-1
//  +----+----+----+----+----+----+----+----+----+       +----+----+-- ...   +
//  |  Type   | Name len| Name                         0 |value len| value .0|  
//  +----+----+----+----+----+----+----+----+----+       +----+----+-- ...   +
//

#ifndef Tnlv_h
#define Tnlv_h

#include <ZSys.h>   //TODO

#pragma pack(push, 1)   // use 1 byte as memory uint for data

const uint32 TNLV_MAGIC                         = 0x5403;
const uint32 TNLV_VERSION_ONE                   = 1;
const uint32 TNLV_MAGIC_VER_LEN
const uint32 TNLV_TYPE_LEN                      = 2;
const uint32 TNLV_NVLIST_HEADER_LEN             = 2 + 4 + 2;
const uint32 TNLV_NVLIST_TYPE_LEN               = 2;
const uint32 TNLV_NV_HEADER_LEN                 = 2 + 2;
const uint32 TNLV_NAME_LEN                      = 2;
const uint32 TNLV_BOOL_LEN                      = 1;
const uint32 TNLV_INT8_LEN                      = 1;
const uint32 TNLV_INT16_LEN                     = 2;
const uint32 TNLV_INT32_LEN                     = 4;
const uint32 TNLV_INT64_LEN                     = 8;
const uint32 TNLV_FLOAT32_LEN                   = 4;
const uint32 TNLV_FLOAT64_LEN                   = 8;
const uint32 TNLV_STRING_LEN                    = 2;
const uint32 TNLV_RAW_LEN                       = 2;

const uint8 TNLV_TRUE                           = 1;
const uint8 TNLV_FALSE                          = 0;

struct TnlvMagicVer
{
    uint16 mMagic;
    uint16 mVersion;
};

struct TnlvNvlHeader
{
    uint16 mType;
    uint32 mLen;
    uint16 mNameLen;
    uint8  mName[1];
};

struct TnlvNvHeader
{
    uint16 mType;
    uint16 mNameLen;
    uint8  mName[1];
};

struct TnlvTypeValue
{
    uint16 mValLen;
    char mValue[1];
};

struct TnlvStrValue
{
    uint16 mValLen;
    char   mValue[1];
};

struct TnlvRawValue
{
    uint16 mValLen;
    uint8  mValue[1];
};

#pragma pack(pop)

#endif
