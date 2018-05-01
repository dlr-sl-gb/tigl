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
#include <string>
#include <tixi.h>
#include <vector>
#include "CPACSGlobalBeamProperties.h"
#include "CPACSProfileBasedStructuralElement_standardProfileType.h"
#include "CPACSTransformation2D.h"
#include "CreateIfNotExists.h"
#include "tigl_internal.h"
#include "UniquePtr.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    class CPACSMaterialDefinitionForProfileBased;
    class CPACSMaterialDefinitionForProfileBasedPoint;

    // This class is used in:
    // CPACSProfileBasedStructuralElements

    // generated from /xsd:schema/xsd:complexType[732]
    class CPACSProfileBasedStructuralElement
    {
    public:
        TIGL_EXPORT CPACSProfileBasedStructuralElement(CTiglUIDManager* uidMgr);
        TIGL_EXPORT virtual ~CPACSProfileBasedStructuralElement();

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT bool ValidateChoices() const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetName() const;
        TIGL_EXPORT virtual void SetName(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetDescription() const;
        TIGL_EXPORT virtual void SetDescription(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const std::vector<unique_ptr<CPACSMaterialDefinitionForProfileBased> >& GetSheetProperties() const;
        TIGL_EXPORT virtual std::vector<unique_ptr<CPACSMaterialDefinitionForProfileBased> >& GetSheetProperties();

        TIGL_EXPORT virtual const boost::optional<CPACSTransformation2D>& GetTransformation() const;
        TIGL_EXPORT virtual boost::optional<CPACSTransformation2D>& GetTransformation();

        TIGL_EXPORT virtual const boost::optional<CPACSGlobalBeamProperties>& GetGlobalBeamProperties() const;
        TIGL_EXPORT virtual boost::optional<CPACSGlobalBeamProperties>& GetGlobalBeamProperties();

        TIGL_EXPORT virtual const boost::optional<std::string>& GetStructuralProfileUID_choice1() const;
        TIGL_EXPORT virtual void SetStructuralProfileUID_choice1(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const std::vector<unique_ptr<CPACSMaterialDefinitionForProfileBasedPoint> >& GetPointProperties_choice1() const;
        TIGL_EXPORT virtual std::vector<unique_ptr<CPACSMaterialDefinitionForProfileBasedPoint> >& GetPointProperties_choice1();

        TIGL_EXPORT virtual const boost::optional<std::string>& GetReferencePointUID_choice1() const;
        TIGL_EXPORT virtual void SetReferencePointUID_choice1(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<CPACSProfileBasedStructuralElement_standardProfileType>& GetStandardProfileType_choice2() const;
        TIGL_EXPORT virtual void SetStandardProfileType_choice2(const boost::optional<CPACSProfileBasedStructuralElement_standardProfileType>& value);

        TIGL_EXPORT virtual CPACSMaterialDefinitionForProfileBased& AddSheetProperties();
        TIGL_EXPORT virtual void RemoveSheetProperties(CPACSMaterialDefinitionForProfileBased& ref);

        TIGL_EXPORT virtual CPACSTransformation2D& GetTransformation(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveTransformation();

        TIGL_EXPORT virtual CPACSGlobalBeamProperties& GetGlobalBeamProperties(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveGlobalBeamProperties();

        TIGL_EXPORT virtual CPACSMaterialDefinitionForProfileBasedPoint& AddPointProperties_choice1();
        TIGL_EXPORT virtual void RemovePointProperties_choice1(CPACSMaterialDefinitionForProfileBasedPoint& ref);

    protected:
        CTiglUIDManager* m_uidMgr;

        std::string                                                             m_uID;
        boost::optional<std::string>                                            m_name;
        boost::optional<std::string>                                            m_description;
        std::vector<unique_ptr<CPACSMaterialDefinitionForProfileBased> >        m_sheetProperties;
        boost::optional<CPACSTransformation2D>                                  m_transformation;
        boost::optional<CPACSGlobalBeamProperties>                              m_globalBeamProperties;
        boost::optional<std::string>                                            m_structuralProfileUID_choice1;
        std::vector<unique_ptr<CPACSMaterialDefinitionForProfileBasedPoint> >   m_pointProperties_choice1;
        boost::optional<std::string>                                            m_referencePointUID_choice1;
        boost::optional<CPACSProfileBasedStructuralElement_standardProfileType> m_standardProfileType_choice2;

    private:
#ifdef HAVE_CPP11
        CPACSProfileBasedStructuralElement(const CPACSProfileBasedStructuralElement&) = delete;
        CPACSProfileBasedStructuralElement& operator=(const CPACSProfileBasedStructuralElement&) = delete;

        CPACSProfileBasedStructuralElement(CPACSProfileBasedStructuralElement&&) = delete;
        CPACSProfileBasedStructuralElement& operator=(CPACSProfileBasedStructuralElement&&) = delete;
#else
        CPACSProfileBasedStructuralElement(const CPACSProfileBasedStructuralElement&);
        CPACSProfileBasedStructuralElement& operator=(const CPACSProfileBasedStructuralElement&);
#endif
    };
} // namespace generated

// CPACSProfileBasedStructuralElement is customized, use type CCPACSProfileBasedStructuralElement directly

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSMaterialDefinitionForProfileBased = generated::CPACSMaterialDefinitionForProfileBased;
using CCPACSMaterialDefinitionForProfileBasedPoint = generated::CPACSMaterialDefinitionForProfileBasedPoint;
#else
typedef generated::CPACSMaterialDefinitionForProfileBased CCPACSMaterialDefinitionForProfileBased;
typedef generated::CPACSMaterialDefinitionForProfileBasedPoint CCPACSMaterialDefinitionForProfileBasedPoint;
#endif
} // namespace tigl