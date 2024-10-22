grammar Grammar;
start
    : stylesheet
    ;
stylesheet
    : OsqCHARSET_SYM_STRING_SEMICsq_1 ' ' OsqS_OR_CDO_OR_CDCCsq_1 ' ' OsqXimportX_CDO_S_OR_CDC_SCsq_1 ' ' Osqstylesheet_closing_GROUPINGCsq_1
    ;
OsqCHARSET_SYM_STRING_SEMICsq
    : CHARSET_SYM ' ' STRING ' ;'
    ;
OsqS_OR_CDO_OR_CDCCsq
    : Sp
    |CDO
    |CDC
    ;
OsqXimportX_CDO_S_OR_CDC_SCsq
    : XimportX ' ' OsqCDO_S_OR_CDC_SCsq_1
    ;
OsqCDO_S_OR_CDC_SCsq
    : CDO ' ' Ss
    |CDC ' ' Ss
    ;
Osqruleset_OR_media_OR_pageCsq
    : ruleset
    |media
    |page
    ;
Osqstylesheet_closing_GROUPINGCsq
    : Osqruleset_OR_media_OR_pageCsq ' ' OsqCDO_S_OR_CDC_SCsq_2
    ;
XimportX
    : IMPORT_SYM ' ' Ss ' ' OsqSTRING_OR_URICsq ' ' Ss ' ' media_list_1 ' ; ' Ss
    ;
OsqSTRING_OR_URICsq
    : STRING
    |URI
    ;
media
    : MEDIA_SYM ' ' Ss ' ' media_list ' { ' Ss ' ' ruleset_1 ' } ' Ss
    ;
media_list
    : medium ' ' OsqCOMMA_S_mediumCsq_1
    ;
OsqCOMMA_S_mediumCsq
    : ', ' Ss ' ' medium
    ;
medium
    : IDENT ' ' Ss
    ;
page
    : PAGE_SYM ' ' Ss ' ' pseudo_page_1 ' { ' Ss ' ' declaration_1 ' ' OsqSEMI_S_declarationCsq_1 ' } ' Ss
    ;
OsqSEMI_S_declarationCsq
    : '; ' Ss ' ' declaration_2
    ;
pseudo_page
    : ': ' IDENT ' ' Ss
    ;
operator
    : '/ ' Ss
    |', ' Ss
    ;
combinator
    : '+ ' Ss
    |'> ' Ss
    ;
unary_operator
    : '-'
    |'+'
    ;
property
    : IDENT ' ' Ss
    ;
ruleset
    : selector ' ' COMMA_S_selector_1 ' { ' Ss ' ' declaration_3 ' ' OsqSEMI_S_declarationCsq_2 ' } ' Ss
    ;
COMMA_S_selector
    : ', ' Ss ' selector'
    ;
selector
    : simple_selector ' ' Osqcombinator_selector_OR_SCsq_1
    ;
Osqcombinator_selectorCsq
    : combinator_1 ' ' selector
    ;
Osqcombinator_selector_OR_SCsq
    : combinator ' ' selector
    |Sp ' ' Osqcombinator_selectorCsq_1
    ;
simple_selector
    : element_name ' ' OsqHASH_OR_XclassX_OR_attrib_OR_pseudoCsq_1
    |OsqHASH_OR_XclassX_OR_attrib_OR_pseudoCsq_2
    ;
OsqHASH_OR_XclassX_OR_attrib_OR_pseudoCsq
    : HASH
    |XclassX
    |attrib
    |pseudo
    ;
XclassX
    : '.' IDENT
    ;
element_name
    : IDENT
    |'*'
    ;
attrib
    : '[ ' Ss ' ' IDENT ' ' Ss ' ' Osqattrib_GROUPINGCsq_1 ' ]'
    ;
OsqEQUAL_OR_INCLUDES_OR_DASHMATCHCsq
    : '='
    |INCLUDES
    |DASHMATCH
    ;
OsqIDENT_OR_STRINGCsq
    : IDENT
    |STRING
    ;
Osqattrib_GROUPINGCsq
    : OsqEQUAL_OR_INCLUDES_OR_DASHMATCHCsq ' ' Ss ' ' OsqIDENT_OR_STRINGCsq ' ' Ss
    ;
pseudo
    : ': ' OsqIDENT_OR_FUNCTIONCsq
    ;
OsqIDENT_OR_FUNCTIONCsq
    : IDENT
    |FUNCTION ' ' Ss ' ' OsqIDENT_SCsq_1 ' )'
    ;
OsqIDENT_SCsq
    : IDENT ' ' Ss
    ;
