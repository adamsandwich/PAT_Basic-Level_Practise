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
            string[] list = character.Split(' ');
            for (int i =0 ;i<list.Length;i++)
            {
                Console.Write(list[list.Length - i - 1]);
                if (i != list.Length - 1)
                    Console.Write(' ');
            }
        }
    }
}
