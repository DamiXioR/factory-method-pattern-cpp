#include "Movie.hpp"

Movie::Movie(std::string movieTitle)
    : IProduct(movieTitle)
{
    title_.append(" _movie");
}
