#pragma once
#ifndef MESSMER_TEMPFILE_TEMPFILE_H_
#define MESSMER_TEMPFILE_TEMPFILE_H_

#include <boost/filesystem.hpp>
#include "../macros.h"

namespace cpputils {

class TempFile {
public:
  explicit TempFile(const boost::filesystem::path &path, bool create = true);
  explicit TempFile(bool create = true);
  virtual ~TempFile();
  const boost::filesystem::path &path() const;

private:
  const boost::filesystem::path _path;

  DISALLOW_COPY_AND_ASSIGN(TempFile);
};

}

#endif
