/*
 *	Copyright 2011 Fundação CPqD
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *	 you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *	 Unless required by applicable law or agreed to in writing, software
 *	 distributed under the License is distributed on an "AS IS" BASIS,
 *	 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

#ifndef BASE_MSG_H_
#define BASE_MSG_H_

#include <stdint.h>

#define MAX_PAYLOAD_SIZE 2044

enum Enum_Group {
	COMMAND, EVENT
};

enum Enum_Type {
	FLOW,
	SEND_PACKET,
	PACKET_IN,
	DATAPATH_JOIN,
	DATAPATH_LEAVE,
	LINK_EVENT,
	MAP_EVENT
};

struct base_msg {
	uint8_t group;
	uint8_t type;
	uint16_t pay_size;
	uint8_t payload[MAX_PAYLOAD_SIZE];

};

#endif /* BASE_MSG_H_ */

