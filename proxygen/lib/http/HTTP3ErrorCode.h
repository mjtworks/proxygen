/*
 *  Copyright (c) 2019-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#pragma once

#include <stdint.h>
#include <string>

namespace proxygen {

namespace HTTP3 {
enum ErrorCode : uint16_t {
  // HTTP/3 error codes
  HTTP_NO_ERROR = 0x00,
  HTTP_WRONG_SETTING_DIRECTION = 0x01,
  HTTP_PUSH_REFUSED = 0x02,
  HTTP_INTERNAL_ERROR = 0x03,
  HTTP_PUSH_ALREADY_IN_CACHE = 0x04,
  HTTP_REQUEST_CANCELLED = 0x05,
  HTTP_INCOMPLETE_REQUEST = 0x06,
  HTTP_CONNECT_ERROR = 0x07,
  HTTP_EXCESSIVE_LOAD = 0x08,
  HTTP_VERSION_FALLBACK = 0x09,
  HTTP_WRONG_STREAM = 0x0A,
  HTTP_PUSH_LIMIT_EXCEEDED = 0x0B,
  HTTP_DUPLICATE_PUSH = 0x0C,
  HTTP_UNKNOWN_STREAM_TYPE = 0x0D,
  HTTP_WRONG_STREAM_COUNT = 0x0E,
  HTTP_CLOSED_CRITICAL_STREAM = 0x0F,
  HTTP_WRONG_STREAM_DIRECTION = 0x10,
  HTTP_EARLY_RESPONSE = 0x11,
  HTTP_MISSING_SETTINGS = 0x12,
  HTTP_UNEXPECTED_FRAME = 0x13,
  HTTP_REQUEST_REJECTED = 0x14,
  HTTP_GENERAL_PROTOCOL_ERROR = 0xFF,
  // Malformed Frames 0x100
  HTTP_MALFORMED_FRAME_DATA = 0x0100,
  HTTP_MALFORMED_FRAME_HEADERS = 0x0101,
  HTTP_MALFORMED_FRAME_PRIORITY = 0x0102,
  HTTP_MALFORMED_FRAME_CANCEL_PUSH = 0x0103,
  HTTP_MALFORMED_FRAME_SETTINGS = 0x0104,
  HTTP_MALFORMED_FRAME_PUSH_PROMISE = 0x0105,
  HTTP_MALFORMED_FRAME_GOAWAY = 0x0107,
  HTTP_MALFORMED_FRAME_MAX_PUSH_ID = 0x010D,
  HTTP_MALFORMED_FRAME = 0x01FF,
  // QPACK 0x200
  HTTP_QPACK_DECOMPRESSION_FAILED = 0x200,
  HTTP_QPACK_DECODER_STREAM_ERROR = 0x201,
  HTTP_QPACK_ENCODER_STREAM_ERROR = 0x202,

  // Internal use only
  GIVEUP_ZERO_RTT = 0xF2
};
}
std::string toString(HTTP3::ErrorCode code);

} // namespace proxygen