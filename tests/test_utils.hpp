/**
 * Real Time Protocol Music Instrument Digital Interface Daemon
 * Copyright (C) 2019-2021 David Moreno Montero <dmoreno@coralbits.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#pragma once

#include <vector>

#include <rtpmidid/iobytes.hpp>

class test_client_t {
public:
  int sockfd;
  int local_port;
  int remote_port;
  // UDP connection to this "localhost":port
  test_client_t(int local_port, int remote_port);
  void send(rtpmidid::io_bytes_reader &&data);
  void recv(rtpmidid::io_bytes_reader &&data);
};

rtpmidid::io_bytes_managed hex_to_bin(const std::string &str);