declaration
    : property ' : ' Ss ' ' expr ' ' prio_1
    ;
prio
    : IMPORT_SYM ' ' Ss
    ;
expr
    : term ' ' Osqoperator_termCsq_1
    ;
Osqoperator_termCsq
    : operator_1 ' ' term
    ;
term
    : unary_operator_1 ' ' Osqterm_GROUPINGCsq
    |STRING ' ' Ss
    |IDENT ' ' Ss
    |URI ' ' Ss
    |hexcolor
    |function
    ;
Osqterm_GROUPINGCsq
    : NUMBER ' ' Ss
    |PERCENTAGE ' ' Ss
    |LENGTH ' ' Ss
    |EMS ' ' Ss
    |EXS ' ' Ss
    |ANGLE ' ' Ss
    |TIME ' ' Ss
    |FREQ ' ' Ss
    ;
function
    : FUNCTION ' ' Ss ' ' expr ' ) ' Ss
    ;
hexcolor
    : '#' Osqthree_char_HEXCsq ' ' Ss
    |'#' Osqsix_char_HEXCsq ' ' Ss
    ;
Osqthree_char_HEXCsq
    : HEX_CHAR HEX_CHAR HEX_CHAR
    ;
Osqsix_char_HEXCsq
    : HEX_CHAR HEX_CHAR HEX_CHAR HEX_CHAR HEX_CHAR HEX_CHAR
    ;
HEX_CHAR
    : '0'
    |'1'
    |'2'
    |'3'
    |'4'
    |'5'
    |'6'
    |'7'
    |'8'
    |'9'
    |'a'
    |'b'
    |'c'
    |'d'
    |'e'
    |'f'
    ;
Sp
    : WHITESPACE_1
    ;
Ss
    : WHITESPACE_2
    ;
So
    : 
    |WHITESPACE
    ;
CDO
    : '<!--'
    ;
CDC
    : '-->'
    ;
INCLUDES
    : '~='
    ;
DASHMATCH
    : '|='
    ;
STRING
    : string1
    |string2
    ;
IDENT
    : ObridentCbr
    ;
HASH
    : '#' ObrnameCbr
    ;
IMPORT_SYM
    : '@import'
    ;
PAGE_SYM
    : '@page'
    ;
MEDIA_SYM
    : '@media'
    ;
CHARSET_SYM
    : '@charset'
    ;
EMS
    : ObrnumCbr 'em'
    ;
EXS
    : ObrnumCbr 'ex'
    ;
LENGTH
    : ObrnumCbr 'px'
    |ObrnumCbr 'cm'
    |ObrnumCbr 'mm'
    |ObrnumCbr 'in'
    |ObrnumCbr 'pt'
    |ObrnumCbr 'pc'
    ;
ANGLE
    : ObrnumCbr 'deg'
    |ObrnumCbr 'rad'
    |ObrnumCbr 'grad'
    ;
TIME
    : ObrnumCbr 'ms'
    |ObrnumCbr 's'
    ;
FREQ
    : ObrnumCbr 'hz'
    |ObrnumCbr 'khz'
    ;
PERCENTAGE
    : ObrnumCbr '%'
    ;
NUMBER
    : ObrnumCbr
    ;
URI
    : 'url("' So url So '")'
    |'url("' So STRING So '")'
    ;
url
    : url__1
    ;
url_
    : '!'
    |'#'
    |'$'
    |'%'
    |'&'
    |'*'
    |'-'
    |'~'
    |escape
    ;
FUNCTION
    : ObridentCbr '('
    ;
string1
    : '"' qmychars1_1 '"'
    ;
string2
    : '\'' qmychars2_1 '\''
    ;
qnonl1
    : '7'
    |'Q'
    |'J'
    |'@'
    |'2'
    |'g'
    |'\t'
    |'X'
    |'`'
    |'G'
    |'e'
    |'['
    |'?'
    |'v'
    |'$'
    |'j'
    |'K'
    |'d'
    |'A'
    |'n'
    |'h'
    |'l'
    |'4'
    |'D'
    |'a'
    |'#'
    |'f'
    |'y'
    |'B'
    |'U'
    |'P'
    |'3'
    |'O'
    |'S'
    |')'
    |' '
    |'W'
    |'o'
    |'b'
    |'|'
    |'q'
    |'L'
    |']'
    |'V'
    |'*'
    |'z'
    |'}'
    |'6'
    |'u'
    |'^'
    |','
    |'N'
    |'>'
    |'+'
    |'Y'
    |'t'
    |'k'
    |'!'
    |'p'
    |'Z'
    |'E'
    |'('
    |'\\'
    |'<'
    |'F'
    |'%'
    |'9'
    |'0'
    |'s'
    |';'
    |'&'
    |'C'
    |'T'
    |'r'
    |'5'
    |'R'
    |'\''
    |'_'
    |'.'
    |'8'
    |'H'
    |'i'
    |'/'
    |'M'
    |'~'
    |'{'
    |':'
    |'c'
    |'I'
    |'-'
    |''
    |'1'
    |'w'
    |'x'
    |'m'
    |'='
    ;
