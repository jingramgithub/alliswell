//
// NvUtil/NvPublic.h
//

#ifndef _NvPublic_h
#define _NvPublic_h

namespace NvPublic
{
    
    enum NvType
    {
        NV_SINT8      = 1,
        NV_UINT8      = 2,
        NV_SINT16     = 3,
        NV_UINT16     = 4,
        NV_SINT32     = 5,
        NV_UINT32     = 6,
        NV_SINT64     = 7,
        NV_UINT64     = 8,
        NV_FLOAT32    = 9,
        NV_FLOAT64    = 10,
        NV_BOOL       = 11,
        NV_STRING     = 12,
        NV_NVLISTP    = 13,
        NV_TIME       = 14,
        NV_BITSET     = 15,
        NV_RAW        = 16,
        NV_SECURE_RAW = 17,
    };

    const char * convertNvTypeToString( NvPublic::NvType type );

    inline const char* Sint8Str() { return "I8"; }
    inline const char* Uint8Str() { return "U8"; }
    inline const char* Sint16Str() { return "I16"; }
    inline const char* Uint16Str() { return "U16"; }
    inline const char* Sint32Str() { return "I32"; }
    inline const char* Uint32Str() { return "U32"; }
    inline const char* Sint64Str() { return "I64"; }
    inline const char* Uint64Str() { return "U64"; }
    inline const char* Float32Str() { return "F32"; }
    inline const char* Float64Str() { return "F64"; }
    inline const char* BoolStr() { return "B"; }
    inline const char* StringStr() { return "S"; }
    inline const char* NvListStr() { return "NV"; }
    inline const char* TypeStr() { return "T"; }
    inline const char* NameStr() { return "N"; }
    inline const char* TimeStr() { return "TM"; }
    inline const char* BitsetStr() { return "BV"; }
    inline const char* RawStr() { return "H"; }
    inline const char* SecureRawStr() { return "SH"; }

    extern const char* NVUTIL;
    extern const char* OPEN_FAILED;
    extern const char* NOT_ENOUGH_SPACE;
    extern const char* UNKNOWN_TYPE;
    extern const char* TYPE_MISMATCH;
    extern const char* END_OF_NVLIST;
    extern const char* BAD_ENCODING;
    extern const char* VERSION_MISMATCH;
    extern const char* OUT_OF_RANGE;
    
};

#endif  // _NvPublic_h
