// Copyright (c) 2016 RISC Software GmbH
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

#include "CPACSMaterial.h"
#include "CPACSMaterials.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSMaterials::CPACSMaterials(CTiglUIDManager* uidMgr) :
            m_uidMgr(uidMgr) {}
        
        CPACSMaterials::~CPACSMaterials() {}
        
        CTiglUIDManager& CPACSMaterials::GetUIDManager()
        {
            return *m_uidMgr;
        }
        
        const CTiglUIDManager& CPACSMaterials::GetUIDManager() const
        {
            return *m_uidMgr;
        }
        
        void CPACSMaterials::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element material
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/material")) {
                tixihelper::TixiReadElements(tixiHandle, xpath + "/material", m_materials, m_uidMgr);
            }
            
            // read element composites
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/composites")) {
                m_composites = boost::in_place(m_uidMgr);
                try {
                    m_composites->ReadCPACS(tixiHandle, xpath + "/composites");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read composites at xpath " << xpath << ": " << e.what();
                    m_composites = boost::none;
                }
            }
            
        }
        
        void CPACSMaterials::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element material
            tixihelper::TixiSaveElements(tixiHandle, xpath + "/material", m_materials);
            
            // write element composites
            if (m_composites) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/composites");
                m_composites->WriteCPACS(tixiHandle, xpath + "/composites");
            } else {
                if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/composites")) {
                    tixihelper::TixiRemoveElement(tixiHandle, xpath + "/composites");
                }
            }
            
        }
        
        const std::vector<unique_ptr<CPACSMaterial> >& CPACSMaterials::GetMaterials() const
        {
            return m_materials;
        }
        
        std::vector<unique_ptr<CPACSMaterial> >& CPACSMaterials::GetMaterials()
        {
            return m_materials;
        }
        
        const boost::optional<CPACSComposites>& CPACSMaterials::GetComposites() const
        {
            return m_composites;
        }
        
        boost::optional<CPACSComposites>& CPACSMaterials::GetComposites()
        {
            return m_composites;
        }
        
    }
}
