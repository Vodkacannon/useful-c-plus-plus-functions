namespace useful_cpp_functions
{
  float get_fractional_part(float f)
  {
    return f - (int) f; 
  }
  
  double get_fractional_part(double d)
  {
    return d - (int) d; 
  }
  
  void pause_console(const std::string& pause_message="Press any key to continue . . . ")
  {
      std::cout << pause_message;
      getch();
  }
  
  void pause_console_unsafe()
  {
    system("pause");
  }
};
