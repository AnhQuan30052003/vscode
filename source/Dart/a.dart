class Cat {
  String name, voice;
  int leg;

  Cat(this.name, this.leg, this.voice);

  // void setName(String name) => this.name = name;
  // void set setName(String name) => this.name = name;

  String getName() {
    return name;
  }

  void Voice() {
    print(this.voice);
  }
}

void main() {
  Cat a = new Cat("Tom", 4, "Meow");
  // a.setName("Mèo Tom A");
  print(a.getName());
}