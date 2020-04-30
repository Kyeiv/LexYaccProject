#pragma once
enum Type
{
	NUMERICAL,
	CHARACTERS,
	LOGICAL,
	VOIDD,
	NONE
};

enum NameOrigin
{
	VAR,
	FUNC
};

char* getTypeName(enum Type type) {

	switch (type)
	{
		case NUMERICAL: return "int";
		case CHARACTERS: return "string";
		case LOGICAL: return "bool";
		case VOIDD: return "void";
	}
}

char* getNameOriginString(enum NameOrigin nameOrigin) {

	switch (nameOrigin)
	{
	case VAR: return "variable";
	case FUNC: return "function";
	}
}