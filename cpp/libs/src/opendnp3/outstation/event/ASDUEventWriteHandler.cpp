/*
 * Licensed to Green Energy Corp (www.greenenergycorp.com) under one or
 * more contributor license agreements. See the NOTICE file distributed
 * with this work for additional information regarding copyright ownership.
 * Green Energy Corp licenses this file to you under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except in
 * compliance with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * This project was forked on 01/01/2013 by Automatak, LLC and modifications
 * may have been made to this file. Automatak, LLC licenses these modifications
 * to you under the terms of the License.
 */

#include "ASDUEventWriteHandler.h"

#include "EventWriters.h"

#include "opendnp3/objects/Group2.h"
#include "opendnp3/objects/Group4.h"
#include "opendnp3/objects/Group22.h"
#include "opendnp3/objects/Group23.h"
#include "opendnp3/objects/Group32.h"
#include "opendnp3/objects/Group11.h"
#include "opendnp3/objects/Group42.h"

namespace opendnp3
{
uint16_t ASDUEventWriteHandler::Write(EventBinaryVariation variation, const DNPTime& first, IEventCollection<Binary>& items)
{
	switch (variation)
	{
	case(EventBinaryVariation::Group2Var1):
		return EventWriters::Write(this->writer, items, Group2Var1::Inst());
	case(EventBinaryVariation::Group2Var2):
		return EventWriters::Write(this->writer, items, Group2Var2::Inst());
	case(EventBinaryVariation::Group2Var3):
		return EventWriters::WriteWithCTO(first, this->writer, items, Group2Var3::Inst());
	default:
		return EventWriters::Write(this->writer, items, Group2Var1::Inst());
	}
}

uint16_t ASDUEventWriteHandler::Write(EventDoubleBinaryVariation variation, const DNPTime& first, IEventCollection<DoubleBitBinary>& items)
{
	switch (variation)
	{
	case(EventDoubleBinaryVariation::Group4Var1):
		return EventWriters::Write(this->writer, items, Group4Var1::Inst());
	case(EventDoubleBinaryVariation::Group4Var2):
		return EventWriters::Write(this->writer, items, Group4Var2::Inst());
	case(EventDoubleBinaryVariation::Group4Var3):
		return EventWriters::WriteWithCTO(first, this->writer, items, Group4Var3::Inst());
	default:
		return EventWriters::Write(this->writer, items, Group4Var1::Inst());
	}
}

uint16_t ASDUEventWriteHandler::Write(EventCounterVariation variation, const DNPTime& first, IEventCollection<Counter>& items)
{
	switch (variation)
	{
	case(EventCounterVariation::Group22Var1):
		return EventWriters::Write(this->writer, items, Group22Var1::Inst());
	case(EventCounterVariation::Group22Var2):
		return EventWriters::Write(this->writer, items, Group22Var2::Inst());
	case(EventCounterVariation::Group22Var5):
		return EventWriters::Write(this->writer, items, Group22Var5::Inst());
	case(EventCounterVariation::Group22Var6):
		return EventWriters::Write(this->writer, items, Group22Var6::Inst());
	default:
		return EventWriters::Write(this->writer, items, Group22Var1::Inst());
	}
}

uint16_t ASDUEventWriteHandler::Write(EventFrozenCounterVariation variation, const DNPTime& first, IEventCollection<FrozenCounter>& items)
{
	switch (variation)
	{
	case(EventFrozenCounterVariation::Group23Var1):
		return EventWriters::Write(this->writer, items, Group23Var1::Inst());
	case(EventFrozenCounterVariation::Group23Var2):
		return EventWriters::Write(this->writer, items, Group23Var2::Inst());
	case(EventFrozenCounterVariation::Group23Var5):
		return EventWriters::Write(this->writer, items, Group23Var5::Inst());
	case(EventFrozenCounterVariation::Group23Var6):
		return EventWriters::Write(this->writer, items, Group23Var6::Inst());
	default:
		return 0;
	}
}

uint16_t ASDUEventWriteHandler::Write(EventAnalogVariation variation, const DNPTime& first, IEventCollection<Analog>& items)
{
	switch (variation)
	{
	case(EventAnalogVariation::Group32Var1):
		return EventWriters::Write(this->writer, items, Group32Var1::Inst());
	case(EventAnalogVariation::Group32Var2):
		return EventWriters::Write(this->writer, items, Group32Var2::Inst());
	case(EventAnalogVariation::Group32Var3):
		return EventWriters::Write(this->writer, items, Group32Var3::Inst());
	case(EventAnalogVariation::Group32Var4):
		return EventWriters::Write(this->writer, items, Group32Var4::Inst());
	case(EventAnalogVariation::Group32Var5):
		return EventWriters::Write(this->writer, items, Group32Var5::Inst());
	case(EventAnalogVariation::Group32Var6):
		return EventWriters::Write(this->writer, items, Group32Var6::Inst());
	case(EventAnalogVariation::Group32Var7):
		return EventWriters::Write(this->writer, items, Group32Var7::Inst());
	case(EventAnalogVariation::Group32Var8):
		return EventWriters::Write(this->writer, items, Group32Var8::Inst());
	default:
		return EventWriters::Write(this->writer, items, Group32Var1::Inst());
	}
}

uint16_t ASDUEventWriteHandler::Write(EventBinaryOutputStatusVariation variation, const DNPTime& first, IEventCollection<BinaryOutputStatus>& items)
{
	switch (variation)
	{
	case(EventBinaryOutputStatusVariation::Group11Var1):
		return EventWriters::Write(this->writer, items, Group11Var1::Inst());
	case(EventBinaryOutputStatusVariation::Group11Var2):
		return EventWriters::Write(this->writer, items, Group11Var2::Inst());
	default:
		return EventWriters::Write(this->writer, items, Group11Var1::Inst());
	}
}

uint16_t ASDUEventWriteHandler::Write(EventAnalogOutputStatusVariation variation, const DNPTime& first, IEventCollection<AnalogOutputStatus>& items)
{
	switch (variation)
	{
	case(EventAnalogOutputStatusVariation::Group42Var1):
		return EventWriters::Write(this->writer, items, Group42Var1::Inst());
	case(EventAnalogOutputStatusVariation::Group42Var2):
		return EventWriters::Write(this->writer, items, Group42Var2::Inst());
	case(EventAnalogOutputStatusVariation::Group42Var3):
		return EventWriters::Write(this->writer, items, Group42Var3::Inst());
	case(EventAnalogOutputStatusVariation::Group42Var4):
		return EventWriters::Write(this->writer, items, Group42Var4::Inst());
	case(EventAnalogOutputStatusVariation::Group42Var5):
		return EventWriters::Write(this->writer, items, Group42Var5::Inst());
	case(EventAnalogOutputStatusVariation::Group42Var6):
		return EventWriters::Write(this->writer, items, Group42Var6::Inst());
	case(EventAnalogOutputStatusVariation::Group42Var7):
		return EventWriters::Write(this->writer, items, Group42Var7::Inst());
	case(EventAnalogOutputStatusVariation::Group42Var8):
		return EventWriters::Write(this->writer, items, Group42Var8::Inst());
	default:
		return EventWriters::Write(this->writer, items, Group42Var1::Inst());
	}
}

uint16_t ASDUEventWriteHandler::Write(EventOctetStringVariation variation, uint8_t firstSize, IEventCollection<OctetString>& items)
{
	/*
	// octet strings just get written one at a time to the header
	auto this->writer.IterateOverCountWithPrefix(QualifierCode::UINT16_CNT_UINT16_INDEX, DNP3Serializer)

	return items.WriteSome()
	*/
	return 0;
}

}


