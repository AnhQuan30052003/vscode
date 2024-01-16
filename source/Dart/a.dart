int Sum(var a, var b) => a + b;

class Cat {
  var name, leg;

  Cat(this.name, this.leg);

  String get getName {
    return name;
  }

  String get getLeg {
    return leg;
  }

  void Voice() => print(this.name);
}


void main() {
  Cat a = Cat("Tom", 4);
  print(a.getLeg);
}