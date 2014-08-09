

#include <stdio.h>

#include <unitypes.h>
#include <unistr.h>
#include <unistdio.h>

// http://archives.nd.edu/whitaker/wordsdoc.htm
// http://www.tutorialspoint.com/cprogramming/c_unions.htm
// https://www.gnu.org/software/libunistring/manual/libunistring.html#unitypes_002eh

// Partes orationis -- quis faciendus cum parti commenticia?
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
    unsigned int thema : 2 ; // numero est in Thema.thema[]
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
 
// Inventaria concatenata suffixorum et thematum
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
    uint8_t * suffixum ;
    struct Suffixa * suffixa ;
    struct Inventarium_suffixorum * liberi [] ;
};

struct Inventarium_thematum
{
    uint8_t * thema ;
    struct Themata * themata ;
    struct Inventarium_thematum * liberi [] ;
};

/* handige links:
http://stackoverflow.com/questions/308695/c-string-concatenation (linunistring: u8_strcat)
http://www.gnu.org/software/libunistring/manual/libunistring.html#Elementary-string-functions
https://etherpad.wikimedia.org (voor samenwerken)
int u8_strmblen (const uint8_t *s)
    Geeft de lengte van het eerste teken in bytes.
int u8_strmbtouc (ucs4_t *puc, const uint8_t *s)
    Idem, maar zet het teken in *puc, 0 voor NUL, -1 voor een fout
*/


// Haec functio ex verbo converso inventarium concatenatum suffixorum dat
void enumera_suffixa ( uint8_t * mubrev    // verbum conversum
                     , Inventarium_suffixorum * inventarium
                     , Suffixa * expositio_suffixa // ab initio vacuo
                     , Themata * expositio_themata // ab initio vacuo
                     )
{

    // dit is van de vorige keer, en dus verkeerd
    int differens = ordinare(suffixum, inventarium->suffixum);
    if (0 == differens)
        suffixum += 1letter
        expositio += whatever er matchde
        if ( 0 >= ordinare(suffixum, inventarium->sinistra->suffixum) )
            enumera_suffix(verbum
                           , inventarium->sinistra
                           , expositio
                           , suffixum)
        else
            enumera_suffix(verbum
                           , inventarium->dextra
                           , expositio
                           , suffixum)
        elseif (0 < differens)
            unknown
    else
    
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


// Inquisitionem incipimus ab termino verbi, quoniam thema brevior sit.
void colum ( struct Inventarium_thematum * themata
           , struct Inventarium_suffixorum * suffixa
           , uint8_t * verbum )
{
};

int main ()
{
    return 0;
};


