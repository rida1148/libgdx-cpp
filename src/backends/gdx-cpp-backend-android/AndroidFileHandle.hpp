/*
 *  Copyright 2011 Aevum Software aevum @ aevumlab.com
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *  @author Victor Vicente de Carvalho victor.carvalho@aevumlab.com
 *  @author Ozires Bortolon de Faria ozires@aevumlab.com
 *  @author aevum team
 */

#ifndef GDX_CPP_BACKENDS_ANDROID_ANDROIDFILEHANDLE_HPP
#define GDX_CPP_BACKENDS_ANDROID_ANDROIDFILEHANDLE_HPP

#include <gdx-cpp/files/FileHandle.hpp>
#include <sys/types.h>
#include <android/asset_manager.h>

namespace gdx_cpp {

namespace backends {

namespace android {

class AndroidFileHandle : public gdx_cpp::files::FileHandle
{
public:
    AndroidFileHandle(AAssetManager* manager, const std::string& fileName, gdx_cpp::Files::FileType type);

    virtual int readBytes(char_ptr& c);
protected:
    AAssetManager* manager;
};

}

}

}

#endif // GDX_CPP_BACKENDS_ANDROID_ANDROIDFILEHANDLE_HPP