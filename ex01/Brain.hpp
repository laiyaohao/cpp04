#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <bits/stdc++.h>

class Brain
{
  private:
    std::string ideas[100];
    void setIdea(int ind, std::string idea);
  
  public:
    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    virtual ~Brain();
    std::string getIdea(int ind) const;
};

#endif