qnonl2
    : '7'
    |'Q'
    |'J'
    |'@'
    |'2'
    |'g'
    |'\t'
    |'X'
    |'`'
    |'G'
    |'e'
    |'['
    |'?'
    |'v'
    |'$'
    |'j'
    |'K'
    |'d'
    |'A'
    |'n'
    |'h'
    |'l'
    |'4'
    |'D'
    |'a'
    |'#'
    |'f'
    |'y'
    |'B'
    |'U'
    |'P'
    |'3'
    |'O'
    |'S'
    |')'
    |' '
    |'W'
    |'o'
    |'b'
    |'|'
    |'q'
    |'L'
    |']'
    |'V'
    |'*'
    |'z'
    |'}'
    |'6'
    |'u'
    |'^'
    |','
    |'N'
    |'>'
    |'+'
    |'Y'
    |'t'
    |'k'
    |'!'
    |'p'
    |'Z'
    |'E'
    |'('
    |'\\'
    |'<'
    |'F'
    |'%'
    |'9'
    |'0'
    |'s'
    |';'
    |'&'
    |'C'
    |'T'
    |'r'
    |'5'
    |'"'
    |'R'
    |'_'
    |'.'
    |'8'
    |'H'
    |'i'
    |'/'
    |'M'
    |'~'
    |'{'
    |':'
    |'c'
    |'I'
    |'-'
    |''
    |'1'
    |'w'
    |'x'
    |'m'
    |'='
    ;
qmychars1
    : qnonl1
    |'\\' nl
    |escape
    ;
qmychars2
    : qnonl2
    |'\\' nl
    |escape
    ;
nl
    : '\r'
    |'\n'
    |''
    |'\r\n'
    ;
escape
    : '\\' echar
    ;
echar
    : 'Q'
    |'J'
    |'@'
    |'g'
    |'\t'
    |'X'
    |'`'
    |'G'
    |'['
    |'?'
    |'v'
    |'$'
    |'j'
    |'K'
    |'A'
    |'n'
    |'h'
    |'l'
    |'D'
    |'#'
    |'y'
    |'B'
    |'U'
    |'P'
    |'O'
    |'S'
    |')'
    |' '
    |'W'
    |'o'
    |'|'
    |'q'
    |'L'
    |']'
    |'V'
    |'*'
    |'z'
    |'}'
    |'u'
    |'^'
    |','
    |'N'
    |'>'
    |'+'
    |'Y'
    |'t'
    |'k'
    |'!'
    |'p'
    |'Z'
    |'E'
    |'('
    |'\\'
    |'<'
    |'F'
    |'%'
    |'s'
    |';'
    |'&'
    |'C'
    |'T'
    |'r'
    |'"'
    |'R'
    |'\''
    |'_'
    |'.'
    |'H'
    |'i'
    |'/'
    |'M'
    |'~'
    |'{'
    |':'
    |'I'
    |'-'
    |''
    |'w'
    |'x'
    |'m'
    |'='
    ;
ObridentCbr
    : minus_1 nmstart nmchar_1
    ;
nmstart
    : 'a'
    |'b'
    |'c'
    |'d'
    |'e'
    |'f'
    |'g'
    |'h'
    |'i'
    |'j'
    |'k'
    |'l'
    |'m'
    |'n'
    |'o'
    |'p'
    |'q'
    |'r'
    |'s'
    |'t'
    |'u'
    |'v'
    |'w'
    |'x'
    |'y'
    |'z'
    |escape
    |'_'
    ;
nmchar
    : 'a'
    |'b'
    |'c'
    |'d'
    |'e'
    |'f'
    |'g'
    |'h'
    |'i'
    |'j'
    |'k'
    |'l'
    |'m'
    |'n'
    |'o'
    |'p'
    |'q'
    |'r'
    |'s'
    |'t'
    |'u'
    |'v'
    |'w'
    |'x'
    |'y'
    |'z'
    |'0'
    |'1'
    |'2'
    |'3'
    |'4'
    |'5'
    |'6'
    |'7'
    |'8'
    |'9'
    |escape
    |'_'
    |'-'
    ;
