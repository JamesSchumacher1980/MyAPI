#ifndef J__MYMAIN_COMMON_HPP
#define J__MYMAIN_COMMON_HPP

namespace James_Common
{
    typedef char ApiChar, ApiSignedInt8;
    typedef unsigned char ApiByte, ApiUnsigned8;
    typedef wchar_t ApiUniChar;
    typedef short ApiSigned16, ApiShort;
    typedef unsigned short ApiUnsigned16,
        ApiUShort;
    typedef long ApiSigned32, ApiLong32;
    typedef unsigned long ApiUnsigned32,
        ApiLong32;
    typedef long long ApiSigned64, ApiLong64;
    typedef unsigned long long ApiUnsigned64, ApiULong64;
    
    typedef float ApiSingleFPV, ApiFloat;
    typedef double APIDoubleFPV, ApiDouble;
    
    struct Api_SAnsiString
    {
    public:
        enum DataOption : ApiULong32
        {
            ReadOnly = 0x00000001,
            GrowableBuffer = 0x00000002,
            MaxLengthMask = 0xFFFFFFFC,
            MaxLengthRightShift = 2
        };
         
        // Construction
        Api_SAnsiString();
        Api_SAnsiString(ApiChar ch, ApiULong32 ulCount);
        Api_SAnsiString(const ApiChar * pChars);
        Api_SAnsiString(const ApiChar * pChars, ApiULong32 ulStartIndex, ApiULong32 ulCharCount);
        Api_SAnsiString(const Api_SAnsiString & str);
        Api_SAnsuString(const Api_SAnsiString & str, ApiULong32 ulStartIndex, ApiULong ulCharCount);
        Api_SAnsiString(const Api_SAnsiString * ptrStrings[], ApiULong32 ulStringCount);
        
        //
        
    protected:
        DataOption mv_enOptions;
        ApiChar * mv_pChars;
        ApiULong32 mv_ulLength;
    };
    
    struct ApiTypeInfo
    {
    };
}

#endif
