#pragma once

#include "resource.h"

struct	Params{
	bool			debug;		//	�Ƿ����״̬
	
	std::string		wnd_title;
	HICON			wnd_icon;

	std::string		auth_code;

	std::wstring	cs_REG_IE_OPTION;
	std::wstring	cs_IsGameLoader;
	std::wstring	cs_LoadGame;

	std::string		cs_AUTH_ENV_NAME;
	std::string		cs_AUTH_COOKIE_NAME;
	std::string		cs_AUTH_COOKIE_DOMAIN;
	
	//	temporary vars
	unsigned int	delay;		//	��һ���ӳ���ʾʱ�䣨�룩
	HWND			main_wnd;	//	�����ھ��
	std::wstring	game_url;	//	������Ϸ��ַ
	std::wstring	game_title;	//	��Ϸ����
	
	void	clear_temporary_vars(){
		main_wnd	= 0;
		delay		= 0;
		game_url.clear();
		game_title.clear();
	};
};

extern	HINSTANCE		g_instace;

extern	CComModule		g_module; 
extern	stringify_data	g_config;
extern	Params			g_param;
