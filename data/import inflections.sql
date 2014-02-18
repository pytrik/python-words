-- DROP TABLE inflections;

CREATE TABLE inflections
(
    col1 varchar(10)
  , col2 varchar(10)
  , col3 varchar(10)
  , col4 varchar(10)
  , col5 varchar(10)
  , col6 varchar(10)
  , col7 varchar(10)
  , col8 varchar(10)
  , col9 varchar(10)
  , col10 varchar(10)
  , col11 varchar(10)
  , col12 varchar(10)
  , col13 varchar(10)
  , col14 varchar(10)
)
WITH (
  OIDS=FALSE
);
ALTER TABLE inflections
  OWNER TO postgres;

COPY inflections FROM 'D:\git_repos\python-words\data\stripped-inflects.lat.edit'
WITH NULL '';