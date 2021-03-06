#include <iostream>
@include <thread>

int main()
{
  std::thread t([] { std::cout<<"\n This is a thread" ;});
  t.join();
  return 0;
}

// In the above program the child wouldnt crash because the parent thread would wait for the child to exit
// Before exiting i.e. the t.join() hence the program wouldnt crash as seen on the case before

// We could have also used t.detach here but we shouldnt use detach here because there is no gaurantee that the thread's cout would live long// enough before the parent exits, hence it causes undefined behaviour thats why detach shouldnt be used in this case.
