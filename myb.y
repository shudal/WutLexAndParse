%{
    #include <stdio.h>
    #include <math.h>
    #include <iostream>
    int yylex();
    void yyerror(char const*);
    extern ofstream fout;
%}

%define api.value.type {int}
%token PILLEGAL //
%token PFINISH //
%token PIDENFR //
%token PINTCON //
%token PCHARCON //
%token PSTRCON //
%token PCONSTTK //const关键字
%token PINTTK //int关键字
%token PCHARTK //char关键字
%token PVOIDTK //void关键字
%token PMAINTK //main关键字
%token PIFTK //if关键字
%token PELSETK //else关键字
%token PDOTK //do关键字
%token PWHILETK //while关键字
%token PFORTK //for关键字
%token PSCANFTK //scanf关键字
%token PPRINTFTK //printf关键字
%token PRETURNTK //return关键字
%token PPLUS //加号
%token PMINU //减号
%token PMULT //乘号
%token PDIV //除号
%token PLSS //小于号
%token PLEQ //小于等于号
%token PGRE //大于号
%token PGEQ //大于等于号
%token PEQL //等于号
%token PNEQ //不等号
%token PASSIGN //赋值号
%token PSEMICN //分号
%token PCOMMA //逗号
%token PLPARENT //左圆括号
%token PRPARENT //右园括号
%token PLBRACK //左方括号
%token PRBRACK //右方括号
%token PLBRACE //左尖括号
%token PRBRACE //右尖括号

%%

Program:
 ConstSayOpt VarSayOpt ProgramFunc MainFunc { fout<<"<程序>\n" ;}
;
ConstSayOpt:
ConstDeclaration
;
VarSayOpt:
VarSay
;
ProgramFunc:
HaveReturnFuncDef
;

NoSignInt:
PINTCON { fout<<"<无符号整数>\n"; }
;
MyInt:
NoSignInt { fout<<"<整数1>\n"; }
| PPLUS NoSignInt
| PMINU NoSignInt { fout<<"<整数2>\n"; }
;

TypeTag:
PINTTK
| PCHARTK
;
ValueType:
MyInt
| PCHARCON
;

ConstDef1:
ConstDef1 PCOMMA PIDENFR PASSIGN ValueType
| PIDENFR PASSIGN ValueType
;
ConstDef:
TypeTag ConstDef1 { fout<<"<常量定义1>\n"; }
;



VarDef:
TypeTag PIDENFR PSEMICN { fout<<"<变量定义>\n" ;}
;
VarSay:
VarDef VarDef { fout<<"<变量说明>\n" ;}
// | VarSay VarDef { fout<<"<变量说明>\n" ;}
;

ConstDeclaration:
PCONSTTK ConstDef PSEMICN { /* fout<<"<常量说明1>\n"; */ }
| ConstDeclaration PCONSTTK ConstDef PSEMICN  {fout<<"<常量说明2>\n"; }
;

SayHeader:
TypeTag PIDENFR {fout<<"<声明头部>\n"; }
;


HaveReturnFuncDef:
SayHeader PLPARENT ParamTable PRPARENT PLBRACE ComSen PRBRACE { fout<<"<有返回值函数定义>\n" ;}
;

ParamTable1:
PCOMMA TypeTag PIDENFR
| ParamTable1 PCOMMA TypeTag PIDENFR
;
ParamTable:
TypeTag PIDENFR ParamTable1 { fout<<"<参数表>\n" ;}
;
ComSen:
SenList { fout<<"<复合语句>\n" ;}
;
SenList:
Sen
| SenList Sen { fout<<"<语句列>\n" ;}
;
Sen:
ReturnSen  { fout<<"<语句1>\n" ;}
| AssignSen { fout<<"<语句2>\n" ;}
| PrintSen { fout<<"<语句-print>\n" ;}
;
AssignSen:
 PIDENFR PASSIGN EXP PSEMICN { fout<<"<赋值语句>\n" ;}
;

ValueTable1:
PCOMMA EXP
| ValueTable1 PCOMMA EXP
;
ValueTable:
EXP ValueTable1 { fout<<"<值参数表>\n" ;}
;
CallHavingReturn:
PIDENFR PLPARENT ValueTable PRPARENT { fout<<"<有返回值函数调用语句>\n" ;}
;

Factor:
PIDENFR { fout<<"<因子1>\n" ;}
| CallHavingReturn { fout<<"<因子2>\n" ;}
| MyInt { fout<<"<因子3>\n" ;}
;
Xiang:
Factor { fout<<"<项>\n" ;}
;
EXP:
Xiang  { fout<<"<表达式1>\n" ;}
| Xiang PPLUS Xiang { fout<<"<表达式2>\n" ;}
;


ReturnSen:
PRETURNTK PLPARENT EXP PRPARENT PSEMICN  { fout<<"<<返回语句>>\n" ;}
;

MainFunc:
PVOIDTK PMAINTK PLPARENT PRPARENT PLBRACE ComSen PRBRACE { fout<<"<主函数>\n" ;}
;

PrintSen1:
STR
| EXP
;
PrintSen:
PPRINTFTK PLPARENT PrintSen1 PRPARENT PSEMICN { fout<<"<写语句>\n" ;}
;
STR:
PSTRCON { fout<<"<字符串>\n" ;}
;

%%


