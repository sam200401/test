//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "ShockwaveFlashObjects_OCX.h"
#include <OleCtrls.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <FileCtrl.hpp>
#include <Grids.hpp>
#include <Outline.hpp>
#include "cdiroutl.h"
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TButton *Button1;
        TOpenDialog *OpenDialog1;
        TButton *Button4;
        TButton *Button5;
        TPanel *Panel2;
        TShockwaveFlash *ShockwaveFlash1;
        TButton *Button6;
        TButton *Button2;
        TLabel *Label1;
        TButton *Button3;
        TPanel *Panel3;
        TFileListBox *FileListBox1;
        TDirectoryListBox *DirectoryListBox1;
        TImage *Image1;
        TStatusBar *StatusBar1;
        TPanel *Panel4;
        TPanel *Panel5;
        TDriveComboBox *DriveComboBox1;
        TTrackBar *TrackBar1;
        TCheckBox *CheckBox1;
        TTimer *Timer1;
        TImage *Image2;
        TImage *Image3;
        TTimer *Timer2;
        TImage *Image4;
        TImage *Image5;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall FormResize(TObject *Sender);
        void __fastcall TrackBar1Change(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
int ic;
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
