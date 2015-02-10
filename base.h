
class Base {
  public:
    Base();
    virtual void run();
  protected:
    int base_prot;
    static Base * sm_base;
  private:
    int base_priv;

};

class Derived: private Base {
  public:
    Derived();
    virtual void run();
};
