

Future<String> DelayTime(int value, int time) async {
  String st = await Future.delayed(
    Duration(seconds: time),
    () => "$value"
  );
  return st;
}

void main() async {
  print("Build done !");
  int n = 10;
  for (int i = 1; i <= n; i++) {
    print(await DelayTime(i, 1));
  }
}