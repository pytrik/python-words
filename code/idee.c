

#include <stdio.h>

#include <unitypes.h>
#include <unistr.h>
#include <unistdio.h>

// http://archives.nd.edu/whitaker/wordsdoc.htm
// http://www.tutorialspoint.com/cprogramming/c_unions.htm
// https://www.gnu.org/software/libunistring/manual/libunistring.html#unitypes_002eh

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
    struct Flexio * flexio ;
    uint8_t * interpretatio;
};

struct Suffixum
{
    uint8_t * suffixum ;
    struct Flexio * flexio ;
    struct Informatio * informatio ;
};
 
// inventaria concatenata suffixorum et thematum
struct Suffixa
{
    struct Suffixum * suffixum ;
    struct Suffixa  * alter ;
};

struct Themata
{
    struct Thema   * thema ;
    struct Themata * alter ;
};

// Suffixa omnia in Inventarium_suffixorum,
// themata in Inventarium_thematum colligent.
struct Inventarium_suffixorum
{
    struct Suffixa * suffixa ;
    struct Inventarium_suffixorum * dextra ;
    struct Inventarium_suffixorum * sinistra;
};

struct Inventarium_thematum
{
    struct Themata * themata ;
    struct Inventarium_thematum * dextra ;
    struct Inventarium_thematum * sinistra;
};

// Responsum algorithmi coli est inventarium concatenatum.
struct Expositio
{
    struct Thema * thema ;
    struct Suffixum * suffixum ;
    struct Expositio * alter ;
};

// Si suffixa aut themata ordinemus, verba breviora antevertunt.
int ordinare (uint8_t * primus, uint8_t * secundus)
{
    int cmp = u8_strlen (primus) - u8_strlen (secundus) ;
    if ( 0 == cmp )
        return u8_strcmp (primus, secundus) ;
    else
        return cmp ;
};


// we beginnen achteraan het woord, want de stam is korter en met minder

// Inquisitionem incipimus ...
void colum ( struct Inventarium_thematum * themata
           , struct Inventarium_suffixorum * suffixa
           , uint8_t * verbum )
{
};

int main ()
{
    return 0;
};


