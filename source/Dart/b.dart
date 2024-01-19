class Cat {
  String name, voice;
  int leg;

  Cat(this.name, this.leg, this.voice);

  void set setName(String name) {
    this.name = name;
  }

  String get getName {
    return name;
  }

  Voice() => print(this.voice);
}

main() {
  Cat a = new Cat("Tom", 4, "Meow");
  a.setName = "Mèo Tom B";
  print(a.getName);
  a.Voice();
}