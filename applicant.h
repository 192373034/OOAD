
#ifndef APPLICANT_H
#define APPLICANT_H


/// 
/// class applicant

class applicant
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  applicant();

  /// 
  /// Empty Destructor
  virtual ~applicant();



  /// 
  void apply_passport()
  {
  }


  /// 
  void submission_of_passport()
  {
  }

private:
  // Private attributes  


  void applicant_name;
  void applicant_details;

  // Public attribute accessor methods  



  /// 
  /// Set the value of applicant_name
  /// @param value the new value of applicant_name
  void setApplicant_name(void value)
  {
    applicant_name = value;
  }

  /// 
  /// Get the value of applicant_name
  /// @return the value of applicant_name
  void getApplicant_name()
  {
    return applicant_name;
  }

  /// 
  /// Set the value of applicant_details
  /// @param value the new value of applicant_details
  void setApplicant_details(void value)
  {
    applicant_details = value;
  }

  /// 
  /// Get the value of applicant_details
  /// @return the value of applicant_details
  void getApplicant_details()
  {
    return applicant_details;
  }

  void initAttributes();

};

#endif // APPLICANT_H
