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
#ifndef OPENPAL_IHMACALGO_H
#define OPENPAL_IHMACALGO_H

#include <openpal/container/RSlice.h>
#include <openpal/container/WSlice.h>

#include <initializer_list>
#include <system_error>

namespace openpal
{
/**
* Provides an abstract interface to an HMAC algorithm
*/
class IHMACAlgo
{
public:
	virtual ~IHMACAlgo() {}

	// Describes the required output size
	virtual uint16_t OutputSize() const = 0;

	// Calculate the HMAC value, writing the result into 'output'
	virtual openpal::RSlice Calculate(
	    const RSlice& key,
	    std::initializer_list<RSlice> data,
	    WSlice& dest,
	    std::error_code& ec
	) = 0;


};
}

#endif
