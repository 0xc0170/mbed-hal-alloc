/*
 * Copyright (c) 2015, Martin Kojtal (0xc0170)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef GPIO_API_ALLOC_H
#define GPIO_API_ALLOC_H

#include "device.h"

#ifdef __cplusplus
extern "C" {
#endif

gpio_t* gpio_allocate(void);

void gpio_deallocate(gpio_t *p);

size_t gpio_get_size(void);

#ifdef __cplusplus
}
#endif

#endif
