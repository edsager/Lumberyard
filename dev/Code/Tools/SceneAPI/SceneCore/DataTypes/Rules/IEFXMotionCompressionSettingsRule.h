#pragma once

/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/

#include <SceneAPI/SceneCore/DataTypes/Rules/IRule.h>
#include <AzCore/RTTI/RTTI.h>

namespace AZ
{
    namespace SceneAPI
    {
        namespace DataTypes
        {
            class IEFXMotionCompressionSettingsRule
                : public IRule
            {
            public:
                AZ_RTTI(IEFXMotionCompressionSettingsRule, "{8BECDD88-9940-4E8E-9E5C-4E088F8D0BDC}", IRule);

                virtual ~IEFXMotionCompressionSettingsRule() override = default;

                virtual float GetMaxTranslationError() const = 0;
                virtual float GetMaxRotationError() const = 0;
                virtual float GetMaxScaleError() const = 0;
            };
        }  // DataTypes
    }  // SceneAPI
}  // AZ
