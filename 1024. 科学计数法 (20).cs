using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleCSharpApp
{
    class Program
    {
        static void Main(string[] args)
        {
            string character = "";
            character = Console.ReadLine();
            string[] list = character.Split('E');
            char symInteger = list[0].First();
            char symExponent = list[1].First();
            //除去符号
            list[0] = list[0].Remove(0, 1);
            list[1] = list[1].Remove(0, 1);
            //除去小数点
            list[0] = list[0].Remove(1, 1);
            int exponent = Convert.ToInt32(list[1]);
            if (symInteger == '-')
                Console.Write('-');
            if(symExponent=='-')
            {
                for (int i = 0; i < exponent; i++)
                {
                    Console.Write('0');
                    if (i == 0) Console.Write('.');
                }
                Console.Write(list[0]);
            }
            else
            {
                int i;
                if(exponent<list[0].Length-1)
                {
                    for (i = 0; i < exponent+1; i++)
                    {
                        Console.Write(list[0][i]);
                    }
                    Console.Write('.');
                    for (; i < list[0].Length; i++)
                    {
                        Console.Write(list[0][i]);
                    }
                }
                else
                {
                    Console.Write(list[0]);
                    for (i = 0; i < exponent - list[0].Length + 1; i++)
                    {
                        Console.Write('0');
                    }
                }
            }
        }
    }
}
