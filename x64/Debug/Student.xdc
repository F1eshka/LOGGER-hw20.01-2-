<?xml version="1.0"?><doc>
<members>
<member name="M:Student.#ctor(Student!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="5">
<summary>
Конструктор копирования класса Student.
Создает копию студента на основе переданного объекта.
</summary>
<param name="original">Оригинальный студент, который будет скопирован.</param>
</member>
<member name="M:Student.#ctor" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="43">
<summary>
 Конструктор по умолчанию класса Student.
Инициализирует студента значениями по умолчанию.
</summary>
</member>
<member name="M:Student.#ctor(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;,std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;,std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;,std.basi" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="49">
<summary>
Конструктор класса Student.
Инициализирует студента с переданными значениями.
</summary>
<param name="surname">Фамилия студента.</param>
<param name="name">Имя студента.</param>
<param name="middlname">Отчество студента.</param>
<param name="adress">Адрес студента.</param>
<param name="phonenumber">Номер телефона студента.</param>
</member>
<member name="M:Student.Dispose" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="70">
<summary>
Деструктор класса Student.
Освобождает память, занятую массивами оценок.
</summary>
</member>
<member name="M:Student.PrintStudent" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="85">
<summary>
Выводит информацию о студенте в консоль.
</summary>
</member>
<member name="M:Student.AddPractic(System.Int32)" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="97">
<summary>
Добавляет новую оценку за практику студенту.
</summary>
<param name="newcountry">Новая оценка за практику.</param>
</member>
<member name="M:Student.PrintPractic" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="115">
<summary>
Выводит оценки за практику студента в консоль.
</summary>
</member>
<member name="M:Student.GePracticRatesCount(System.UInt32)" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="126">
<summary>
Получает оценку за практику студента по указанному индексу.
</summary>
<param name="index">Индекс оценки за практику</param>
<returns>Оценка за практику по указанному индексу</returns>
</member>
<member name="M:Student.AddHomeWork(System.Int32)" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="139">
<summary>
Добавляет новую оценку за домашнюю работу студенту
</summary>
<param name="newcountry">Новая оценка за домашнюю работу</param>
</member>
<member name="M:Student.PrintHomeWork" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="156">
<summary>
Выводит оценки за домашнюю работу студента в консоль.
</summary>
</member>
<member name="M:Student.GetHomeWorkRatesCount(System.UInt32)" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="167">
<summary>
Получает оценку за домашнюю работу студента по указанному индексу.
</summary>
<param name="index">Индекс оценки за домашнюю работу</param>
<returns>Оценка за домашнюю работу по указанному индексу</returns>
</member>
<member name="M:Student.AddExam(System.Int32)" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="180">
<summary>
Добавляет новую оценку за экзамен студенту
</summary>
<param name="newcountry">Новая оценка за экзамен</param>
</member>
<member name="M:Student.PrintExam" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="197">
<summary>
Выводит оценки за экзамен студента в консоль
</summary>
</member>
<member name="M:Student.GetExamRatesCount(System.UInt32)" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="208">
<summary>
Получает оценку за экзамен студента по указанному индексу
</summary>
<param name="index">Индекс оценки за экзамен</param>
<returns>Оценка за экзамен по указанному индексу</returns>
</member>
<member name="M:Student.SetSurname(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="221">
<summary>
Устанавливает фамилию студента
</summary>
<param name="surname">Новая фамилия студента</param>
</member>
<member name="M:Student.GetSurname" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="230">
<summary>
Возвращает фамилию студента
</summary>
<returns>Фамилия студента</returns>
</member>
<member name="M:Student.SetName(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="239">
<summary>
Устанавливает имя студента
</summary>
<param name="name">Новое имя студента</param>
</member>
<member name="M:Student.GetName" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="248">
<summary>
Возвращает имя студента
</summary>
<returns>Имя студента</returns>
</member>
<member name="M:Student.SetMiddlName(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="257">
<summary>
Устанавливает отчество студента
</summary>
<param name="middlname">Новое отчество студента</param>
</member>
<member name="M:Student.GetMiddlName" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="266">
<summary>
Возвращает отчество студента
</summary>
<returns>Отчество студента</returns>
</member>
<member name="M:Student.SetAdress(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="275">
<summary>
Устанавливает адрес студента
</summary>
<param name="adress">Новый адрес студента</param>
</member>
<member name="M:Student.GetAdress" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="284">
<summary>
Возвращает адрес студента
</summary>
<returns>Адрес студента</returns>
</member>
<member name="M:Student.SetPhone(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="293">
<summary>
 Устанавливает номер телефона студента
</summary>
<param name="phonenumber">Новый номер телефона студента</param>
</member>
<member name="M:Student.GetPhone" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="302">
<summary>
Возвращает номер телефона студента
</summary>
<returns>Номер телефона студента</returns>
</member>
<member name="M:Student.GoToPeresdacha(Student)" decl="false" source="C:\Users\Rog\source\repos\HW20.01\Student.cpp" line="311">
<summary>
Метод для демонстрации работы с передачей студента по значению.
</summary>
<param name="s">Студент, который будет передан</param>
</member>
</members>
</doc>