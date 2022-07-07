class Shoe
{
    const bool sole;
    bool laces;
  public:
  // constructor initializer syntax can set a constant
    Shoe(bool s, bool l) : sole(s), laces(l){}
    // constant method declaration, must be set as const in definition also
    bool getSole() const;
    bool getLaces();
};
