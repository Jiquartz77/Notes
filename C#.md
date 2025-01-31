1. string == String; better use string;
1. string.IsNullOrEmpty(string str);
1. var & dynamic(Runtime) == auto type
1. i = int.Parse("123"); i = Convert.ToInt32("123");
1. @"foo\bar" == "foo\\bar"
1. protected internal class //can be accessed by derived class in same assembly
1.  - var decimalLiteral = 42;
    - var hexLiteral = 0x2A;
    - var binaryLiteral = 0b_0010_1010; // binary
1. - (ref int a, ref int b)
    - (out int a) // used for Input values by users; //initialization not needed
    - Console.WriteLine("The num is {0}", a);
1. foreach (var item in list))
1. str = string.Format("{0} {1}", "foo", variable);
1. /// <summary> message </summary>  : message shown when hovering over
1. dotnet new console --framework net8.0 --use-program-main
1. - int[,] =new int [3,3] // 2D array
    - int [][] arr3= new int [3][]// 3D array
1. extern != abstract // implemented externally vs must be implemented  by subclasses
1. unsafe keyword // can use pointers *p 
1. if (a < float.Epsilon && a > -float.Epsilon) // a == 0
1. - int/double/bool can't be null 
    - (int? i =3) == (Nullable<int> i = new Nullable<int>(3))
    - int i; //default: 0; int? ii; //default: null
1. 'struct' can have "fields, methods, properties, events, operator override, indexers"
1. virtual method: most-derived class
   1.  Java: default is virtual, final is not;
   1. C#: virtual, override;
   1. new: hide; override: overwrite;
1. OnValidate() // sync inspector 方法不会在游戏运行时调用，它仅在编辑器中有效。
1. 匿名delegate有内存泄露的风险
1. override 只能在继承基类时用，不能在实现接口时用