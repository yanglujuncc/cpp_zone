/* boost random_demo.cpp profane demo
 *
 * Copyright Jens Maurer 2000
 * Distributed under the Boost Software License, Version 1.0. (See
 * accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 *
 * $Id: random_demo.cpp 68858 2011-02-14 04:07:41Z steven_watanabe $
 *
 * A short demo program how to use the random number library.
 */

#include <iostream>
#include <boost/random.hpp>


int main()
{
  boost::mt19937 eng(42);
  boost::uniform_real<> uni_dist(0,1);
  boost::variate_generator<boost::mt19937&, boost::uniform_real<> > myrandom(eng, uni_dist);

  std::cout<<"hello"<<std::endl;
  std::cout<<myrandom()<<std::endl;
  
  return 0;
}
