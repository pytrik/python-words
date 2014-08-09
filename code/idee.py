
# vim: fo-=a foldmethod=marker

#{{{ enumerationes


class Pars :
    names = []
    def __init__ (self, value) :
        self.value = value
    def __repr__ (self) :
        return 'Pars.'+Pars.names[self.value]

def Pars__eq__ (self, alter):
    return (alter is Pars) and (self.value == alter.value)

Pars.__eq__ = Pars__eq__

Pars.substantiva = Pars(0)



# partes orationis -- quis faciendus cum parti commenticia?
Pars = enum ( 'Pars'
    , 'substantiva'
    , 'adiectiva'
    , 'adverbia'
    , 'numeralia'
    , 'pronomina'
    , 'verba'
    , 'praepositiones'
    , 'conjunctiones'
    , 'interiectiones'
   # , 'supinum'
   # , 'participium'
   # , 'praefixum'
   # , 'suffixum'
   # , 'tackon"
   # , 'packon'
    )
Casus = enum ( 'Casus'
    , 'nullus'
    , 'nominativus'
    , 'genitivus'
    , 'dativus'
    , 'accusativus'
    , 'ablativus'
    , 'vocativus'
    , 'locativus'
    )
Genus = enum ( 'Genus'
    , 'nullum'
    , 'masculinum'
    , 'femininum'
    , 'neutrum'
    , 'utrum'
    )
Numerus = enum ( 'Numerus'
    , 'nullus'
    , 'singularis'
    , 'dualis'
    , 'pluralis'
    )
Persona = enum ( 'Persona'
    , 'nulla'
    , 'primus'
    , 'secundus'
    , 'tertius'
    )
Gradus = enum ( 'Gradus'
    , 'nullus'
    , 'positivus'
    , 'comparativus'
    , 'superlativus'
    )
Genus_verbi = enum ( 'verbi'
    , 'nullum'
    , 'activum'
    , 'medium'
    , 'passivum'
    )
Tempus = enum ( 'Tempus'
    , 'nullum'
    , 'praesentia'
    , 'imperfectum'
    , 'futurum'
    , 'perfectum'
    , 'plusquamperfectum'
    , 'futurumperfectum'
    )
Modus = enum ( 'Modus'
    , 'nullus'
    , 'indicativus'
    , 'subiunctivus'
    , 'imperativus'
    , 'infinitivus'
    , 'participium'
    )

#}}}

class Flexio :

    def __init__ (self, pars, ordo1, ordo2, thema) :
        self.pars  = pars
        self.ordo1 = ordo1
        self.ordo2 = ordo2
        self.thema = thema # numero est in Thema.thema[]

    def __eq__ (self, alter) :
        return ( self.pars == alter.pars    and
                 self.ordo1 == alter.ordo1  and
                 self.ordo2 == alter.ordo2  and
                 self.thema == alter.thema )

class Informatio


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
 



