#pragma once

#include "resource.h"

struct	Params{
	unsigned int	delay;		//	��һ���ӳ���ʾʱ�䣨�룩
	std::wstring	game_url;	//	������Ϸ��ַ
	std::wstring	game_title;	//	��Ϸ����

	void	clear(){
		delay	= 0;
		game_url.clear();
		game_title.clear();
	};
};

extern	CComModule		g_module; 
extern	stringify_data	g_config;
extern	Params			g_param;
