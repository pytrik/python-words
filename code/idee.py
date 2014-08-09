

class enum :
    def __init__ (self, *init):
        i = 0
        for arg in init :
            self.__dict__ [arg] = i
            i = i + 1

# Partes orationis -- quis faciendus cum parti commenticia?
Pars = enum
    ( 'SUBSTANTIVA'
    , 'ADIECTIVA'
    , 'ADVERBIA'
    , 'NUMERALIA'
    , 'PRONOMINA'
    , 'VERBA'
    , 'PRAEPOSITIONES'
    , 'CONJUNCTIONES'
    , 'INTERIECTIONES'
   # , 'SUPINUM'
   # , 'PARTICIPIUM'
   # , 'PRAEFIXUM'
   # , 'SUFFIXUM'
   # , 'TACKON"
   # , 'PACKON'
    )
Casus = enum
    ( 'NULLUS'
    , 'NOMINATIVUS'
    , 'GENITIVUS'
    , 'DATIVUS'
    , 'ACCUSATIVUS'
    , 'ABLATIVUS'
    , 'VOCATIVUS'
    , 'LOCATIVUS'
    )
Genus = enum
    ( 'NULLUM'
    , 'MASCULINUM'
    , 'FEMININUM'
    , 'NEUTRUM'
    , 'UTRUM'
    )
Numerus = enum
    ( 'NULLUS'
    , 'SINGULARIS'
    , 'DUALIS'
    , 'PLURALIS'
    )
Persona = enum
    ( 'NULLA'
    , 'PRIMUS'
    , 'SECUNDUS'
    , 'TERTIUS'
    )
Gradus = enum
    ( 'NULLUS'
    , 'POSITIVUS'
    , 'COMPARATIVUS'
    , 'SUPERLATIVUS'
    )
Genus_verbi = enum
    ( 'NULLUM'
    , 'ACTIVUM'
    , 'MEDIUM'
    , 'PASSIVUM'
    )
Tempus = enum
    ( 'NULLUM'
    , 'PRAESENTIA'
    , 'IMPERFECTUM'
    , 'FUTURUM'
    , 'PERFECTUM'
    , 'PLUSQUAMPERFECTUM'
    , 'FUTURUMPERFECTUM'
    )
Modus = enum
    ( 'NULLUS'
    , 'INDICATIVUS'
    , 'SUBIUNCTIVUS'
    , 'IMPERATIVUS'
    , 'INFINITIVUS'
    , 'PARTICIPIUM'
    )







