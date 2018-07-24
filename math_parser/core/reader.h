#ifndef READER_H
#define READER_H

#include <cstring>

namespace mylib {
    namespace math_parser {
        class reader_t {
            private:
                char* s;
                uint32_t _index = 0;
                uint32_t n;
            public:
                const uint32_t& index = _index;

                reader_t(char* s, uint32_t index = 0);

                bool eof() const;
                char next();
        };

        reader_t::reader_t(char* s, uint32_t index) : s(s), _index(index) {
            n = strlen(s);
        }

        bool reader_t::eof() const {
            return _index >= n;
        }

        char reader_t::next() const {
            return s[_index++];
        }
    }
}

#endif