// Copyright (c) 2018 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <boost/optional.hpp>
#include <boost/utility/in_place_factory.hpp>
#include <CCPACSWingSparPositionUIDs.h>
#include <string>
#include <tixi.h>
#include "CPACSSparCrossSection.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSWingSparSegments;

namespace generated
{
    // This class is used in:
    // CPACSSparSegments

    // generated from /xsd:schema/xsd:complexType[816]
    class CPACSSparSegment
    {
    public:
        TIGL_EXPORT CPACSSparSegment(CCPACSWingSparSegments* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSSparSegment();

        TIGL_EXPORT CCPACSWingSparSegments* GetParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const boost::optional<std::string>& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const std::string& GetName() const;
        TIGL_EXPORT virtual void SetName(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetDescription() const;
        TIGL_EXPORT virtual void SetDescription(const std::string& value);

        TIGL_EXPORT virtual const CCPACSWingSparPositionUIDs& GetSparPositionUIDs() const;
        TIGL_EXPORT virtual CCPACSWingSparPositionUIDs& GetSparPositionUIDs();

        TIGL_EXPORT virtual const CPACSSparCrossSection& GetSparCrossSection() const;
        TIGL_EXPORT virtual CPACSSparCrossSection& GetSparCrossSection();

    protected:
        CCPACSWingSparSegments* m_parent;

        CTiglUIDManager* m_uidMgr;

        boost::optional<std::string> m_uID;
        std::string                  m_name;
        std::string                  m_description;
        CCPACSWingSparPositionUIDs   m_sparPositionUIDs;
        CPACSSparCrossSection        m_sparCrossSection;

    private:
#ifdef HAVE_CPP11
        CPACSSparSegment(const CPACSSparSegment&) = delete;
        CPACSSparSegment& operator=(const CPACSSparSegment&) = delete;

        CPACSSparSegment(CPACSSparSegment&&) = delete;
        CPACSSparSegment& operator=(CPACSSparSegment&&) = delete;
#else
        CPACSSparSegment(const CPACSSparSegment&);
        CPACSSparSegment& operator=(const CPACSSparSegment&);
#endif
    };
} // namespace generated

// CPACSSparSegment is customized, use type CCPACSWingSparSegment directly
} // namespace tigl
