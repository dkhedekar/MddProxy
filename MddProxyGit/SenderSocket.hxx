/*
 * SenderSocket.hxx
 *
 *  Created on: May 12, 2015
 *      Author: kheddar
 */

#ifndef SENDERSOCKET_HXX_
#define SENDERSOCKET_HXX_

#include "Socket.hxx"

namespace mdm {
namespace mddproxy {

class SenderSocket: public Socket {
public:
	explicit SenderSocket(AddrT*);
	virtual ~SenderSocket();

	AddrT* Create();
	void ReceiveData();
	void SendData(void*,size_t);

	void EnableLoopback();
	void DisableLoopback();

	void SetBufferSize(size_t newBufferSize);

private:
	bool isLoopBackEnabled;
	char errBuffer[ERROR_BUFF_SIZE];
};

} /* namespace mddproxy */
} /* namespace mdm */

#endif /* SENDERSOCKET_HXX_ */
