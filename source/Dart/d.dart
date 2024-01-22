Stream<int> countNumbers() async* {
  for (int i = 1; i <= 5; i++) {
    await Future.delayed(Duration(seconds: 1));
    yield i;
  }
}

Future<String> fetchData() async {
  await Future.delayed(Duration(seconds: 2));
  return "Data loaded successfully";
}

void main() {
  // fetchData().then((result) {
  //   print(result);
  // });

  // fetchData().then((result) => print(result));
  fetchData().then(print);

  // countNumbers().listen((number) {
  //   print(number);
  // });
}