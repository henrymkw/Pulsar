#ifndef _MISCSOUND_
#define _MISCSOUND_

#include <kamek.hpp>
#include <core/nw4r/snd.hpp>
#include <game/Archive/ArchiveRoot.hpp>
#include <game/Sound/SingleSoundPlayer.hpp>

namespace Pulsar {
namespace Audio {

snd::SoundStartable::StartResult PlayExtBRSEQ(snd::SoundStartable& startable, AudioHandle& handle, const char* fileName, const char* labelName, bool hold);

}//namespace Audio
}//namespace Pulsar

#endif