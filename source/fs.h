#pragma once

#include "common.h"

bool InitFS();
void DeinitFS();

bool FileOpen(const char* path, bool truncate);
size_t FileRead(void* buf, size_t size, size_t foffset);
size_t FileWrite(void* buf, size_t size, size_t foffset);
size_t FileGetSize();
void FileClose();
