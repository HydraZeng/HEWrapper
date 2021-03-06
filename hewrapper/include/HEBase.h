#pragma once

#include "KeyBase.h"
#include "TextBase.h"

namespace hewrapper {

class EncryptionParametersBase {
public:
    EncryptionParametersBase() = default;
    ~EncryptionParametersBase() = default;
};

class HEBase {
public:
    HEBase() = default;
    HEBase(const PubKeyBase &k, const PlainTextBase &val) {};
    ~HEBase() = default;

    virtual PlainTextBase decrypt(PrivateKeyBase &k) = 0;

    HEBase(const HEBase &copy) = default;
    HEBase(HEBase &&copy) = default;
}; // class HEBase

} // namespace hewrapper