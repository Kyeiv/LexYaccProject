#pragma once

enum NameOrigin
{
	VAR,
	FUNC,
	CLASS
};

char* getNameOriginString(enum NameOrigin nameOrigin) {

	switch (nameOrigin)
	{
	case VAR: return "variable";
	case FUNC: return "function";
	case CLASS: return "class";
	}
}