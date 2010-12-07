// Copyright (c) 2010, Adam Petersen <adam@adampetersen.se>. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
//   1. Redistributions of source code must retain the above copyright notice, this list of
//      conditions and the following disclaimer.
//
//   2. Redistributions in binary form must reproduce the above copyright notice, this list
//      of conditions and the following disclaimer in the documentation and/or other materials
//      provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY Adam Petersen ``AS IS'' AND ANY EXPRESS OR IMPLIED
// WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
// FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL Adam Petersen OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
// ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#ifndef EXT_MESSAGE_BUILDER_H
#define EXT_MESSAGE_BUILDER_H

#include "types.h"

namespace tinch_pp {

// Sending a message to a node involves several, low-level steps.
// These functions encapsulate them.
 
 msg_seq build_send_msg(const msg_seq& msg, const e_pid& destination_pid);

 msg_seq build_reg_send_msg(const msg_seq& msg, const e_pid& self, const std::string& destination_name);

 msg_seq build_exit_msg(const e_pid& from_pid, const e_pid& to_pid, const std::string& reason);

 msg_seq build_exit2_msg(const e_pid& from_pid, const e_pid& to_pid, const std::string& reason);

 msg_seq build_link_msg(const e_pid& from_pid, const e_pid& to_pid);

 msg_seq build_unlink_msg(const e_pid& from_pid, const e_pid& to_pid);
}

#endif
