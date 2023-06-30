using System;

class Program {
    static bool SNT(int n) {
        for (int i = 2; i <= Math.Sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        return n > 1;
    }
    static void Main() {
        Console.Clear();
        Console.Write("Nhap so nguyen n = ");
        int n = Convert.ToInt32(Console.ReadLine());
        Console.Write(SNT(n) ? "YES" : "NO");
    }
}