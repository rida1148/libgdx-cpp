
/*
    Copyright 2011 Aevum Software aevum @ aevumlab.com

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.

    @author Victor Vicente de Carvalho victor.carvalho@aevumlab.com
    @author Ozires Bortolon de Faria ozires@aevumlab.com
*/

#include "Animation.hpp"

using namespace gdx_cpp::graphics::g2d;

TextureRegion& Animation::getKeyFrame (float stateTime,bool looping) {
    int frameNumber = (int)(stateTime / frameDuration);

    if (!looping) {
        frameNumber = Math.min(keyFrames.length - 1, frameNumber);
    } else {
        frameNumber = frameNumber % keyFrames.length;
    }
    return keyFrames[frameNumber];
}
