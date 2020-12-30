
#include "Lexical_analysis.h"
//#include "Grammar_analysis.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "myb.tab.c"

using namespace std;

ofstream fout;
Lexical_analysis *la;
int main() {
    ifstream fin;
    fin.open("testfile.txt");
    fout.open("output.txt");
    if (!fin.is_open() || !fout.is_open()) {
        cerr << "err: cannot open file: "<< endl;
        cerr << "Please check the path and file name." << endl;
        return 0;
    }
    Lexical_analysis &lexical_analysis = Lexical_analysis::initialLexicalanalysis(fin,fout);
    la = &lexical_analysis;

    int x = 2;
    if (x == 1) {
        while (lexical_analysis.getSymbol() != FINISH) {
            //cout<<lexical_analysis.getSymbol()<<endl;
            lexical_analysis.nextSymbol();
        }
    }  else {
        while (lexical_analysis.getSymbol() != FINISH) {
            yyparse();
        }
        //yyparse();
        fout.close();
    }
}

int yylex() {
    int ans = la->getSymbol();
    if (ans == FINISH) {
        ans = YYSYMBOL_YYEOF;
    } else {
        la->nextSymbol();
    }
    return ans;
}

void yyerror(char const* s) {
    fout<<s<<endl;
}