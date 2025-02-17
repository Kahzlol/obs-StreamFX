// AUTOGENERATED COPYRIGHT HEADER START
// Copyright (C) 2017-2023 Michael Fabian 'Xaymar' Dirks <info@xaymar.com>
// AUTOGENERATED COPYRIGHT HEADER END

#pragma once
#include "nvidia-cuda-stream.hpp"
#include "nvidia-cuda.hpp"
#include "obs/gs/gs-texture.hpp"

#include "warning-disable.hpp"
#include <cstddef>
#include <memory>
#include "warning-enable.hpp"

namespace streamfx::nvidia::cuda {
	class gstexture {
		std::shared_ptr<::streamfx::nvidia::cuda::cuda> _cuda;
		std::shared_ptr<streamfx::obs::gs::texture>     _texture;
		graphics_resource_t                             _resource;

		bool                                            _is_mapped;
		array_t                                         _pointer;
		std::shared_ptr<streamfx::nvidia::cuda::stream> _stream;

		public:
		~gstexture();
		gstexture(std::shared_ptr<streamfx::obs::gs::texture> texture);

		array_t map(std::shared_ptr<streamfx::nvidia::cuda::stream> stream);
		void    unmap();

		std::shared_ptr<streamfx::obs::gs::texture>   get_texture();
		::streamfx::nvidia::cuda::graphics_resource_t get();
	};
} // namespace streamfx::nvidia::cuda
