
void main() async {
  Future.delayed(Duration(seconds: 3), () => 10)
  .then(
    (value) {
      print(value);
    },
    onError: (error) {
      print(error);
    }
  ).catchError((error) {
    print(error);
  });;
}