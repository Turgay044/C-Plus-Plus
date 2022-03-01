//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit2.cpp", Blank); /* TFrame: File Type */
USEFORM("Unit3.cpp", Presentation); /* TFrame: File Type */
USEFORM("Unit1.cpp", Main);
USEFORM("Unit4.cpp", Anamnese); /* TFrame: File Type */
USEFORM("Unit5.cpp", PhysExam); /* TFrame: File Type */
USEFORM("About.cpp", AboutBox);
USEFORM("Unit6.cpp", SaveDlg);
USEFORM("Unit7.cpp", DeleteDlg);
//---------------------------------------------------------------------------
WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TMain), &Main);
		Application->CreateForm(__classid(TAboutBox), &AboutBox);
		Application->CreateForm(__classid(TSaveDlg), &SaveDlg);
		Application->CreateForm(__classid(TDeleteDlg), &DeleteDlg);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
