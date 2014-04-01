

#include <stdio.h>

#include <unitypes.h>
#include <unistr.h>
#include <unistdio.h>

/**

  unistr.h
  ========

  Verify integrity of the string:
const uint8_t * u8_check (const uint8_t *s, size_t n)

  Comparison:

u8_cmp2 (const uint8_t *s1, size_t n1, const uint8_t *s2, size_t n2)


  Conversion:
uint16_t * u8_to_u16 (const uint8_t *s, size_t n, uint16_t *resultbuf, size_t *lengthp)
uint8_t * u16_to_u8 (const uint16_t *s, size_t n, uint8_t *resultbuf, size_t *lengthp)

  uniconv.h
  =========

<conversions to the surrounding locale>

  unistdio.h
  ==========

https://www.gnu.org/software/libunistring/manual/libunistring.html#unistdio_002eh

uninorm.h -- normalisation


// uninorm.h
// u8_normalize ( UNINORM_NFC, *string, size, *result, *resultsize)

**/

// http://archives.nd.edu/whitaker/wordsdoc.htm
// http://www.tutorialspoint.com/cprogramming/c_unions.htm
//https://www.gnu.org/software/libunistring/manual/libunistring.html#unitypes_002eh



// partes orationis -- quis faciendus cum parti commenticia?
enum Pars
{
    SUBSTANTIVA,
    ADIECTIVA,
    ADVERBIA,
    NUMERALIA,
    PRONOMINA,
    VERBA,
    PRAEPOSITIONES,
    CONJUNCTIONES,
    INTERIECTIONES,
    //SUPINUM;
    //PARTICIPIUM;
    //PRAEFIXUM;
    //SUFFIXUM;
    //"TACKON";
    //"PACKON";
};

enum Casus
{
    CASUS_NULLUS,
    NOMINATIVUS,
    GENITIVUS,
    DATIVUS,
    ACCUSATIVUS,
    ABLATIVUS,
    VOCATIVUS,
    LOCATIVUS
};
enum Genus
{
    GENUS_NULLUM,
    MASCULINUM,
    FEMININUM,
    NEUTRUM,
    UTRUM
};
enum Numerus
{
    NUMERUS_NULLUS,
    SINGULARIS,
    DUALIS,
    PLURALIS
};
enum Persona
{
    PERSONA_NULLA,
    PRIMUS,
    SECUNDUS,
    TERTIUS
};
enum Gradus
{
    GRADUS_NULLUS,
    POSITIVUS,
    COMPARATIVUS,
    SUPERLATIVUS
};
enum Genus_verbi
{
    GENUS_VERBI_NULLUM,
    ACTIVUM,
    MEDIUM,
    PASSIVUM
};
enum Tempus
{
    TEMPUS_NULLUM,
    PRAESENTIA,
    IMPERFECTUM,
    FUTURUM,
    PERFECTUM,
    PLUSQUAMPERFECTUM,
    FUTURUMPERFECTUM
};
enum Modus
{
    MODUS_NULLUS,
    INDICATIVUS,
    SUBIUNCTIVUS,
    IMPERATIVUS,
    INFINITIVUS,
    PARTICIPIUM
};

struct Flexio
{
    enum Pars pars;
    unsigned int ordo1 : 4 ;
    unsigned int ordo2 : 4 ;
    unsigned int thema : 2 ;
};

struct Informatio
{
    enum Casus casus ;
    enum Genus genus ;
    enum Numerus numerus ;
    enum Persona persona ;
    enum Gradus gradus ;
    enum Genus_verbi genus_verbi ;
    enum Tempus tempus ;
    enum Modus modus ;
};

struct Thema
{
    uint8_t * thema[4] ;
    struct * Flexio flexio ;
    uint8_t * interpretatio;
};

struct Suffixum
{
    uint8_t * suffixum ;
    struct * Flexio flexio ;
    struct * Informatio informatio ;
};
 
// hierbeneden: lijsten ipv arrays?

struct Suffixa
{
    uint8_t * pars ;
    uint8_t (*liberi) [26] ;
    struct Suffixum (*suffixa) [] ;
};

struct Themata
{
    uint8_t * pars ;
    uint8_t (*liberi) [26] ;
    struct Thema (*themata) [] ;
};

// responsum algorithmi coli est inventarium concatenatum
struct Expositio
{
    struct * Thema ;
    struct * Suffixum ;
    struct * Expositio alter ;
};


// eerst langste stam en uitgang vinden, dan teruglopen?

void colum (struct Themata themata, struct Suffixa suffixa,
            uint8_t * verbum, struct Expositio * responsum)
{
};

int main ()
{
    return 0;
}



