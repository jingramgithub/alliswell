//
// NvUtil/NvPublic.cpp
//

#include <NvUtil/NvPublic.h>

using namespace NvPublic;

#if __GNUC__ < 3
#define CONST_STRING(str) \
 const char* NvPublic::##str = #str;
#else
#define CONST_STRING_PIECE(x) x
#define CONST_STRING(str) \
    const char* CONST_STRING_PIECE(NvPublic::)CONST_STRING_PIECE(str) = #str;
#endif

CONST_STRING(NVUTIL);
CONST_STRING(OPEN_FAILED);
CONST_STRING(NOT_ENOUGH_SPACE);
CONST_STRING(UNKNOWN_TYPE);
CONST_STRING(TYPE_MISMATCH);
CONST_STRING(END_OF_NVLIST);
CONST_STRING(BAD_ENCODING);
CONST_STRING(VERSION_MISMATCH);
CONST_STRING(OUT_OF_RANGE);

const char * NvPublic::convertNvTypeToString( NvPublic::NvType type )
{
    switch (type)
    {
        case NV_SINT8:
            return "SINT8";
            
        case NV_UINT8:
            return "UINT8";

        case NV_SINT16:
            return "SINT16";

        case NV_UINT16:
            return "UINT16";

        case NV_SINT32:
            return "SINT32";

        case NV_UINT32:
            return "UINT32";

        case NV_UINT64:
            return "UINT64";

        case NV_SINT64:
            return "SINT64";

        case NV_FLOAT32:
            return "FLOAT32";

        case NV_FLOAT64:
            return "FLOAT64";

        case NV_BOOL:
            return "BOOL";

        case NV_STRING:
            return "STRING";

        case NV_NVLISTP:
            return "NVLISTP";

        case NV_NVTIME:
            return "TIME";

        case NV_BITSET:
            return "BITSET";

        case NV_RAW:
            return "RAW";

        case NV_SECURE_RAW:
            return "SECURE_RAW";
    };

    return "UNKNOWN";

}
