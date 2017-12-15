// collection of some functions we might need for the visualisation of PicoC
// not fully tested


#include "picoc.h" // this already includes many powerful standard libs like string.h or math.h

// remember to malloc and free all the resources you need to use the following char* functions 
extern char* getRetDetails(char* to, struct ParseState *Parser); //done

extern char* getRunningMode(char* to, struct ParseState *Parser); //done

extern char* getFileName(char* to, struct ParseState *Parser); //done

extern char* getLocalVarAndVal(char* to, struct ParseState *Parser); // TBD!!

extern char* getGlobalVarAndVal(char* to, struct ParseState *Parser); // TBD!!

extern char* getLineAsString(char* to,struct ParseState *Parser); //done

extern char* getNumParamAsString(char* to, struct ParseState *Parser); //done

extern char* getScopeIDAsString(char* to, struct ParseState *Parser); //done

//these are only adresses, do not try to read further imformations related to this addresses
extern void* get_HeapBottom(struct ParseState *Parser); //done

extern void* get_HeapStackTop(struct ParseState *Parser);//done	

extern void* get_StackFrame(struct ParseState *Parser);//done

//before we actually "run" code, TopStackFrame will be NULL
extern struct StackFrame* get_TopStackFrame(struct ParseState *Parser); //done

//if there is no ProviousStackFrame return will be NULL!!
extern struct StackFrame* get_PreviousStackFrame(struct ParseState *Parser); //done

//return int
extern int getLine(struct ParseState *Parser); //done

extern int getNumParam(struct ParseState *Parser); //done

extern int getScopeID(struct ParseState *Parser); //done	

extern int countStackFrames(struct ParseState *Parser); //done










//Maybe useful
struct Model {


struct StackFrame *TopStackFr;


char* fileName;

char* funcName;

char* runMode;

char* localVarAndVal;

int line;

int scopeID;

int NumP;

void* HeapBottom;

void* HeapStackTop;

void* StackFrame;


};





