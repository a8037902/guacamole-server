/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef GUAC_SSH_CLIENT_H
#define GUAC_SSH_CLIENT_H

#include <guacamole/client.h>

/**
 * The maximum number of bytes to allow within the clipboard.
 */
#define GUAC_SSH_CLIPBOARD_MAX_LENGTH 262144

/**
 * Handler which is invoked when the SSH client needs to be disconnected (if
 * connected) and freed. This can happen if initialization fails, or all users
 * have left the connection.
 */
guac_client_free_handler guac_ssh_client_free_handler;

#endif

