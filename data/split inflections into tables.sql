SELECT col1, COUNT(col1), COUNT(DISTINCT col1)
     , COUNT(col2)
     , COUNT(col3)
     , COUNT(col4)
     , COUNT(col5)
     , COUNT(col6)
     , COUNT(col7)
     , COUNT(col8)
     , COUNT(col9)
     , COUNT(col10)
     , COUNT(col11)
     , COUNT(col12)
     , COUNT(col13)
     , COUNT(col14)
FROM inflections
GROUP BY col1;

-- Verbum
CREATE TABLE IF NOT EXISTS verbum (
    part varchar(10)
  , conjugation integer
  , variant integer
  , tense varchar(4)
  , voice varchar(7)
  , mood varchar(3)
  , person integer
  , number char(1)
  , stem integer
  , size integer
  , ending varchar(10)
  , age char(1)
  , freq char(1)
);

TRUNCATE verbum;

INSERT INTO verbum
SELECT col1
     , col2::integer
     , col3::integer
     , col4
     , col5
     , col6
     , col7::integer
     , col8
     , col9::integer
     , col10::integer
     , CASE WHEN col10 = '0' THEN NULL ELSE col11 END
     , CASE WHEN col10 = '0' THEN col11 ELSE col12 END
     , CASE WHEN col10 = '0' THEN col12 ELSE col13 END
FROM inflections inf
WHERE col1 = 'V';

SELECT * FROM verbum WHERE size = 0;

-- nomen

CREATE TABLE IF NOT EXISTS nomen (
    part varchar(10)
  , categorie integer
  , subcategorie integer
  , naamval varchar(3)
  , getal char(1)
  , geslacht char(1)
  , stem integer
  , size integer
  , ending varchar(10)
  , age char(1)
  , voorkomen char(1)
);

TRUNCATE nomen;

INSERT INTO nomen
SELECT col1
     , col2::integer
     , col3::integer
     , col4
     , col5
     , col6
     , col7::integer
     , col8::integer
     , CASE WHEN col8 = '0' THEN NULL ELSE col9 END
     , CASE WHEN col8 = '0' THEN col9 ELSE col10 END
     , CASE WHEN col8 = '0' THEN col10 ELSE col11 END
FROM inflections
WHERE col1= 'N';

SELECT *
FROM inflections 
WHERE col1 = 'N' AND col11 = 'I';

SELECT *
FROM nomen
WHERE size = 0;