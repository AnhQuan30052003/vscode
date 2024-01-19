class Cat {
  String name, voice;
  int leg;

  Cat(this.name, this.leg, this.voice);

  void SetName1(String name) {
    this.name = name;
  }
  // Use
  // String newName = "Tom";
  // object.SetName1(newName);

  void set SetName2(String name) {
    this.name = name;
  }
   // Use
  // String newName = "Tom";
  // object.SetName2 = newName;

  void Voice() => print(this.voice);
}

void main() {
  Cat a = new Cat("Tom", 4, "Meow");
}