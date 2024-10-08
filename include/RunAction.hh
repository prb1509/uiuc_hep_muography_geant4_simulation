#ifndef RUNACTION_HH
#define RUNACTION_HH

#include "G4UserRunAction.hh"
#include "G4AnalysisManager.hh" 
#include "G4SystemOfUnits.hh"
// #include "g4root.hh"
//incudes for csv files
#include "g4csv_defs.hh"
#include "G4CsvAnalysisManager.hh"

class MyRunAction : public G4UserRunAction {
    public:
        MyRunAction();
        ~MyRunAction();

        virtual void BeginOfRunAction(const G4Run*);
        virtual void EndOfRunAction(const G4Run*);
        
};

#endif