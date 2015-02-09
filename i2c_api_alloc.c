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
#include "i2c_api_alloc.h"

i2c_t* i2c_allocate(void)
{
    return (i2c_t *)malloc(sizeof(i2c_t));
}

void i2c_deallocate(i2c_t *p)
{
    free(p);
}

size_t i2c_get_size(void)
{
    return sizeof(i2c_t);
}
