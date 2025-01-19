int main() {
  int *ptr = new int; // Allocate memory dynamically
  *ptr = 10; 
  int y = *ptr;
  delete ptr; // Release the dynamically allocated memory
  ptr = nullptr; // Set the pointer to null to avoid dangling pointer issues
  return 0;
}