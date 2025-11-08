
#ifndef ADMIN_H
#define ADMIN_H


/// 
/// class admin

class admin
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  admin();

  /// 
  /// Empty Destructor
  virtual ~admin();



  /// 
  void verify_student()
  {
  }


  /// 
  void check_for_availability()
  {
  }


  /// 
  void issue_books()
  {
  }


  /// 
  void order_for_new_author()
  {
  }


  /// 
  void maintain_student_details()
  {
  }

private:
  // Private attributes  


  void student_details;
  void booklist;

  // Public attribute accessor methods  



  /// 
  /// Set the value of student_details
  /// @param value the new value of student_details
  void setStudent_details(void value)
  {
    student_details = value;
  }

  /// 
  /// Get the value of student_details
  /// @return the value of student_details
  void getStudent_details()
  {
    return student_details;
  }

  /// 
  /// Set the value of booklist
  /// @param value the new value of booklist
  void setBooklist(void value)
  {
    booklist = value;
  }

  /// 
  /// Get the value of booklist
  /// @return the value of booklist
  void getBooklist()
  {
    return booklist;
  }

  void initAttributes();

};

#endif // ADMIN_H
