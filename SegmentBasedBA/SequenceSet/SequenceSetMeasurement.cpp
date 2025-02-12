/**
* This file is part of SegmentBA.
*
* Copyright (C) 2017 Zhejiang University
* For more information see <https://github.com/ZJUCVG/SegmentBA>
* If you use this code, please cite the corresponding publications as 
* listed on the above website.
*
* SegmentBA is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* SegmentBA is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with SegmentBA. If not, see <http://www.gnu.org/licenses/>.
*/

#include "stdafx.h"
#include "SequenceSet.h"

void SequenceSet::SetMeasurementStates(const SequenceMeasurementIndexList &iSeqMeas, const MeasurementStateList &meaStates)
{
	SequenceIndex iSeq;
	MeasurementIndex iMea;
	const MeasurementIndex nMeas = FrameIndex(meaStates.size());
	for(MeasurementIndex i = 0; i < nMeas; ++i)
	{
		iSeqMeas[i].Get(iSeq, iMea);
		m_pSeqs[iSeq]->SetMeasurementState(iMea, meaStates[i]);
	}
}