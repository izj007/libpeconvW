#pragma once
#include "peconv.h"
#include "resource.h"
#include <msclr\marshal_cppstd.h>

using namespace System;

namespace livpeconvW {
	public ref class Peconv
	{
		// TODO: 在此处为此类添加方法。
	public:
		int pe_to_shc(String^ in_path);
	};
}