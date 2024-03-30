using System;

class Program {
  static void Main() {
    Console.Clear();
    int[,] a = new int[10, 10];

    Change.changeValue(a, 0, 2);

    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        Console.Write($"{a[i, j]} ");
      }
      Console.WriteLine();
    }
  }

  
}