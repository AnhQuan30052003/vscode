namespace System {
  class ToanHoc {
    private int so = 1;

    public void TangSo() {
      so = 10;
    }

    public void HienThiSo() => Console.WriteLine($"Giá trị của số là: {so}");
  }
}