/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright 2024-2025 NXP
 *
 */

void bass_add_stream(struct btd_device *device, struct iovec *meta,
			struct iovec *caps, struct bt_bap_qos *qos,
			uint8_t sgrp, uint8_t bis);
void bass_remove_stream(struct btd_device *device);

typedef void (*bt_bass_bcode_func_t)(void *user_data, int err);

void bass_req_bcode(struct bt_bap_stream *stream,
				bt_bass_bcode_func_t cb,
				void *user_data);
