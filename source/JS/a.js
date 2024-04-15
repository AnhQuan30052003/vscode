console.clear();

class Nguoi {
  constructor(ten, tuoi) {
    this.ten = ten;
    this.tuoi = tuoi;
  }

  static say() {
    console.log("Đây là class Nguoi");
  }

  intro() {
    console.log(`Tên tôi là ${this.ten}, tôi ${this.tuoi} tuổi.`);
  }
}

Nguoi.say();

const nguoi = new Nguoi("Nguyễn Anh Quân", 21);

nguoi.intro();