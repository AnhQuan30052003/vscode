Future<String> waitTask() {
  Future.delayed(Duration(seconds: 5));
  return Future.value("done");
}

void main() async {
  var a = await waitTask().whenComplete(() => print("do something here"));
  print(a);
}