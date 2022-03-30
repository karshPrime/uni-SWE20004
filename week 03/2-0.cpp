typedef int Count;
int main() {
  Count C;
  Count product = 1;
  cout << "Enter the count: ";
  cin >> C; for (Count K = 1; K <= C; K++) {
    cout << (product *= K) << endl;
  }
  return 0;
}
