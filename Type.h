#pragma once
enum Type
{
	NUMERICAL,
	CHARACTERS,
	LOGICAL
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
	}
}

char* getNameOriginString(enum NameOrigin nameOrigin) {

	switch (nameOrigin)
	{
	case VAR: return "variable";
	case FUNC: return "function";
	}
}