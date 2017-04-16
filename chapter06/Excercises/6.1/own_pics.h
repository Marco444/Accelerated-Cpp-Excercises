#ifndef GUARD_own_pics_h
#define GUARD_own_pics_h

#include <string>
#include <vector>

std::string::size_type width(const std::vector<std::string>& v);

std::vector<std::string> frame(const std::vector<std::string>& v);

std::vector<std::string> own_vcat(const std::vector<std::string>& top,
                              const std::vector<std::string>& bottom);

std::vector<std::string> own_hcat(const std::vector<std::string>& left,
                              const std::vector<std::string>& right);

#endif
