int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modify the value of x through the pointer
  int y = *ptr; // Assign the value pointed to by ptr to y
  return 0;
}