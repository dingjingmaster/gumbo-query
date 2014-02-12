/***************************************************************************
 * 
 * Copyright (c) 2010 baimashi.com, Inc. All Rights Reserved
 * $Id$
 * 
 **************************************************************************/

/**
 * @file $HeadURL$
 * @author $Author$(hoping@baimashi.com)
 * @date $Date$
 * @version $Revision$
 * @brief 
 *  
 **/

#ifndef DOCUMENT_H_
#define DOCUMENT_H_

class CSelection;

class CDocument: public CSelection
{
	public:

		CDocument();

		virtual ~CDocument();

		std::vector<GumboNode*> find(std::string aSelector);

	public:

	private:

};

#endif /* DOCUMENT_H_ */

/* vim: set ts=4 sw=4 sts=4 tw=100 noet: */
