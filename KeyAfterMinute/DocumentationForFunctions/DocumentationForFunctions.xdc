<?xml version="1.0"?><doc>
<members>
<member name="M:toBinaryKey(System.Int32)" decl="true" source="C:\Users\medilend\source\repos\KeyAfterMinute\DocumentationForFunctions\DocumentationForFunctions.cpp" line="8">
<summary>
Функция принимает целочисленную переменную, и преобразует её в её же двоичное отображение
<example> Например:
<code>
	int result = toBinaryKey(777);
</code>
Результат в переменной <c>result</c> будет иметь значение 1100001001
</example>
</summary>
<param name="S">Целочисленная переменнная</param>
<returns>Возвращает двоичное отображение принимаемого числа</returns>
</member>
<member name="M:IsDataCorrect(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="C:\Users\medilend\source\repos\KeyAfterMinute\DocumentationForFunctions\DocumentationForFunctions.cpp" line="23">
<summary>
Функция принимает строковую переменную, и проверяет её по следующим критериям:
1) Принятое значение обязано быть натуральным числом
	1.1) Число обязано быть не отрицательным
	1.2) Число обязано не быть десятичной дробью
	1.3) В числе не могут присутствовать какие-либо не численные символы. Оно не должно быть строкой
2) Число обязано быть в рамках целочисленного типа
<example> Например:
<code>
	bool result = IsDataCorrect(777)
</code>
Результат в переменной <c>result</c> будет иметь значение <c>true</c>
<code>
	bool result = IsDataCorrect(1.15)
</code>
Результат в переменной <c>result</c> будет иметь значение <c>false</c> 
</example>
</summary>
<param name="S">Введенное пользователем значение</param>
<returns>Возвращает исстину или ложь в зависимости от того, насколько число проходит по заданным критериям</returns>
</member>
</members>
</doc>