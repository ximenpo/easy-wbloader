// easy-wgloader.cpp : ����Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "easy-wgloader.h"
#include "DlgLogin.h"

#define MAX_LOADSTRING 100

// ȫ�ֱ���:
HINSTANCE hInst;								// ��ǰʵ��
TCHAR szTitle[MAX_LOADSTRING];					// �������ı�
TCHAR szWindowClass[MAX_LOADSTRING];			// ����������

// �˴���ģ���а����ĺ�����ǰ������:

int APIENTRY _tWinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPTSTR    lpCmdLine,
	int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	// ��ʼ��ȫ���ַ���
	LoadString(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadString(hInstance, IDC_EASYWGLOADER, szWindowClass, MAX_LOADSTRING);

	_Module.Init(NULL, hInstance);

	do
	{
		//	login
		{
			LoginDialog	dlg;
			if(dlg.DoModal(NULL) == IDCANCEL){
				break;
			}
		}

		//	game
		{
		}
	}while(true);

	_Module.Term();

	return (int) EXIT_SUCCESS;
}
