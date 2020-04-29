#pragma once
enum Type
{
	NUMERICAL,
	CHARACTERS,
	LOGICAL
};

char* getTypeName(enum Type type) {

	switch (type)
	{
		case NUMERICAL: return "int";
		case CHARACTERS: return "string";
		case LOGICAL: return "bool";
	}
}