// Name: Jorge Garcia
// This program calculates the tax and tip on a restaurant bill.
# include <iostream>
int main()
{
  double meal_cost;
  double tax;
  double tip;
  double total_cost;

  std::cout << "Welcome to Jorge Garcia's Restaurant Bill Calculator!\n";
  std::cout << "What is the total meal cost?";
  std::cin>> meal_cost;

  tax = meal_cost * 0.0775;
  tip = meal_cost * 0.20;
  total_cost = meal_cost + tax + tip;

  std::cout << "Tax:        $" << tax << std::endl;
  std::cout << "Tip:        $" << tip << std::endl;
  std::cout << "Total Bill: $" << total_cost << std::endl;

  return 0;
}
