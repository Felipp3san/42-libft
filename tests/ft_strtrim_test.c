int	main(void)
{
	char	*set;
	char	*str_totrim;

	set = " ";
	str_totrim = "   Trim this string   ";
	printf("Original string: |%s| Trimmed: |%s|\n", str_totrim ,ft_strtrim(str_totrim, set));
	set = " /+";
	str_totrim = " ///+++/  Trim this string  +/+";
	printf("Original string: |%s| Trimmed: |%s|\n", str_totrim ,ft_strtrim(str_totrim, set));

	set = " /+";
	str_totrim = "";
	printf("Original string: |%s| Trimmed: |%s|\n", str_totrim ,ft_strtrim(str_totrim, set));

	set = "";
	str_totrim = " ///+++/  Trim this string  +/+";
	printf("Original string: |%s| Trimmed: |%s|\n", str_totrim ,ft_strtrim(str_totrim, set));

	set = "";
	str_totrim = "";
	printf("Original string: |%s| Trimmed: |%s|\n", str_totrim ,ft_strtrim(str_totrim, set));

	return (0);
}
