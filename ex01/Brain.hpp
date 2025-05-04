#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <bits/stdc++.h>

class Brain
{
  private:
    std::string ideas[100];
  
  public:
    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    virtual ~Brain();
    // std::string ideas[100];
    std::string getIdea(int ind) const;
    void setIdea(int ind, std::string idea);
};

#endif