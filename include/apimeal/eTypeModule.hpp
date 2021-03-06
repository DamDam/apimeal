#ifndef APIMEAL_ETYPEMODULE_HPP
#define APIMEAL_ETYPEMODULE_HPP

namespace apimeal {

/**
 * \enum eTypeModule
 * \brief Module type
 */
enum eTypeModule {

	PRECONNEXION,
	POSTCONNEXION,
	PREPARSEREQUEST,
	POSTPARSEREQUEST,
	CONTENTMODULE,
	CGIMODULE,
	POSTGENERATERESPONSE,
	SENDREQUEST
};

}

#endif