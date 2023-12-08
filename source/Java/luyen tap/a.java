import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.concurrent.atomic.AtomicReferenceArray;

public class a {
  public static void main(String[] args) {
    int[] a = {1, 2, 3};

    List<Integer> b = new ArrayList();
  }
  
  // Hàm nhập dữ liệu
  public static void Nhap() {
    Scanner in = new Scanner(System.in);
    System.out.print("Nhap ten cua ban: ");
    String ten = in.nextLine();
    System.out.print("Thi ra ten ban la " + ten);
  }

  // Thí nghiệm so sánh chuỗi
  public static void SoSanhChuoi() {
    String s1 = "Quan";
    String s2 = "quan";
    
    if (s1.equalsIgnoreCase(s2)) System.out.print("true");
    else System.out.print("false");
  }

  // Thêm dữ liệu vào mảng
  public static void ThemDuLieuVaoMang() {
    int[] a = {1, 2, 3};
    int x = 4;
    int[] b = new int[a.length + 1];

    for (int i = 0; i < a.length; i++) {
      b[i] = a[i];
    }
    b[b.length-1] = x;

    for (int _b : b) {
      System.out.print(_b + " ");
    }
  }

  // Sử dụng các lệnh cơ bản
  public static void LenhCoBan() {
    // int i = 5;
    // while ()
  }

  // Dữ liệu list
  public static void ThiNghiemList() {
    List<Integer> nums = new ArrayList<>();

    // Adding
    nums.add(2);
    nums.add(5);
    nums.add(8);

    // Retrieving
    System.out.println(nums.get(0));

    // Indexed for loop iteration
    for (int i = 0; i < nums.size(); i++) {
      System.out.println(nums.get(i));
    }

    nums.remove(nums.size() - 1);
    nums.remove(0); // VERY slow

    for (Integer value : nums) {
      System.out.println(value);
    }
  }
}