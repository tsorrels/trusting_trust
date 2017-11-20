char s1[]= "int main()\n{\n\tint i;\n\tprintf(\"char s1[]= \\\"\");\n\tfor (i = 0 ; s1[i] ; i ++)\n\t{\n\t\tswitch (s1[i])\n\t\t{\n\t\tcase '\\n':\n\t\t\tprintf(\"%s\", \"\\\\n\");\n\t\t\tbreak;\n\t\tcase '\\t':\n\t\t\tprintf(\"%s\", \"\\\\t\");\n\t\t\tbreak;\n\t\tcase '\\\"':\n\t\t\tprintf(\"%s\", \"\\\\\\\"\");\n\t\t\tbreak;\n\t\tcase '\\\\':\n\t\t\tprintf(\"%s\", \"\\\\\\\\\");\n\t\t\tbreak;\n\t\tdefault:\n\t\t\tprintf(\"%c\", s1[i]);\n\t\t}\n\t}\n\tprintf(\"\\\";\\n\\n\");\n\tprintf(\"%s\\n\", s1);\n}";

int main()
{
	int i;
	printf("char s1[]= \"");
	for (i = 0 ; s1[i] ; i ++)
	{
		switch (s1[i])
		{
		case '\n':
			printf("%s", "\\n");
			break;
		case '\t':
			printf("%s", "\\t");
			break;
		case '\"':
			printf("%s", "\\\"");
			break;
		case '\\':
			printf("%s", "\\\\");
			break;
		default:
			printf("%c", s1[i]);
		}
	}
	printf("\";\n\n");
	printf("%s\n", s1);
}
