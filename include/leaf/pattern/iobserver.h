#pragma once

namespace leaf::pattern
{
  template<typename... T>
  class IObserver
  {
    public:
      virtual ~IObserver() = default;
      virtual auto update(T... args) -> void = 0;
  };
}