minus
    : '-'
    ;
ObrnameCbr
    : nmchar_2
    ;
ObrnumCbr
    : INTEGER
    ;
WHITESPACE
    : ' '
    |'\t'
    ;
INTEGER
    : DIGIT INTEGER
    |DIGIT
    ;
DIGIT
    : '0'
    |'1'
    |'2'
    |'3'
    |'4'
    |'5'
    |'6'
    |'7'
    |'8'
    |'9'
    ;
OsqCHARSET_SYM_STRING_SEMICsq_1
    : 
    |OsqCHARSET_SYM_STRING_SEMICsq
    ;
OsqS_OR_CDO_OR_CDCCsq_1
    : 
    |OsqS_OR_CDO_OR_CDCCsq OsqS_OR_CDO_OR_CDCCsq_1
    ;
OsqXimportX_CDO_S_OR_CDC_SCsq_1
    : 
    |OsqXimportX_CDO_S_OR_CDC_SCsq OsqXimportX_CDO_S_OR_CDC_SCsq_1
    ;
Osqstylesheet_closing_GROUPINGCsq_1
    : 
    |Osqstylesheet_closing_GROUPINGCsq Osqstylesheet_closing_GROUPINGCsq_1
    ;
OsqCDO_S_OR_CDC_SCsq_1
    : 
    |OsqCDO_S_OR_CDC_SCsq OsqCDO_S_OR_CDC_SCsq_1
    ;
OsqCDO_S_OR_CDC_SCsq_2
    : 
    |OsqCDO_S_OR_CDC_SCsq OsqCDO_S_OR_CDC_SCsq_2
    ;
media_list_1
    : 
    |media_list
    ;
ruleset_1
    : 
    |ruleset ruleset_1
    ;
OsqCOMMA_S_mediumCsq_1
    : 
    |OsqCOMMA_S_mediumCsq OsqCOMMA_S_mediumCsq_1
    ;
pseudo_page_1
    : 
    |pseudo_page
    ;
declaration_1
    : 
    |declaration
    ;
OsqSEMI_S_declarationCsq_1
    : 
    |OsqSEMI_S_declarationCsq OsqSEMI_S_declarationCsq_1
    ;
declaration_2
    : 
    |declaration
    ;
COMMA_S_selector_1
    : 
    |COMMA_S_selector COMMA_S_selector_1
    ;
declaration_3
    : 
    |declaration
    ;
OsqSEMI_S_declarationCsq_2
    : 
    |OsqSEMI_S_declarationCsq OsqSEMI_S_declarationCsq_2
    ;
Osqcombinator_selector_OR_SCsq_1
    : 
    |Osqcombinator_selector_OR_SCsq
    ;
combinator_1
    : 
    |combinator
    ;
Osqcombinator_selectorCsq_1
    : 
    |Osqcombinator_selectorCsq
    ;
OsqHASH_OR_XclassX_OR_attrib_OR_pseudoCsq_1
    : 
    |OsqHASH_OR_XclassX_OR_attrib_OR_pseudoCsq OsqHASH_OR_XclassX_OR_attrib_OR_pseudoCsq_1
    ;
OsqHASH_OR_XclassX_OR_attrib_OR_pseudoCsq_2
    : OsqHASH_OR_XclassX_OR_attrib_OR_pseudoCsq
    |OsqHASH_OR_XclassX_OR_attrib_OR_pseudoCsq OsqHASH_OR_XclassX_OR_attrib_OR_pseudoCsq_2
    ;
Osqattrib_GROUPINGCsq_1
    : 
    |Osqattrib_GROUPINGCsq
    ;
OsqIDENT_SCsq_1
    : 
    |OsqIDENT_SCsq
    ;
prio_1
    : 
    |prio
    ;
Osqoperator_termCsq_1
    : 
    |Osqoperator_termCsq Osqoperator_termCsq_1
    ;
operator_1
    : 
    |operator
    ;
unary_operator_1
    : 
    |unary_operator
    ;
WHITESPACE_1
    : WHITESPACE
    |WHITESPACE WHITESPACE_1
    ;
WHITESPACE_2
    : 
    |WHITESPACE WHITESPACE_2
    ;
url__1
    : 
    |url_ url__1
    ;
qmychars1_1
    : 
    |qmychars1 qmychars1_1
    ;
qmychars2_1
    : 
    |qmychars2 qmychars2_1
    ;
minus_1
    : 
    |minus
    ;
nmchar_1
    : 
    |nmchar nmchar_1
    ;
nmchar_2
    : nmchar
    |nmchar nmchar_2
    ;
