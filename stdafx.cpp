// stdafx.cpp : ֻ������׼�����ļ���Դ�ļ�
// easy-wgloader.pch ����ΪԤ����ͷ
// stdafx.obj ������Ԥ����������Ϣ

#include "stdafx.h"

#include	<GdiPlus.h>
#pragma		comment(lib, "Gdiplus.lib")
using namespace Gdiplus;

//////////////////////////////////////////////////////////////////
class	GdiplusInitializer{
public:
	GdiplusInitializer(){
		GdiplusStartupInput gdiplusStartupInput;
		GdiplusStartup(&gdiplusToken_, &gdiplusStartupInput, NULL);
	}
	~GdiplusInitializer(){
		GdiplusShutdown(gdiplusToken_);
	}

private:
	ULONG_PTR		gdiplusToken_;
};
static	GdiplusInitializer	s_gdiplus_initializer;

//////////////////////////////////////////////////////////////////
//	ATL Module
CComModule		g_module;

BEGIN_OBJECT_MAP(ObjectMap)
END_OBJECT_MAP()
