#ifndef __SUPPORT_MIPS_H
#define __SUPPORT_MIPS_H
/*
	Copyright (c) 1996-1997 Swiss Federal Institute of Technology, 
	Computer Engineering and Networks Laboratory. All rights reserved.

	TOPSY - A Teachable Operating System. 
		Implementation of a tiny and simple micro kernel for
		teaching purposes.

	Permission to use, copy, modify, and distribute this software and its
	documentation for any purpose, without fee, and without written 
	agreement is hereby granted, provided that the above copyright notice 
	and the following two paragraphs appear in all copies of this software.


	
	File:                  $Source: /proj/topsy/ss98/Topsy/Topsy/mips/RCS/SupportMIPS.h,v $
 	Author(s):             George Fankhauser 
 	Affiliation:           ETH Zuerich, TIK
 	Version:               $Revision: 1.3 $
 	Creation Date:         
 	Last Date of Change:   $Date: 1998/04/08 15:09:44 $      by: $Author: gfa $
	
	
*/

#include "Topsy.h"
#include "cpu.h"

Register getEPC(void);
Register getBADVM(void);

#endif /* __SUPPORT_MIPS_H */
