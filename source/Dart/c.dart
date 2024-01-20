class Cat {
  String name, voice;
  int leg;

  Cat(this.name, this.leg, this.voice);

  void SetName(String name) {
    this.name = name;
  }

  String GetName() {
   return this.name;
  }

  void Voice() => print(this.voice);
}

void main() {
  Cat a = new Cat("Tom", 4, "Meow");
  a.SetName("mèo Tom");
  print(a.GetName());
}