---
id: FFMPEG
aliases: []
tags: []
---

**FFMPEG** is a multimedia tool for handling audio and video tasks. 

It works in the following way - 
- **Input parsing** - it read the input file and identifies their formas(MP4, AVI, MKV, MOV) and codecs(H264, H265, AV1, AAC, MP3).
- **Demuxing** - It seperates the audio files into individual streams(video, audio, subtitles).
- **Decoding** - Compressed streams are decoded into raw data.
- **Processing** - ffmpeg applies any specific filter or transformation.
- **Encoding** - Raw data is re-encoded using specified codecs.
- **Muxing** - Processed streams are combined into output formats.
- **Output** - The final file is written to specific destination.

### DEMUXING
Demuxing or Demultiplexing is separating or extracting the individual streams(video, audio) from the container format(MP4, MKV).
- Stream Separation - It identifies and separates different types of data and separates them.
- Metadata extraction - It pulls out information about each stream such as codec type, bitrate, frame rate, etc.
- Timing Information - It extracts timestamps and other synchronization data to ensure proper playback.
- Protocol handling - For streaming formats, it handles the underlying transport protocol(RTMP, HLS).
- Error handling - It deals with issues like corrupted data or incomplete files.

### DECODING
It is the process of converted compressed audio and video into raw uncompressed format that can be manipulated. Libavcodec library is primarily used for decoding.
- Stream selection - ffmpeg identifies which stream need to be decoded based on the user input or default settings.
- Codec identification - It determines the specific codec used for the stream.
- Initialization - The appropriate decoder is initialized with necessary parameters.
- Data parsing - Compressed data is read and parsed into individual encoded units(video frames, audio samples)
- Decompression - This is where the video's compressed frames become raw pixel data and audio becomes PCM(Pulse code modulation) samples.
- Format conversion - If needed, the decoded data may be converted to a specific pixel format or sample format.
- Timing information - Decoded frames/samples are associated with their corresponding timestamps.

### PROCESSING
This is where various operations and transformations are applied to the decoded audio and video data.
Heres some things - 
- Filtering - Common filter such as scaling, cropping, color adjustment, and overlays, etc are applied for video and audio filters such as volume adjustment, equalization, or mixing,etc are done.
- Stream Manipulation - Streams can be added, removed, modified. You can extact audio stream or add subtitles.
- Format Conversion - formats for different media can be changed.
- Audio sampling - Sample rates can be changed or audio channels can be remapped.
- Metadata manipulation - Metadata in the streams can be modified, added or removed.
- Complex operation - Video stabilization, noise reduction or audio normalization, etc can be performed.
- Custom processing - You can add custom filter, processing scripts or enable highly specific transformation.
- Hardware acceleration - Some processing task can be leveraged using GPU acceleration.

### ENCODING
It is the process of compressing the processed raw data into specific formats.
- Codec selection - ffmpeg initialized the appropriate encoder from its libavcodec library that is specified by the user.
- Parameter setting - Encoding parameters such as bitrate, quality level, encoding speed, etc. User specified or ffmpeg default values are used.
- Frame preparation - Raw frames are prepared for encoding, which may involve color space conversion and pixel format adjustment.
- Compression - For video, spacial and temporal redundancies are removed. For audio, psychoacoustic models are applied to remove imperceptible data.
- Rate control - Bitrate is managed to meet specified target.
- Keyframe insertion - fully self-contained frames are inserted at specified intervals.
- Metadata inclusion - Relevant metadata is embedded into encoded stream.
- Hardware acceleration - You can use the GPU to speed this part up.

### MUXING
Multiplexing is the final destination in ffmpeg pipeline.
- Stream combination - the separated encoded streams are combined into a single container format(MP4, MKV)
- Interleaving - The muxer interleaves data from different streams, ensuring proper synchronization during playback.
- Metadata integration - Global metadata and stream-specific metadata are incorporated into the container.
- Index creation - An index is generated to allow for quick seeking within the file
- Header writing - The container header is written including information about the file structure and contained streams.
- Chunk management - For streaming-friendly formats, data is organized into appropriate chunks or segments.
- Output wrting - the muxed data is written to the output file or stream.
- Finalization - The file is properly closed, ensuring all necessary end-of-file markers and structures are in place.

