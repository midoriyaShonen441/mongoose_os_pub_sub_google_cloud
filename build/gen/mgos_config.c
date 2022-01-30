/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/tools/mgos_gen_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.20.0/apps/01_fodder_system_microcontroller/esp32/build_contexts/build_ctx_696434173/build/gen/ /mongoose-os/src/mgos_debug_udp_config.yaml /mongoose-os/platforms/esp32/src/esp32_sys_config.yaml /data/fwbuild-volumes/2.20.0/apps/01_fodder_system_microcontroller/esp32/build_contexts/build_ctx_696434173/build/gen/mos_conf_schema.yml
 */

#include "mgos_config.h"

#include <stdbool.h>

#include "common/cs_file.h"

#include "mgos_config_util.h"


/* struct mgos_config */
static const struct mgos_conf_entry mgos_config_schema_[] = {
    {.type = CONF_TYPE_OBJECT, .key = "", .offset = 0, .num_desc = 437},
    {.type = CONF_TYPE_OBJECT, .key = "debug", .offset = offsetof(struct mgos_config, debug), .num_desc = 12},
    {.type = CONF_TYPE_STRING, .key = "udp_log_addr", .offset = offsetof(struct mgos_config, debug.udp_log_addr)},
    {.type = CONF_TYPE_INT, .key = "udp_log_level", .offset = offsetof(struct mgos_config, debug.udp_log_level)},
    {.type = CONF_TYPE_INT, .key = "mbedtls_level", .offset = offsetof(struct mgos_config, debug.mbedtls_level)},
    {.type = CONF_TYPE_INT, .key = "level", .offset = offsetof(struct mgos_config, debug.level)},
    {.type = CONF_TYPE_STRING, .key = "file_level", .offset = offsetof(struct mgos_config, debug.file_level)},
    {.type = CONF_TYPE_INT, .key = "event_level", .offset = offsetof(struct mgos_config, debug.event_level)},
    {.type = CONF_TYPE_INT, .key = "stdout_uart", .offset = offsetof(struct mgos_config, debug.stdout_uart)},
    {.type = CONF_TYPE_INT, .key = "stderr_uart", .offset = offsetof(struct mgos_config, debug.stderr_uart)},
    {.type = CONF_TYPE_INT, .key = "factory_reset_gpio", .offset = offsetof(struct mgos_config, debug.factory_reset_gpio)},
    {.type = CONF_TYPE_STRING, .key = "mg_mgr_hexdump_file", .offset = offsetof(struct mgos_config, debug.mg_mgr_hexdump_file)},
    {.type = CONF_TYPE_STRING, .key = "stdout_topic", .offset = offsetof(struct mgos_config, debug.stdout_topic)},
    {.type = CONF_TYPE_STRING, .key = "stderr_topic", .offset = offsetof(struct mgos_config, debug.stderr_topic)},
    {.type = CONF_TYPE_OBJECT, .key = "sys", .offset = offsetof(struct mgos_config, sys), .num_desc = 16},
    {.type = CONF_TYPE_INT, .key = "esp32_adc_vref", .offset = offsetof(struct mgos_config, sys.esp32_adc_vref)},
    {.type = CONF_TYPE_INT, .key = "esp32_adc_width", .offset = offsetof(struct mgos_config, sys.esp32_adc_width)},
    {.type = CONF_TYPE_STRING, .key = "tz_spec", .offset = offsetof(struct mgos_config, sys.tz_spec)},
    {.type = CONF_TYPE_INT, .key = "wdt_timeout", .offset = offsetof(struct mgos_config, sys.wdt_timeout)},
    {.type = CONF_TYPE_STRING, .key = "pref_ota_lib", .offset = offsetof(struct mgos_config, sys.pref_ota_lib)},
    {.type = CONF_TYPE_OBJECT, .key = "atca", .offset = offsetof(struct mgos_config, sys.atca), .num_desc = 4},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, sys.atca.enable)},
    {.type = CONF_TYPE_INT, .key = "i2c_bus", .offset = offsetof(struct mgos_config, sys.atca.i2c_bus)},
    {.type = CONF_TYPE_INT, .key = "i2c_addr", .offset = offsetof(struct mgos_config, sys.atca.i2c_addr)},
    {.type = CONF_TYPE_INT, .key = "ecdh_slots_mask", .offset = offsetof(struct mgos_config, sys.atca.ecdh_slots_mask)},
    {.type = CONF_TYPE_OBJECT, .key = "mount", .offset = offsetof(struct mgos_config, sys.mount), .num_desc = 5},
    {.type = CONF_TYPE_STRING, .key = "path", .offset = offsetof(struct mgos_config, sys.mount.path)},
    {.type = CONF_TYPE_STRING, .key = "dev_type", .offset = offsetof(struct mgos_config, sys.mount.dev_type)},
    {.type = CONF_TYPE_STRING, .key = "dev_opts", .offset = offsetof(struct mgos_config, sys.mount.dev_opts)},
    {.type = CONF_TYPE_STRING, .key = "fs_type", .offset = offsetof(struct mgos_config, sys.mount.fs_type)},
    {.type = CONF_TYPE_STRING, .key = "fs_opts", .offset = offsetof(struct mgos_config, sys.mount.fs_opts)},
    {.type = CONF_TYPE_OBJECT, .key = "device", .offset = offsetof(struct mgos_config, device), .num_desc = 5},
    {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct mgos_config, device.id)},
    {.type = CONF_TYPE_STRING, .key = "license", .offset = offsetof(struct mgos_config, device.license)},
    {.type = CONF_TYPE_STRING, .key = "mac", .offset = offsetof(struct mgos_config, device.mac)},
    {.type = CONF_TYPE_STRING, .key = "public_key", .offset = offsetof(struct mgos_config, device.public_key)},
    {.type = CONF_TYPE_STRING, .key = "sn", .offset = offsetof(struct mgos_config, device.sn)},
    {.type = CONF_TYPE_STRING, .key = "conf_acl", .offset = offsetof(struct mgos_config, conf_acl)},
    {.type = CONF_TYPE_OBJECT, .key = "i2c", .offset = offsetof(struct mgos_config, i2c), .num_desc = 6},
    {.type = CONF_TYPE_INT, .key = "unit_no", .offset = offsetof(struct mgos_config, i2c.unit_no)},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, i2c.enable)},
    {.type = CONF_TYPE_INT, .key = "freq", .offset = offsetof(struct mgos_config, i2c.freq)},
    {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, i2c.debug)},
    {.type = CONF_TYPE_INT, .key = "sda_gpio", .offset = offsetof(struct mgos_config, i2c.sda_gpio)},
    {.type = CONF_TYPE_INT, .key = "scl_gpio", .offset = offsetof(struct mgos_config, i2c.scl_gpio)},
    {.type = CONF_TYPE_OBJECT, .key = "i2c1", .offset = offsetof(struct mgos_config, i2c1), .num_desc = 6},
    {.type = CONF_TYPE_INT, .key = "unit_no", .offset = offsetof(struct mgos_config, i2c1.unit_no)},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, i2c1.enable)},
    {.type = CONF_TYPE_INT, .key = "freq", .offset = offsetof(struct mgos_config, i2c1.freq)},
    {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, i2c1.debug)},
    {.type = CONF_TYPE_INT, .key = "sda_gpio", .offset = offsetof(struct mgos_config, i2c1.sda_gpio)},
    {.type = CONF_TYPE_INT, .key = "scl_gpio", .offset = offsetof(struct mgos_config, i2c1.scl_gpio)},
    {.type = CONF_TYPE_OBJECT, .key = "mqtt", .offset = offsetof(struct mgos_config, mqtt), .num_desc = 25},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mqtt.enable)},
    {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, mqtt.server)},
    {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, mqtt.client_id)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, mqtt.user)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, mqtt.pass)},
    {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_min)},
    {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_max)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, mqtt.ssl_key)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cipher_suites", .offset = offsetof(struct mgos_config, mqtt.ssl_cipher_suites)},
    {.type = CONF_TYPE_STRING, .key = "ssl_psk_identity", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_identity)},
    {.type = CONF_TYPE_STRING, .key = "ssl_psk_key", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_key)},
    {.type = CONF_TYPE_BOOL, .key = "clean_session", .offset = offsetof(struct mgos_config, mqtt.clean_session)},
    {.type = CONF_TYPE_INT, .key = "keep_alive", .offset = offsetof(struct mgos_config, mqtt.keep_alive)},
    {.type = CONF_TYPE_STRING, .key = "will_topic", .offset = offsetof(struct mgos_config, mqtt.will_topic)},
    {.type = CONF_TYPE_STRING, .key = "will_message", .offset = offsetof(struct mgos_config, mqtt.will_message)},
    {.type = CONF_TYPE_BOOL, .key = "will_retain", .offset = offsetof(struct mgos_config, mqtt.will_retain)},
    {.type = CONF_TYPE_INT, .key = "max_qos", .offset = offsetof(struct mgos_config, mqtt.max_qos)},
    {.type = CONF_TYPE_INT, .key = "recv_mbuf_limit", .offset = offsetof(struct mgos_config, mqtt.recv_mbuf_limit)},
    {.type = CONF_TYPE_BOOL, .key = "require_time", .offset = offsetof(struct mgos_config, mqtt.require_time)},
    {.type = CONF_TYPE_BOOL, .key = "cloud_events", .offset = offsetof(struct mgos_config, mqtt.cloud_events)},
    {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, mqtt.max_queue_length)},
    {.type = CONF_TYPE_BOOL, .key = "ws_enable", .offset = offsetof(struct mgos_config, mqtt.ws_enable)},
    {.type = CONF_TYPE_STRING, .key = "ws_path", .offset = offsetof(struct mgos_config, mqtt.ws_path)},
    {.type = CONF_TYPE_OBJECT, .key = "mqtt1", .offset = offsetof(struct mgos_config, mqtt1), .num_desc = 25},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mqtt1.enable)},
    {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, mqtt1.server)},
    {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, mqtt1.client_id)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, mqtt1.user)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, mqtt1.pass)},
    {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, mqtt1.reconnect_timeout_min)},
    {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, mqtt1.reconnect_timeout_max)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, mqtt1.ssl_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, mqtt1.ssl_key)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, mqtt1.ssl_ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cipher_suites", .offset = offsetof(struct mgos_config, mqtt1.ssl_cipher_suites)},
    {.type = CONF_TYPE_STRING, .key = "ssl_psk_identity", .offset = offsetof(struct mgos_config, mqtt1.ssl_psk_identity)},
    {.type = CONF_TYPE_STRING, .key = "ssl_psk_key", .offset = offsetof(struct mgos_config, mqtt1.ssl_psk_key)},
    {.type = CONF_TYPE_BOOL, .key = "clean_session", .offset = offsetof(struct mgos_config, mqtt1.clean_session)},
    {.type = CONF_TYPE_INT, .key = "keep_alive", .offset = offsetof(struct mgos_config, mqtt1.keep_alive)},
    {.type = CONF_TYPE_STRING, .key = "will_topic", .offset = offsetof(struct mgos_config, mqtt1.will_topic)},
    {.type = CONF_TYPE_STRING, .key = "will_message", .offset = offsetof(struct mgos_config, mqtt1.will_message)},
    {.type = CONF_TYPE_BOOL, .key = "will_retain", .offset = offsetof(struct mgos_config, mqtt1.will_retain)},
    {.type = CONF_TYPE_INT, .key = "max_qos", .offset = offsetof(struct mgos_config, mqtt1.max_qos)},
    {.type = CONF_TYPE_INT, .key = "recv_mbuf_limit", .offset = offsetof(struct mgos_config, mqtt1.recv_mbuf_limit)},
    {.type = CONF_TYPE_BOOL, .key = "require_time", .offset = offsetof(struct mgos_config, mqtt1.require_time)},
    {.type = CONF_TYPE_BOOL, .key = "cloud_events", .offset = offsetof(struct mgos_config, mqtt1.cloud_events)},
    {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, mqtt1.max_queue_length)},
    {.type = CONF_TYPE_BOOL, .key = "ws_enable", .offset = offsetof(struct mgos_config, mqtt1.ws_enable)},
    {.type = CONF_TYPE_STRING, .key = "ws_path", .offset = offsetof(struct mgos_config, mqtt1.ws_path)},
    {.type = CONF_TYPE_OBJECT, .key = "shadow", .offset = offsetof(struct mgos_config, shadow), .num_desc = 5},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, shadow.enable)},
    {.type = CONF_TYPE_STRING, .key = "lib", .offset = offsetof(struct mgos_config, shadow.lib)},
    {.type = CONF_TYPE_BOOL, .key = "get_on_connect", .offset = offsetof(struct mgos_config, shadow.get_on_connect)},
    {.type = CONF_TYPE_BOOL, .key = "ota_enable", .offset = offsetof(struct mgos_config, shadow.ota_enable)},
    {.type = CONF_TYPE_BOOL, .key = "autocommit", .offset = offsetof(struct mgos_config, shadow.autocommit)},
    {.type = CONF_TYPE_OBJECT, .key = "aws", .offset = offsetof(struct mgos_config, aws), .num_desc = 5},
    {.type = CONF_TYPE_STRING, .key = "thing_name", .offset = offsetof(struct mgos_config, aws.thing_name)},
    {.type = CONF_TYPE_OBJECT, .key = "greengrass", .offset = offsetof(struct mgos_config, aws.greengrass), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, aws.greengrass.enable)},
    {.type = CONF_TYPE_INT, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, aws.greengrass.reconnect_timeout_min)},
    {.type = CONF_TYPE_INT, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, aws.greengrass.reconnect_timeout_max)},
    {.type = CONF_TYPE_OBJECT, .key = "sntp", .offset = offsetof(struct mgos_config, sntp), .num_desc = 5},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, sntp.enable)},
    {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, sntp.server)},
    {.type = CONF_TYPE_INT, .key = "retry_min", .offset = offsetof(struct mgos_config, sntp.retry_min)},
    {.type = CONF_TYPE_INT, .key = "retry_max", .offset = offsetof(struct mgos_config, sntp.retry_max)},
    {.type = CONF_TYPE_INT, .key = "update_interval", .offset = offsetof(struct mgos_config, sntp.update_interval)},
    {.type = CONF_TYPE_OBJECT, .key = "azure", .offset = offsetof(struct mgos_config, azure), .num_desc = 9},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, azure.enable)},
    {.type = CONF_TYPE_STRING, .key = "cs", .offset = offsetof(struct mgos_config, azure.cs)},
    {.type = CONF_TYPE_INT, .key = "token_ttl", .offset = offsetof(struct mgos_config, azure.token_ttl)},
    {.type = CONF_TYPE_STRING, .key = "host_name", .offset = offsetof(struct mgos_config, azure.host_name)},
    {.type = CONF_TYPE_STRING, .key = "device_id", .offset = offsetof(struct mgos_config, azure.device_id)},
    {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, azure.cert)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, azure.key)},
    {.type = CONF_TYPE_BOOL, .key = "enable_cm", .offset = offsetof(struct mgos_config, azure.enable_cm)},
    {.type = CONF_TYPE_BOOL, .key = "enable_dm", .offset = offsetof(struct mgos_config, azure.enable_dm)},
    {.type = CONF_TYPE_OBJECT, .key = "bt", .offset = offsetof(struct mgos_config, bt), .num_desc = 13},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, bt.enable)},
    {.type = CONF_TYPE_STRING, .key = "dev_name", .offset = offsetof(struct mgos_config, bt.dev_name)},
    {.type = CONF_TYPE_BOOL, .key = "adv_enable", .offset = offsetof(struct mgos_config, bt.adv_enable)},
    {.type = CONF_TYPE_STRING, .key = "scan_rsp_data_hex", .offset = offsetof(struct mgos_config, bt.scan_rsp_data_hex)},
    {.type = CONF_TYPE_BOOL, .key = "keep_enabled", .offset = offsetof(struct mgos_config, bt.keep_enabled)},
    {.type = CONF_TYPE_BOOL, .key = "allow_pairing", .offset = offsetof(struct mgos_config, bt.allow_pairing)},
    {.type = CONF_TYPE_INT, .key = "max_paired_devices", .offset = offsetof(struct mgos_config, bt.max_paired_devices)},
    {.type = CONF_TYPE_BOOL, .key = "random_address", .offset = offsetof(struct mgos_config, bt.random_address)},
    {.type = CONF_TYPE_INT, .key = "gatt_mtu", .offset = offsetof(struct mgos_config, bt.gatt_mtu)},
    {.type = CONF_TYPE_OBJECT, .key = "gatts", .offset = offsetof(struct mgos_config, bt.gatts), .num_desc = 1},
    {.type = CONF_TYPE_INT, .key = "min_sec_level", .offset = offsetof(struct mgos_config, bt.gatts.min_sec_level)},
    {.type = CONF_TYPE_BOOL, .key = "debug_svc_enable", .offset = offsetof(struct mgos_config, bt.debug_svc_enable)},
    {.type = CONF_TYPE_INT, .key = "debug_svc_sec_level", .offset = offsetof(struct mgos_config, bt.debug_svc_sec_level)},
    {.type = CONF_TYPE_OBJECT, .key = "update", .offset = offsetof(struct mgos_config, update), .num_desc = 18},
    {.type = CONF_TYPE_INT, .key = "timeout", .offset = offsetof(struct mgos_config, update.timeout)},
    {.type = CONF_TYPE_INT, .key = "commit_timeout", .offset = offsetof(struct mgos_config, update.commit_timeout)},
    {.type = CONF_TYPE_STRING, .key = "key0", .offset = offsetof(struct mgos_config, update.key0)},
    {.type = CONF_TYPE_STRING, .key = "key1", .offset = offsetof(struct mgos_config, update.key1)},
    {.type = CONF_TYPE_STRING, .key = "key2", .offset = offsetof(struct mgos_config, update.key2)},
    {.type = CONF_TYPE_STRING, .key = "key3", .offset = offsetof(struct mgos_config, update.key3)},
    {.type = CONF_TYPE_STRING, .key = "key4", .offset = offsetof(struct mgos_config, update.key4)},
    {.type = CONF_TYPE_STRING, .key = "key5", .offset = offsetof(struct mgos_config, update.key5)},
    {.type = CONF_TYPE_STRING, .key = "key6", .offset = offsetof(struct mgos_config, update.key6)},
    {.type = CONF_TYPE_STRING, .key = "key7", .offset = offsetof(struct mgos_config, update.key7)},
    {.type = CONF_TYPE_INT, .key = "sig_req_mask", .offset = offsetof(struct mgos_config, update.sig_req_mask)},
    {.type = CONF_TYPE_STRING, .key = "url", .offset = offsetof(struct mgos_config, update.url)},
    {.type = CONF_TYPE_INT, .key = "interval", .offset = offsetof(struct mgos_config, update.interval)},
    {.type = CONF_TYPE_STRING, .key = "extra_http_headers", .offset = offsetof(struct mgos_config, update.extra_http_headers)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_file", .offset = offsetof(struct mgos_config, update.ssl_ca_file)},
    {.type = CONF_TYPE_STRING, .key = "ssl_client_cert_file", .offset = offsetof(struct mgos_config, update.ssl_client_cert_file)},
    {.type = CONF_TYPE_STRING, .key = "ssl_server_name", .offset = offsetof(struct mgos_config, update.ssl_server_name)},
    {.type = CONF_TYPE_BOOL, .key = "enable_post", .offset = offsetof(struct mgos_config, update.enable_post)},
    {.type = CONF_TYPE_OBJECT, .key = "rpc", .offset = offsetof(struct mgos_config, rpc), .num_desc = 41},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.enable)},
    {.type = CONF_TYPE_BOOL, .key = "http_enable", .offset = offsetof(struct mgos_config, rpc.http_enable)},
    {.type = CONF_TYPE_BOOL, .key = "service_sys_enable", .offset = offsetof(struct mgos_config, rpc.service_sys_enable)},
    {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct mgos_config, rpc.max_frame_size)},
    {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, rpc.max_queue_length)},
    {.type = CONF_TYPE_INT, .key = "max_non_persistent_channels", .offset = offsetof(struct mgos_config, rpc.max_non_persistent_channels)},
    {.type = CONF_TYPE_INT, .key = "default_out_channel_idle_close_timeout", .offset = offsetof(struct mgos_config, rpc.default_out_channel_idle_close_timeout)},
    {.type = CONF_TYPE_STRING, .key = "acl", .offset = offsetof(struct mgos_config, rpc.acl)},
    {.type = CONF_TYPE_STRING, .key = "acl_file", .offset = offsetof(struct mgos_config, rpc.acl_file)},
    {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, rpc.auth_domain)},
    {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, rpc.auth_file)},
    {.type = CONF_TYPE_INT, .key = "auth_algo", .offset = offsetof(struct mgos_config, rpc.auth_algo)},
    {.type = CONF_TYPE_OBJECT, .key = "ws", .offset = offsetof(struct mgos_config, rpc.ws), .num_desc = 8},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.ws.enable)},
    {.type = CONF_TYPE_STRING, .key = "server_address", .offset = offsetof(struct mgos_config, rpc.ws.server_address)},
    {.type = CONF_TYPE_INT, .key = "reconnect_interval_min", .offset = offsetof(struct mgos_config, rpc.ws.reconnect_interval_min)},
    {.type = CONF_TYPE_INT, .key = "reconnect_interval_max", .offset = offsetof(struct mgos_config, rpc.ws.reconnect_interval_max)},
    {.type = CONF_TYPE_STRING, .key = "ssl_server_name", .offset = offsetof(struct mgos_config, rpc.ws.ssl_server_name)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, rpc.ws.ssl_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, rpc.ws.ssl_key)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, rpc.ws.ssl_ca_cert)},
    {.type = CONF_TYPE_OBJECT, .key = "azure", .offset = offsetof(struct mgos_config, rpc.azure), .num_desc = 1},
    {.type = CONF_TYPE_BOOL, .key = "enable_dm", .offset = offsetof(struct mgos_config, rpc.azure.enable_dm)},
    {.type = CONF_TYPE_OBJECT, .key = "gatts", .offset = offsetof(struct mgos_config, rpc.gatts), .num_desc = 3},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.gatts.enable)},
    {.type = CONF_TYPE_INT, .key = "sec_level", .offset = offsetof(struct mgos_config, rpc.gatts.sec_level)},
    {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct mgos_config, rpc.gatts.max_frame_size)},
    {.type = CONF_TYPE_OBJECT, .key = "gcp", .offset = offsetof(struct mgos_config, rpc.gcp), .num_desc = 2},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.gcp.enable)},
    {.type = CONF_TYPE_STRING, .key = "subfolder", .offset = offsetof(struct mgos_config, rpc.gcp.subfolder)},
    {.type = CONF_TYPE_OBJECT, .key = "mqtt", .offset = offsetof(struct mgos_config, rpc.mqtt), .num_desc = 5},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.mqtt.enable)},
    {.type = CONF_TYPE_STRING, .key = "pub_topic", .offset = offsetof(struct mgos_config, rpc.mqtt.pub_topic)},
    {.type = CONF_TYPE_STRING, .key = "sub_topic", .offset = offsetof(struct mgos_config, rpc.mqtt.sub_topic)},
    {.type = CONF_TYPE_BOOL, .key = "sub_wc", .offset = offsetof(struct mgos_config, rpc.mqtt.sub_wc)},
    {.type = CONF_TYPE_INT, .key = "qos", .offset = offsetof(struct mgos_config, rpc.mqtt.qos)},
    {.type = CONF_TYPE_OBJECT, .key = "uart", .offset = offsetof(struct mgos_config, rpc.uart), .num_desc = 4},
    {.type = CONF_TYPE_INT, .key = "uart_no", .offset = offsetof(struct mgos_config, rpc.uart.uart_no)},
    {.type = CONF_TYPE_INT, .key = "baud_rate", .offset = offsetof(struct mgos_config, rpc.uart.baud_rate)},
    {.type = CONF_TYPE_INT, .key = "fc_type", .offset = offsetof(struct mgos_config, rpc.uart.fc_type)},
    {.type = CONF_TYPE_STRING, .key = "dst", .offset = offsetof(struct mgos_config, rpc.uart.dst)},
    {.type = CONF_TYPE_OBJECT, .key = "dash", .offset = offsetof(struct mgos_config, dash), .num_desc = 7},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, dash.enable)},
    {.type = CONF_TYPE_STRING, .key = "token", .offset = offsetof(struct mgos_config, dash.token)},
    {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, dash.server)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, dash.ssl_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, dash.ssl_key)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, dash.ssl_ca_cert)},
    {.type = CONF_TYPE_BOOL, .key = "send_logs", .offset = offsetof(struct mgos_config, dash.send_logs)},
    {.type = CONF_TYPE_OBJECT, .key = "dns_sd", .offset = offsetof(struct mgos_config, dns_sd), .num_desc = 4},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, dns_sd.enable)},
    {.type = CONF_TYPE_BOOL, .key = "adv_only", .offset = offsetof(struct mgos_config, dns_sd.adv_only)},
    {.type = CONF_TYPE_STRING, .key = "host_name", .offset = offsetof(struct mgos_config, dns_sd.host_name)},
    {.type = CONF_TYPE_STRING, .key = "txt", .offset = offsetof(struct mgos_config, dns_sd.txt)},
    {.type = CONF_TYPE_OBJECT, .key = "eth", .offset = offsetof(struct mgos_config, eth), .num_desc = 11},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, eth.enable)},
    {.type = CONF_TYPE_INT, .key = "phy_addr", .offset = offsetof(struct mgos_config, eth.phy_addr)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, eth.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, eth.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, eth.gw)},
    {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, eth.nameserver)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, eth.dhcp_hostname)},
    {.type = CONF_TYPE_INT, .key = "clk_mode", .offset = offsetof(struct mgos_config, eth.clk_mode)},
    {.type = CONF_TYPE_INT, .key = "mdc_gpio", .offset = offsetof(struct mgos_config, eth.mdc_gpio)},
    {.type = CONF_TYPE_INT, .key = "mdio_gpio", .offset = offsetof(struct mgos_config, eth.mdio_gpio)},
    {.type = CONF_TYPE_INT, .key = "phy_pwr_gpio", .offset = offsetof(struct mgos_config, eth.phy_pwr_gpio)},
    {.type = CONF_TYPE_OBJECT, .key = "devtab", .offset = offsetof(struct mgos_config, devtab), .num_desc = 20},
    {.type = CONF_TYPE_OBJECT, .key = "dev0", .offset = offsetof(struct mgos_config, devtab.dev0), .num_desc = 3},
    {.type = CONF_TYPE_STRING, .key = "name", .offset = offsetof(struct mgos_config, devtab.dev0.name)},
    {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, devtab.dev0.type)},
    {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, devtab.dev0.opts)},
    {.type = CONF_TYPE_OBJECT, .key = "dev1", .offset = offsetof(struct mgos_config, devtab.dev1), .num_desc = 3},
    {.type = CONF_TYPE_STRING, .key = "name", .offset = offsetof(struct mgos_config, devtab.dev1.name)},
    {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, devtab.dev1.type)},
    {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, devtab.dev1.opts)},
    {.type = CONF_TYPE_OBJECT, .key = "dev2", .offset = offsetof(struct mgos_config, devtab.dev2), .num_desc = 3},
    {.type = CONF_TYPE_STRING, .key = "name", .offset = offsetof(struct mgos_config, devtab.dev2.name)},
    {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, devtab.dev2.type)},
    {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, devtab.dev2.opts)},
    {.type = CONF_TYPE_OBJECT, .key = "dev3", .offset = offsetof(struct mgos_config, devtab.dev3), .num_desc = 3},
    {.type = CONF_TYPE_STRING, .key = "name", .offset = offsetof(struct mgos_config, devtab.dev3.name)},
    {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, devtab.dev3.type)},
    {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, devtab.dev3.opts)},
    {.type = CONF_TYPE_OBJECT, .key = "dev4", .offset = offsetof(struct mgos_config, devtab.dev4), .num_desc = 3},
    {.type = CONF_TYPE_STRING, .key = "name", .offset = offsetof(struct mgos_config, devtab.dev4.name)},
    {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, devtab.dev4.type)},
    {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, devtab.dev4.opts)},
    {.type = CONF_TYPE_OBJECT, .key = "fstab", .offset = offsetof(struct mgos_config, fstab), .num_desc = 24},
    {.type = CONF_TYPE_OBJECT, .key = "fs0", .offset = offsetof(struct mgos_config, fstab.fs0), .num_desc = 7},
    {.type = CONF_TYPE_STRING, .key = "dev", .offset = offsetof(struct mgos_config, fstab.fs0.dev)},
    {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, fstab.fs0.type)},
    {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, fstab.fs0.opts)},
    {.type = CONF_TYPE_STRING, .key = "path", .offset = offsetof(struct mgos_config, fstab.fs0.path)},
    {.type = CONF_TYPE_BOOL, .key = "create", .offset = offsetof(struct mgos_config, fstab.fs0.create)},
    {.type = CONF_TYPE_BOOL, .key = "optional", .offset = offsetof(struct mgos_config, fstab.fs0.optional)},
    {.type = CONF_TYPE_BOOL, .key = "created", .offset = offsetof(struct mgos_config, fstab.fs0.created)},
    {.type = CONF_TYPE_OBJECT, .key = "fs1", .offset = offsetof(struct mgos_config, fstab.fs1), .num_desc = 7},
    {.type = CONF_TYPE_STRING, .key = "dev", .offset = offsetof(struct mgos_config, fstab.fs1.dev)},
    {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, fstab.fs1.type)},
    {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, fstab.fs1.opts)},
    {.type = CONF_TYPE_STRING, .key = "path", .offset = offsetof(struct mgos_config, fstab.fs1.path)},
    {.type = CONF_TYPE_BOOL, .key = "create", .offset = offsetof(struct mgos_config, fstab.fs1.create)},
    {.type = CONF_TYPE_BOOL, .key = "optional", .offset = offsetof(struct mgos_config, fstab.fs1.optional)},
    {.type = CONF_TYPE_BOOL, .key = "created", .offset = offsetof(struct mgos_config, fstab.fs1.created)},
    {.type = CONF_TYPE_OBJECT, .key = "fs2", .offset = offsetof(struct mgos_config, fstab.fs2), .num_desc = 7},
    {.type = CONF_TYPE_STRING, .key = "dev", .offset = offsetof(struct mgos_config, fstab.fs2.dev)},
    {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, fstab.fs2.type)},
    {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, fstab.fs2.opts)},
    {.type = CONF_TYPE_STRING, .key = "path", .offset = offsetof(struct mgos_config, fstab.fs2.path)},
    {.type = CONF_TYPE_BOOL, .key = "create", .offset = offsetof(struct mgos_config, fstab.fs2.create)},
    {.type = CONF_TYPE_BOOL, .key = "optional", .offset = offsetof(struct mgos_config, fstab.fs2.optional)},
    {.type = CONF_TYPE_BOOL, .key = "created", .offset = offsetof(struct mgos_config, fstab.fs2.created)},
    {.type = CONF_TYPE_OBJECT, .key = "gcp", .offset = offsetof(struct mgos_config, gcp), .num_desc = 11},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, gcp.enable)},
    {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, gcp.server)},
    {.type = CONF_TYPE_STRING, .key = "project", .offset = offsetof(struct mgos_config, gcp.project)},
    {.type = CONF_TYPE_STRING, .key = "region", .offset = offsetof(struct mgos_config, gcp.region)},
    {.type = CONF_TYPE_STRING, .key = "registry", .offset = offsetof(struct mgos_config, gcp.registry)},
    {.type = CONF_TYPE_STRING, .key = "device", .offset = offsetof(struct mgos_config, gcp.device)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, gcp.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, gcp.ca_cert)},
    {.type = CONF_TYPE_INT, .key = "token_ttl", .offset = offsetof(struct mgos_config, gcp.token_ttl)},
    {.type = CONF_TYPE_BOOL, .key = "enable_config", .offset = offsetof(struct mgos_config, gcp.enable_config)},
    {.type = CONF_TYPE_BOOL, .key = "enable_commands", .offset = offsetof(struct mgos_config, gcp.enable_commands)},
    {.type = CONF_TYPE_OBJECT, .key = "http", .offset = offsetof(struct mgos_config, http), .num_desc = 13},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, http.enable)},
    {.type = CONF_TYPE_STRING, .key = "listen_addr", .offset = offsetof(struct mgos_config, http.listen_addr)},
    {.type = CONF_TYPE_STRING, .key = "document_root", .offset = offsetof(struct mgos_config, http.document_root)},
    {.type = CONF_TYPE_STRING, .key = "index_files", .offset = offsetof(struct mgos_config, http.index_files)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, http.ssl_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, http.ssl_key)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, http.ssl_ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "upload_acl", .offset = offsetof(struct mgos_config, http.upload_acl)},
    {.type = CONF_TYPE_STRING, .key = "hidden_files", .offset = offsetof(struct mgos_config, http.hidden_files)},
    {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, http.auth_domain)},
    {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, http.auth_file)},
    {.type = CONF_TYPE_INT, .key = "auth_algo", .offset = offsetof(struct mgos_config, http.auth_algo)},
    {.type = CONF_TYPE_STRING, .key = "extra_headers", .offset = offsetof(struct mgos_config, http.extra_headers)},
    {.type = CONF_TYPE_OBJECT, .key = "provision", .offset = offsetof(struct mgos_config, provision), .num_desc = 11},
    {.type = CONF_TYPE_OBJECT, .key = "btn", .offset = offsetof(struct mgos_config, provision.btn), .num_desc = 4},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, provision.btn.pin)},
    {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, provision.btn.pull_up)},
    {.type = CONF_TYPE_INT, .key = "hold_ms", .offset = offsetof(struct mgos_config, provision.btn.hold_ms)},
    {.type = CONF_TYPE_INT, .key = "inhibit_after_s", .offset = offsetof(struct mgos_config, provision.btn.inhibit_after_s)},
    {.type = CONF_TYPE_OBJECT, .key = "led", .offset = offsetof(struct mgos_config, provision.led), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, provision.led.pin)},
    {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, provision.led.active_high)},
    {.type = CONF_TYPE_INT, .key = "stable_state", .offset = offsetof(struct mgos_config, provision.stable_state)},
    {.type = CONF_TYPE_INT, .key = "timeout", .offset = offsetof(struct mgos_config, provision.timeout)},
    {.type = CONF_TYPE_INT, .key = "max_state", .offset = offsetof(struct mgos_config, provision.max_state)},
    {.type = CONF_TYPE_OBJECT, .key = "wifi", .offset = offsetof(struct mgos_config, wifi), .num_desc = 82},
    {.type = CONF_TYPE_OBJECT, .key = "ap", .offset = offsetof(struct mgos_config, wifi.ap), .num_desc = 16},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.ap.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.ap.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.ap.pass)},
    {.type = CONF_TYPE_BOOL, .key = "hidden", .offset = offsetof(struct mgos_config, wifi.ap.hidden)},
    {.type = CONF_TYPE_INT, .key = "channel", .offset = offsetof(struct mgos_config, wifi.ap.channel)},
    {.type = CONF_TYPE_INT, .key = "max_connections", .offset = offsetof(struct mgos_config, wifi.ap.max_connections)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.ap.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.ap.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.ap.gw)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_start", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_start)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_end", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_end)},
    {.type = CONF_TYPE_INT, .key = "trigger_on_gpio", .offset = offsetof(struct mgos_config, wifi.ap.trigger_on_gpio)},
    {.type = CONF_TYPE_INT, .key = "disable_after", .offset = offsetof(struct mgos_config, wifi.ap.disable_after)},
    {.type = CONF_TYPE_STRING, .key = "hostname", .offset = offsetof(struct mgos_config, wifi.ap.hostname)},
    {.type = CONF_TYPE_BOOL, .key = "bandwidth_20mhz", .offset = offsetof(struct mgos_config, wifi.ap.bandwidth_20mhz)},
    {.type = CONF_TYPE_STRING, .key = "protocol", .offset = offsetof(struct mgos_config, wifi.ap.protocol)},
    {.type = CONF_TYPE_OBJECT, .key = "sta", .offset = offsetof(struct mgos_config, wifi.sta), .num_desc = 19},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta.pass)},
    {.type = CONF_TYPE_STRING, .key = "bssid", .offset = offsetof(struct mgos_config, wifi.sta.bssid)},
    {.type = CONF_TYPE_INT, .key = "channel", .offset = offsetof(struct mgos_config, wifi.sta.channel)},
    {.type = CONF_TYPE_STRING, .key = "last_bssid", .offset = offsetof(struct mgos_config, wifi.sta.last_bssid)},
    {.type = CONF_TYPE_INT, .key = "last_channel", .offset = offsetof(struct mgos_config, wifi.sta.last_channel)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta.user)},
    {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta.anon_identity)},
    {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta.cert)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta.ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta.gw)},
    {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta.nameserver)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta.dhcp_hostname)},
    {.type = CONF_TYPE_STRING, .key = "protocol", .offset = offsetof(struct mgos_config, wifi.sta.protocol)},
    {.type = CONF_TYPE_INT, .key = "listen_interval_ms", .offset = offsetof(struct mgos_config, wifi.sta.listen_interval_ms)},
    {.type = CONF_TYPE_OBJECT, .key = "sta1", .offset = offsetof(struct mgos_config, wifi.sta1), .num_desc = 19},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta1.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta1.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta1.pass)},
    {.type = CONF_TYPE_STRING, .key = "bssid", .offset = offsetof(struct mgos_config, wifi.sta1.bssid)},
    {.type = CONF_TYPE_INT, .key = "channel", .offset = offsetof(struct mgos_config, wifi.sta1.channel)},
    {.type = CONF_TYPE_STRING, .key = "last_bssid", .offset = offsetof(struct mgos_config, wifi.sta1.last_bssid)},
    {.type = CONF_TYPE_INT, .key = "last_channel", .offset = offsetof(struct mgos_config, wifi.sta1.last_channel)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta1.user)},
    {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta1.anon_identity)},
    {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta1.cert)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta1.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta1.ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta1.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta1.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta1.gw)},
    {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta1.nameserver)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta1.dhcp_hostname)},
    {.type = CONF_TYPE_STRING, .key = "protocol", .offset = offsetof(struct mgos_config, wifi.sta1.protocol)},
    {.type = CONF_TYPE_INT, .key = "listen_interval_ms", .offset = offsetof(struct mgos_config, wifi.sta1.listen_interval_ms)},
    {.type = CONF_TYPE_OBJECT, .key = "sta2", .offset = offsetof(struct mgos_config, wifi.sta2), .num_desc = 19},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta2.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta2.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta2.pass)},
    {.type = CONF_TYPE_STRING, .key = "bssid", .offset = offsetof(struct mgos_config, wifi.sta2.bssid)},
    {.type = CONF_TYPE_INT, .key = "channel", .offset = offsetof(struct mgos_config, wifi.sta2.channel)},
    {.type = CONF_TYPE_STRING, .key = "last_bssid", .offset = offsetof(struct mgos_config, wifi.sta2.last_bssid)},
    {.type = CONF_TYPE_INT, .key = "last_channel", .offset = offsetof(struct mgos_config, wifi.sta2.last_channel)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta2.user)},
    {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta2.anon_identity)},
    {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta2.cert)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta2.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta2.ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta2.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta2.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta2.gw)},
    {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta2.nameserver)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta2.dhcp_hostname)},
    {.type = CONF_TYPE_STRING, .key = "protocol", .offset = offsetof(struct mgos_config, wifi.sta2.protocol)},
    {.type = CONF_TYPE_INT, .key = "listen_interval_ms", .offset = offsetof(struct mgos_config, wifi.sta2.listen_interval_ms)},
    {.type = CONF_TYPE_INT, .key = "sta_rssi_thr", .offset = offsetof(struct mgos_config, wifi.sta_rssi_thr)},
    {.type = CONF_TYPE_INT, .key = "sta_connect_timeout", .offset = offsetof(struct mgos_config, wifi.sta_connect_timeout)},
    {.type = CONF_TYPE_INT, .key = "sta_roam_rssi_thr", .offset = offsetof(struct mgos_config, wifi.sta_roam_rssi_thr)},
    {.type = CONF_TYPE_INT, .key = "sta_roam_interval", .offset = offsetof(struct mgos_config, wifi.sta_roam_interval)},
    {.type = CONF_TYPE_INT, .key = "sta_ps_mode", .offset = offsetof(struct mgos_config, wifi.sta_ps_mode)},
    {.type = CONF_TYPE_OBJECT, .key = "spi", .offset = offsetof(struct mgos_config, spi), .num_desc = 9},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, spi.enable)},
    {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, spi.debug)},
    {.type = CONF_TYPE_INT, .key = "unit_no", .offset = offsetof(struct mgos_config, spi.unit_no)},
    {.type = CONF_TYPE_INT, .key = "miso_gpio", .offset = offsetof(struct mgos_config, spi.miso_gpio)},
    {.type = CONF_TYPE_INT, .key = "mosi_gpio", .offset = offsetof(struct mgos_config, spi.mosi_gpio)},
    {.type = CONF_TYPE_INT, .key = "sclk_gpio", .offset = offsetof(struct mgos_config, spi.sclk_gpio)},
    {.type = CONF_TYPE_INT, .key = "cs0_gpio", .offset = offsetof(struct mgos_config, spi.cs0_gpio)},
    {.type = CONF_TYPE_INT, .key = "cs1_gpio", .offset = offsetof(struct mgos_config, spi.cs1_gpio)},
    {.type = CONF_TYPE_INT, .key = "cs2_gpio", .offset = offsetof(struct mgos_config, spi.cs2_gpio)},
    {.type = CONF_TYPE_OBJECT, .key = "watson", .offset = offsetof(struct mgos_config, watson), .num_desc = 7},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, watson.enable)},
    {.type = CONF_TYPE_STRING, .key = "host_name", .offset = offsetof(struct mgos_config, watson.host_name)},
    {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, watson.client_id)},
    {.type = CONF_TYPE_STRING, .key = "token", .offset = offsetof(struct mgos_config, watson.token)},
    {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, watson.cert)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, watson.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, watson.ca_cert)},
    {.type = CONF_TYPE_OBJECT, .key = "mjs", .offset = offsetof(struct mgos_config, mjs), .num_desc = 1},
    {.type = CONF_TYPE_BOOL, .key = "generate_jsc", .offset = offsetof(struct mgos_config, mjs.generate_jsc)},
    {.type = CONF_TYPE_OBJECT, .key = "board", .offset = offsetof(struct mgos_config, board), .num_desc = 18},
    {.type = CONF_TYPE_OBJECT, .key = "led1", .offset = offsetof(struct mgos_config, board.led1), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led1.pin)},
    {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led1.active_high)},
    {.type = CONF_TYPE_OBJECT, .key = "led2", .offset = offsetof(struct mgos_config, board.led2), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led2.pin)},
    {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led2.active_high)},
    {.type = CONF_TYPE_OBJECT, .key = "led3", .offset = offsetof(struct mgos_config, board.led3), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led3.pin)},
    {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led3.active_high)},
    {.type = CONF_TYPE_OBJECT, .key = "btn1", .offset = offsetof(struct mgos_config, board.btn1), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn1.pin)},
    {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn1.pull_up)},
    {.type = CONF_TYPE_OBJECT, .key = "btn2", .offset = offsetof(struct mgos_config, board.btn2), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn2.pin)},
    {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn2.pull_up)},
    {.type = CONF_TYPE_OBJECT, .key = "btn3", .offset = offsetof(struct mgos_config, board.btn3), .num_desc = 2},
    {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn3.pin)},
    {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn3.pull_up)},
};

/* struct mgos_config_debug */
const struct mgos_conf_entry *mgos_config_debug_get_schema(void) {
  return &mgos_config_schema_[1];
}

void mgos_config_debug_set_defaults(struct mgos_config_debug *cfg) {
  cfg->udp_log_addr = NULL;
  cfg->udp_log_level = 3;
  cfg->mbedtls_level = 1;
  cfg->level = 2;
  cfg->file_level = NULL;
  cfg->event_level = 2;
  cfg->stdout_uart = 0;
  cfg->stderr_uart = 0;
  cfg->factory_reset_gpio = -1;
  cfg->mg_mgr_hexdump_file = NULL;
  cfg->stdout_topic = NULL;
  cfg->stderr_topic = NULL;
}
bool mgos_config_debug_parse_f(const char *fname, struct mgos_config_debug *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_debug_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_sys_atca */
const struct mgos_conf_entry *mgos_config_sys_atca_get_schema(void) {
  return &mgos_config_schema_[20];
}

void mgos_config_sys_atca_set_defaults(struct mgos_config_sys_atca *cfg) {
  cfg->enable = false;
  cfg->i2c_bus = 0;
  cfg->i2c_addr = 96;
  cfg->ecdh_slots_mask = 12;
}
bool mgos_config_sys_atca_parse_f(const char *fname, struct mgos_config_sys_atca *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_sys_atca_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_sys_mount */
const struct mgos_conf_entry *mgos_config_sys_mount_get_schema(void) {
  return &mgos_config_schema_[25];
}

void mgos_config_sys_mount_set_defaults(struct mgos_config_sys_mount *cfg) {
  cfg->path = NULL;
  cfg->dev_type = NULL;
  cfg->dev_opts = NULL;
  cfg->fs_type = NULL;
  cfg->fs_opts = NULL;
}
bool mgos_config_sys_mount_parse_f(const char *fname, struct mgos_config_sys_mount *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_sys_mount_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_sys */
const struct mgos_conf_entry *mgos_config_sys_get_schema(void) {
  return &mgos_config_schema_[14];
}

void mgos_config_sys_set_defaults(struct mgos_config_sys *cfg) {
  cfg->esp32_adc_vref = 0;
  cfg->esp32_adc_width = 3;
  cfg->tz_spec = NULL;
  cfg->wdt_timeout = 30;
  cfg->pref_ota_lib = NULL;
  mgos_config_sys_atca_set_defaults(&cfg->atca);
  mgos_config_sys_mount_set_defaults(&cfg->mount);
}
bool mgos_config_sys_parse_f(const char *fname, struct mgos_config_sys *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_sys_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_device */
const struct mgos_conf_entry *mgos_config_device_get_schema(void) {
  return &mgos_config_schema_[31];
}

void mgos_config_device_set_defaults(struct mgos_config_device *cfg) {
  cfg->id = "esp32_??????";
  cfg->license = NULL;
  cfg->mac = NULL;
  cfg->public_key = NULL;
  cfg->sn = NULL;
}
bool mgos_config_device_parse_f(const char *fname, struct mgos_config_device *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_device_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_i2c */
const struct mgos_conf_entry *mgos_config_i2c_get_schema(void) {
  return &mgos_config_schema_[45];
}

void mgos_config_i2c_set_defaults(struct mgos_config_i2c *cfg) {
  cfg->unit_no = 0;
  cfg->enable = true;
  cfg->freq = 100000;
  cfg->debug = false;
  cfg->sda_gpio = 32;
  cfg->scl_gpio = 33;
}
bool mgos_config_i2c_parse_f(const char *fname, struct mgos_config_i2c *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_i2c_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_i2c */
const struct mgos_conf_entry *mgos_config_i2c1_get_schema(void) {
  return &mgos_config_schema_[45];
}

void mgos_config_i2c1_set_defaults(struct mgos_config_i2c *cfg) {
  cfg->unit_no = 1;
  cfg->enable = false;
  cfg->freq = 100000;
  cfg->debug = false;
  cfg->sda_gpio = 22;
  cfg->scl_gpio = 23;
}
bool mgos_config_i2c1_parse_f(const char *fname, struct mgos_config_i2c *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_i2c1_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_mqtt */
const struct mgos_conf_entry *mgos_config_mqtt_get_schema(void) {
  return &mgos_config_schema_[78];
}

void mgos_config_mqtt_set_defaults(struct mgos_config_mqtt *cfg) {
  cfg->enable = false;
  cfg->server = "mqtt.eclipseprojects.io:1883";
  cfg->client_id = NULL;
  cfg->user = NULL;
  cfg->pass = NULL;
  cfg->reconnect_timeout_min = 2.0;
  cfg->reconnect_timeout_max = 60.0;
  cfg->ssl_cert = NULL;
  cfg->ssl_key = NULL;
  cfg->ssl_ca_cert = NULL;
  cfg->ssl_cipher_suites = NULL;
  cfg->ssl_psk_identity = NULL;
  cfg->ssl_psk_key = NULL;
  cfg->clean_session = true;
  cfg->keep_alive = 60;
  cfg->will_topic = NULL;
  cfg->will_message = NULL;
  cfg->will_retain = false;
  cfg->max_qos = 2;
  cfg->recv_mbuf_limit = 8192;
  cfg->require_time = false;
  cfg->cloud_events = true;
  cfg->max_queue_length = 5;
  cfg->ws_enable = false;
  cfg->ws_path = "/mqtt";
}
bool mgos_config_mqtt_parse_f(const char *fname, struct mgos_config_mqtt *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_mqtt_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_mqtt */
const struct mgos_conf_entry *mgos_config_mqtt1_get_schema(void) {
  return &mgos_config_schema_[78];
}

void mgos_config_mqtt1_set_defaults(struct mgos_config_mqtt *cfg) {
  cfg->enable = false;
  cfg->server = NULL;
  cfg->client_id = NULL;
  cfg->user = NULL;
  cfg->pass = NULL;
  cfg->reconnect_timeout_min = 2.0;
  cfg->reconnect_timeout_max = 60.0;
  cfg->ssl_cert = NULL;
  cfg->ssl_key = NULL;
  cfg->ssl_ca_cert = NULL;
  cfg->ssl_cipher_suites = NULL;
  cfg->ssl_psk_identity = NULL;
  cfg->ssl_psk_key = NULL;
  cfg->clean_session = true;
  cfg->keep_alive = 60;
  cfg->will_topic = NULL;
  cfg->will_message = NULL;
  cfg->will_retain = false;
  cfg->max_qos = 2;
  cfg->recv_mbuf_limit = 8192;
  cfg->require_time = false;
  cfg->cloud_events = true;
  cfg->max_queue_length = 5;
  cfg->ws_enable = false;
  cfg->ws_path = "/mqtt";
}
bool mgos_config_mqtt1_parse_f(const char *fname, struct mgos_config_mqtt *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_mqtt1_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_shadow */
const struct mgos_conf_entry *mgos_config_shadow_get_schema(void) {
  return &mgos_config_schema_[104];
}

void mgos_config_shadow_set_defaults(struct mgos_config_shadow *cfg) {
  cfg->enable = true;
  cfg->lib = NULL;
  cfg->get_on_connect = true;
  cfg->ota_enable = true;
  cfg->autocommit = false;
}
bool mgos_config_shadow_parse_f(const char *fname, struct mgos_config_shadow *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_shadow_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_aws_greengrass */
const struct mgos_conf_entry *mgos_config_aws_greengrass_get_schema(void) {
  return &mgos_config_schema_[112];
}

void mgos_config_aws_greengrass_set_defaults(struct mgos_config_aws_greengrass *cfg) {
  cfg->enable = false;
  cfg->reconnect_timeout_min = 2;
  cfg->reconnect_timeout_max = 60;
}
bool mgos_config_aws_greengrass_parse_f(const char *fname, struct mgos_config_aws_greengrass *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_aws_greengrass_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_aws */
const struct mgos_conf_entry *mgos_config_aws_get_schema(void) {
  return &mgos_config_schema_[110];
}

void mgos_config_aws_set_defaults(struct mgos_config_aws *cfg) {
  cfg->thing_name = NULL;
  mgos_config_aws_greengrass_set_defaults(&cfg->greengrass);
}
bool mgos_config_aws_parse_f(const char *fname, struct mgos_config_aws *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_aws_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_sntp */
const struct mgos_conf_entry *mgos_config_sntp_get_schema(void) {
  return &mgos_config_schema_[116];
}

void mgos_config_sntp_set_defaults(struct mgos_config_sntp *cfg) {
  cfg->enable = true;
  cfg->server = "time.google.com";
  cfg->retry_min = 1;
  cfg->retry_max = 30;
  cfg->update_interval = 7200;
}
bool mgos_config_sntp_parse_f(const char *fname, struct mgos_config_sntp *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_sntp_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_azure */
const struct mgos_conf_entry *mgos_config_azure_get_schema(void) {
  return &mgos_config_schema_[122];
}

void mgos_config_azure_set_defaults(struct mgos_config_azure *cfg) {
  cfg->enable = false;
  cfg->cs = NULL;
  cfg->token_ttl = 3600;
  cfg->host_name = NULL;
  cfg->device_id = NULL;
  cfg->cert = NULL;
  cfg->key = NULL;
  cfg->enable_cm = true;
  cfg->enable_dm = true;
}
bool mgos_config_azure_parse_f(const char *fname, struct mgos_config_azure *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_azure_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_bt_gatts */
const struct mgos_conf_entry *mgos_config_bt_gatts_get_schema(void) {
  return &mgos_config_schema_[142];
}

void mgos_config_bt_gatts_set_defaults(struct mgos_config_bt_gatts *cfg) {
  cfg->min_sec_level = 0;
}
bool mgos_config_bt_gatts_parse_f(const char *fname, struct mgos_config_bt_gatts *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_bt_gatts_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_bt */
const struct mgos_conf_entry *mgos_config_bt_get_schema(void) {
  return &mgos_config_schema_[132];
}

void mgos_config_bt_set_defaults(struct mgos_config_bt *cfg) {
  cfg->enable = true;
  cfg->dev_name = NULL;
  cfg->adv_enable = true;
  cfg->scan_rsp_data_hex = NULL;
  cfg->keep_enabled = false;
  cfg->allow_pairing = true;
  cfg->max_paired_devices = -1;
  cfg->random_address = false;
  cfg->gatt_mtu = 500;
  mgos_config_bt_gatts_set_defaults(&cfg->gatts);
  cfg->debug_svc_enable = true;
  cfg->debug_svc_sec_level = 0;
}
bool mgos_config_bt_parse_f(const char *fname, struct mgos_config_bt *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_bt_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_update */
const struct mgos_conf_entry *mgos_config_update_get_schema(void) {
  return &mgos_config_schema_[146];
}

void mgos_config_update_set_defaults(struct mgos_config_update *cfg) {
  cfg->timeout = 600;
  cfg->commit_timeout = 0;
  cfg->key0 = NULL;
  cfg->key1 = NULL;
  cfg->key2 = NULL;
  cfg->key3 = NULL;
  cfg->key4 = NULL;
  cfg->key5 = NULL;
  cfg->key6 = NULL;
  cfg->key7 = NULL;
  cfg->sig_req_mask = -1;
  cfg->url = NULL;
  cfg->interval = 0;
  cfg->extra_http_headers = NULL;
  cfg->ssl_ca_file = "ca.pem";
  cfg->ssl_client_cert_file = NULL;
  cfg->ssl_server_name = NULL;
  cfg->enable_post = true;
}
bool mgos_config_update_parse_f(const char *fname, struct mgos_config_update *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_update_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_rpc_ws */
const struct mgos_conf_entry *mgos_config_rpc_ws_get_schema(void) {
  return &mgos_config_schema_[178];
}

void mgos_config_rpc_ws_set_defaults(struct mgos_config_rpc_ws *cfg) {
  cfg->enable = true;
  cfg->server_address = NULL;
  cfg->reconnect_interval_min = 1;
  cfg->reconnect_interval_max = 60;
  cfg->ssl_server_name = NULL;
  cfg->ssl_cert = NULL;
  cfg->ssl_key = NULL;
  cfg->ssl_ca_cert = NULL;
}
bool mgos_config_rpc_ws_parse_f(const char *fname, struct mgos_config_rpc_ws *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_rpc_ws_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_rpc_azure */
const struct mgos_conf_entry *mgos_config_rpc_azure_get_schema(void) {
  return &mgos_config_schema_[187];
}

void mgos_config_rpc_azure_set_defaults(struct mgos_config_rpc_azure *cfg) {
  cfg->enable_dm = true;
}
bool mgos_config_rpc_azure_parse_f(const char *fname, struct mgos_config_rpc_azure *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_rpc_azure_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_rpc_gatts */
const struct mgos_conf_entry *mgos_config_rpc_gatts_get_schema(void) {
  return &mgos_config_schema_[189];
}

void mgos_config_rpc_gatts_set_defaults(struct mgos_config_rpc_gatts *cfg) {
  cfg->enable = true;
  cfg->sec_level = 0;
  cfg->max_frame_size = 4096;
}
bool mgos_config_rpc_gatts_parse_f(const char *fname, struct mgos_config_rpc_gatts *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_rpc_gatts_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_rpc_gcp */
const struct mgos_conf_entry *mgos_config_rpc_gcp_get_schema(void) {
  return &mgos_config_schema_[193];
}

void mgos_config_rpc_gcp_set_defaults(struct mgos_config_rpc_gcp *cfg) {
  cfg->enable = true;
  cfg->subfolder = "rpc";
}
bool mgos_config_rpc_gcp_parse_f(const char *fname, struct mgos_config_rpc_gcp *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_rpc_gcp_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_rpc_mqtt */
const struct mgos_conf_entry *mgos_config_rpc_mqtt_get_schema(void) {
  return &mgos_config_schema_[196];
}

void mgos_config_rpc_mqtt_set_defaults(struct mgos_config_rpc_mqtt *cfg) {
  cfg->enable = true;
  cfg->pub_topic = "%.*s/rpc";
  cfg->sub_topic = "%.*s/rpc";
  cfg->sub_wc = true;
  cfg->qos = 1;
}
bool mgos_config_rpc_mqtt_parse_f(const char *fname, struct mgos_config_rpc_mqtt *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_rpc_mqtt_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_rpc_uart */
const struct mgos_conf_entry *mgos_config_rpc_uart_get_schema(void) {
  return &mgos_config_schema_[202];
}

void mgos_config_rpc_uart_set_defaults(struct mgos_config_rpc_uart *cfg) {
  cfg->uart_no = 0;
  cfg->baud_rate = 115200;
  cfg->fc_type = 2;
  cfg->dst = NULL;
}
bool mgos_config_rpc_uart_parse_f(const char *fname, struct mgos_config_rpc_uart *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_rpc_uart_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_rpc */
const struct mgos_conf_entry *mgos_config_rpc_get_schema(void) {
  return &mgos_config_schema_[165];
}

void mgos_config_rpc_set_defaults(struct mgos_config_rpc *cfg) {
  cfg->enable = true;
  cfg->http_enable = true;
  cfg->service_sys_enable = true;
  cfg->max_frame_size = 4096;
  cfg->max_queue_length = 25;
  cfg->max_non_persistent_channels = 20;
  cfg->default_out_channel_idle_close_timeout = 10;
  cfg->acl = NULL;
  cfg->acl_file = NULL;
  cfg->auth_domain = "RPC";
  cfg->auth_file = NULL;
  cfg->auth_algo = 0;
  mgos_config_rpc_ws_set_defaults(&cfg->ws);
  mgos_config_rpc_azure_set_defaults(&cfg->azure);
  mgos_config_rpc_gatts_set_defaults(&cfg->gatts);
  mgos_config_rpc_gcp_set_defaults(&cfg->gcp);
  mgos_config_rpc_mqtt_set_defaults(&cfg->mqtt);
  mgos_config_rpc_uart_set_defaults(&cfg->uart);
}
bool mgos_config_rpc_parse_f(const char *fname, struct mgos_config_rpc *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_rpc_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_dash */
const struct mgos_conf_entry *mgos_config_dash_get_schema(void) {
  return &mgos_config_schema_[207];
}

void mgos_config_dash_set_defaults(struct mgos_config_dash *cfg) {
  cfg->enable = false;
  cfg->token = NULL;
  cfg->server = "wss://mdash.net/api/v2/rpc";
  cfg->ssl_cert = NULL;
  cfg->ssl_key = NULL;
  cfg->ssl_ca_cert = "ca.pem";
  cfg->send_logs = false;
}
bool mgos_config_dash_parse_f(const char *fname, struct mgos_config_dash *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_dash_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_dns_sd */
const struct mgos_conf_entry *mgos_config_dns_sd_get_schema(void) {
  return &mgos_config_schema_[215];
}

void mgos_config_dns_sd_set_defaults(struct mgos_config_dns_sd *cfg) {
  cfg->enable = false;
  cfg->adv_only = false;
  cfg->host_name = "mOS-esp32-??????";
  cfg->txt = NULL;
}
bool mgos_config_dns_sd_parse_f(const char *fname, struct mgos_config_dns_sd *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_dns_sd_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_eth */
const struct mgos_conf_entry *mgos_config_eth_get_schema(void) {
  return &mgos_config_schema_[220];
}

void mgos_config_eth_set_defaults(struct mgos_config_eth *cfg) {
  cfg->enable = false;
  cfg->phy_addr = 0;
  cfg->ip = NULL;
  cfg->netmask = NULL;
  cfg->gw = NULL;
  cfg->nameserver = NULL;
  cfg->dhcp_hostname = NULL;
  cfg->clk_mode = 0;
  cfg->mdc_gpio = 23;
  cfg->mdio_gpio = 18;
  cfg->phy_pwr_gpio = -1;
}
bool mgos_config_eth_parse_f(const char *fname, struct mgos_config_eth *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_eth_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_devtab_dev0 */
const struct mgos_conf_entry *mgos_config_devtab_dev0_get_schema(void) {
  return &mgos_config_schema_[233];
}

void mgos_config_devtab_dev0_set_defaults(struct mgos_config_devtab_dev0 *cfg) {
  cfg->name = NULL;
  cfg->type = NULL;
  cfg->opts = NULL;
}
bool mgos_config_devtab_dev0_parse_f(const char *fname, struct mgos_config_devtab_dev0 *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_devtab_dev0_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_devtab_dev1 */
const struct mgos_conf_entry *mgos_config_devtab_dev1_get_schema(void) {
  return &mgos_config_schema_[237];
}

void mgos_config_devtab_dev1_set_defaults(struct mgos_config_devtab_dev1 *cfg) {
  cfg->name = NULL;
  cfg->type = NULL;
  cfg->opts = NULL;
}
bool mgos_config_devtab_dev1_parse_f(const char *fname, struct mgos_config_devtab_dev1 *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_devtab_dev1_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_devtab_dev2 */
const struct mgos_conf_entry *mgos_config_devtab_dev2_get_schema(void) {
  return &mgos_config_schema_[241];
}

void mgos_config_devtab_dev2_set_defaults(struct mgos_config_devtab_dev2 *cfg) {
  cfg->name = NULL;
  cfg->type = NULL;
  cfg->opts = NULL;
}
bool mgos_config_devtab_dev2_parse_f(const char *fname, struct mgos_config_devtab_dev2 *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_devtab_dev2_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_devtab_dev3 */
const struct mgos_conf_entry *mgos_config_devtab_dev3_get_schema(void) {
  return &mgos_config_schema_[245];
}

void mgos_config_devtab_dev3_set_defaults(struct mgos_config_devtab_dev3 *cfg) {
  cfg->name = NULL;
  cfg->type = NULL;
  cfg->opts = NULL;
}
bool mgos_config_devtab_dev3_parse_f(const char *fname, struct mgos_config_devtab_dev3 *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_devtab_dev3_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_devtab_dev4 */
const struct mgos_conf_entry *mgos_config_devtab_dev4_get_schema(void) {
  return &mgos_config_schema_[249];
}

void mgos_config_devtab_dev4_set_defaults(struct mgos_config_devtab_dev4 *cfg) {
  cfg->name = NULL;
  cfg->type = NULL;
  cfg->opts = NULL;
}
bool mgos_config_devtab_dev4_parse_f(const char *fname, struct mgos_config_devtab_dev4 *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_devtab_dev4_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_devtab */
const struct mgos_conf_entry *mgos_config_devtab_get_schema(void) {
  return &mgos_config_schema_[232];
}

void mgos_config_devtab_set_defaults(struct mgos_config_devtab *cfg) {
  mgos_config_devtab_dev0_set_defaults(&cfg->dev0);
  mgos_config_devtab_dev1_set_defaults(&cfg->dev1);
  mgos_config_devtab_dev2_set_defaults(&cfg->dev2);
  mgos_config_devtab_dev3_set_defaults(&cfg->dev3);
  mgos_config_devtab_dev4_set_defaults(&cfg->dev4);
}
bool mgos_config_devtab_parse_f(const char *fname, struct mgos_config_devtab *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_devtab_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_fstab_fs0 */
const struct mgos_conf_entry *mgos_config_fstab_fs0_get_schema(void) {
  return &mgos_config_schema_[254];
}

void mgos_config_fstab_fs0_set_defaults(struct mgos_config_fstab_fs0 *cfg) {
  cfg->dev = NULL;
  cfg->type = NULL;
  cfg->opts = NULL;
  cfg->path = NULL;
  cfg->create = false;
  cfg->optional = false;
  cfg->created = false;
}
bool mgos_config_fstab_fs0_parse_f(const char *fname, struct mgos_config_fstab_fs0 *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_fstab_fs0_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_fstab_fs1 */
const struct mgos_conf_entry *mgos_config_fstab_fs1_get_schema(void) {
  return &mgos_config_schema_[262];
}

void mgos_config_fstab_fs1_set_defaults(struct mgos_config_fstab_fs1 *cfg) {
  cfg->dev = NULL;
  cfg->type = NULL;
  cfg->opts = NULL;
  cfg->path = NULL;
  cfg->create = false;
  cfg->optional = false;
  cfg->created = false;
}
bool mgos_config_fstab_fs1_parse_f(const char *fname, struct mgos_config_fstab_fs1 *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_fstab_fs1_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_fstab_fs2 */
const struct mgos_conf_entry *mgos_config_fstab_fs2_get_schema(void) {
  return &mgos_config_schema_[270];
}

void mgos_config_fstab_fs2_set_defaults(struct mgos_config_fstab_fs2 *cfg) {
  cfg->dev = NULL;
  cfg->type = NULL;
  cfg->opts = NULL;
  cfg->path = NULL;
  cfg->create = false;
  cfg->optional = false;
  cfg->created = false;
}
bool mgos_config_fstab_fs2_parse_f(const char *fname, struct mgos_config_fstab_fs2 *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_fstab_fs2_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_fstab */
const struct mgos_conf_entry *mgos_config_fstab_get_schema(void) {
  return &mgos_config_schema_[253];
}

void mgos_config_fstab_set_defaults(struct mgos_config_fstab *cfg) {
  mgos_config_fstab_fs0_set_defaults(&cfg->fs0);
  mgos_config_fstab_fs1_set_defaults(&cfg->fs1);
  mgos_config_fstab_fs2_set_defaults(&cfg->fs2);
}
bool mgos_config_fstab_parse_f(const char *fname, struct mgos_config_fstab *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_fstab_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_gcp */
const struct mgos_conf_entry *mgos_config_gcp_get_schema(void) {
  return &mgos_config_schema_[278];
}

void mgos_config_gcp_set_defaults(struct mgos_config_gcp *cfg) {
  cfg->enable = false;
  cfg->server = "mqtt.googleapis.com";
  cfg->project = NULL;
  cfg->region = NULL;
  cfg->registry = NULL;
  cfg->device = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
  cfg->token_ttl = 3600;
  cfg->enable_config = false;
  cfg->enable_commands = true;
}
bool mgos_config_gcp_parse_f(const char *fname, struct mgos_config_gcp *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_gcp_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_http */
const struct mgos_conf_entry *mgos_config_http_get_schema(void) {
  return &mgos_config_schema_[290];
}

void mgos_config_http_set_defaults(struct mgos_config_http *cfg) {
  cfg->enable = true;
  cfg->listen_addr = "80";
  cfg->document_root = "/";
  cfg->index_files = NULL;
  cfg->ssl_cert = NULL;
  cfg->ssl_key = NULL;
  cfg->ssl_ca_cert = NULL;
  cfg->upload_acl = "*";
  cfg->hidden_files = NULL;
  cfg->auth_domain = NULL;
  cfg->auth_file = NULL;
  cfg->auth_algo = 0;
  cfg->extra_headers = NULL;
}
bool mgos_config_http_parse_f(const char *fname, struct mgos_config_http *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_http_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_provision_btn */
const struct mgos_conf_entry *mgos_config_provision_btn_get_schema(void) {
  return &mgos_config_schema_[305];
}

void mgos_config_provision_btn_set_defaults(struct mgos_config_provision_btn *cfg) {
  cfg->pin = 0;
  cfg->pull_up = true;
  cfg->hold_ms = 0;
  cfg->inhibit_after_s = 0;
}
bool mgos_config_provision_btn_parse_f(const char *fname, struct mgos_config_provision_btn *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_provision_btn_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_provision_led */
const struct mgos_conf_entry *mgos_config_provision_led_get_schema(void) {
  return &mgos_config_schema_[310];
}

void mgos_config_provision_led_set_defaults(struct mgos_config_provision_led *cfg) {
  cfg->pin = -1;
  cfg->active_high = true;
}
bool mgos_config_provision_led_parse_f(const char *fname, struct mgos_config_provision_led *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_provision_led_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_provision */
const struct mgos_conf_entry *mgos_config_provision_get_schema(void) {
  return &mgos_config_schema_[304];
}

void mgos_config_provision_set_defaults(struct mgos_config_provision *cfg) {
  mgos_config_provision_btn_set_defaults(&cfg->btn);
  mgos_config_provision_led_set_defaults(&cfg->led);
  cfg->stable_state = 3;
  cfg->timeout = 300;
  cfg->max_state = 0;
}
bool mgos_config_provision_parse_f(const char *fname, struct mgos_config_provision *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_provision_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_wifi_ap */
const struct mgos_conf_entry *mgos_config_wifi_ap_get_schema(void) {
  return &mgos_config_schema_[317];
}

void mgos_config_wifi_ap_set_defaults(struct mgos_config_wifi_ap *cfg) {
  cfg->enable = true;
  cfg->ssid = "Mongoose_??????";
  cfg->pass = "Mongoose";
  cfg->hidden = false;
  cfg->channel = 6;
  cfg->max_connections = 10;
  cfg->ip = "192.168.4.1";
  cfg->netmask = "255.255.255.0";
  cfg->gw = "192.168.4.1";
  cfg->dhcp_start = "192.168.4.2";
  cfg->dhcp_end = "192.168.4.100";
  cfg->trigger_on_gpio = -1;
  cfg->disable_after = 0;
  cfg->hostname = NULL;
  cfg->bandwidth_20mhz = false;
  cfg->protocol = "BGN";
}
bool mgos_config_wifi_ap_parse_f(const char *fname, struct mgos_config_wifi_ap *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_wifi_ap_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta_get_schema(void) {
  return &mgos_config_schema_[374];
}

void mgos_config_wifi_sta_set_defaults(struct mgos_config_wifi_sta *cfg) {
  cfg->enable = false;
  cfg->ssid = NULL;
  cfg->pass = NULL;
  cfg->bssid = NULL;
  cfg->channel = 0;
  cfg->last_bssid = NULL;
  cfg->last_channel = 0;
  cfg->user = NULL;
  cfg->anon_identity = NULL;
  cfg->cert = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
  cfg->ip = NULL;
  cfg->netmask = NULL;
  cfg->gw = NULL;
  cfg->nameserver = NULL;
  cfg->dhcp_hostname = NULL;
  cfg->protocol = "BGN";
  cfg->listen_interval_ms = 0;
}
bool mgos_config_wifi_sta_parse_f(const char *fname, struct mgos_config_wifi_sta *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_wifi_sta_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta1_get_schema(void) {
  return &mgos_config_schema_[374];
}

void mgos_config_wifi_sta1_set_defaults(struct mgos_config_wifi_sta *cfg) {
  cfg->enable = false;
  cfg->ssid = NULL;
  cfg->pass = NULL;
  cfg->bssid = NULL;
  cfg->channel = 0;
  cfg->last_bssid = NULL;
  cfg->last_channel = 0;
  cfg->user = NULL;
  cfg->anon_identity = NULL;
  cfg->cert = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
  cfg->ip = NULL;
  cfg->netmask = NULL;
  cfg->gw = NULL;
  cfg->nameserver = NULL;
  cfg->dhcp_hostname = NULL;
  cfg->protocol = "BGN";
  cfg->listen_interval_ms = 0;
}
bool mgos_config_wifi_sta1_parse_f(const char *fname, struct mgos_config_wifi_sta *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_wifi_sta1_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta2_get_schema(void) {
  return &mgos_config_schema_[374];
}

void mgos_config_wifi_sta2_set_defaults(struct mgos_config_wifi_sta *cfg) {
  cfg->enable = false;
  cfg->ssid = NULL;
  cfg->pass = NULL;
  cfg->bssid = NULL;
  cfg->channel = 0;
  cfg->last_bssid = NULL;
  cfg->last_channel = 0;
  cfg->user = NULL;
  cfg->anon_identity = NULL;
  cfg->cert = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
  cfg->ip = NULL;
  cfg->netmask = NULL;
  cfg->gw = NULL;
  cfg->nameserver = NULL;
  cfg->dhcp_hostname = NULL;
  cfg->protocol = "BGN";
  cfg->listen_interval_ms = 0;
}
bool mgos_config_wifi_sta2_parse_f(const char *fname, struct mgos_config_wifi_sta *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_wifi_sta2_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_wifi */
const struct mgos_conf_entry *mgos_config_wifi_get_schema(void) {
  return &mgos_config_schema_[316];
}

void mgos_config_wifi_set_defaults(struct mgos_config_wifi *cfg) {
  mgos_config_wifi_ap_set_defaults(&cfg->ap);
  mgos_config_wifi_sta_set_defaults(&cfg->sta);
  mgos_config_wifi_sta1_set_defaults(&cfg->sta1);
  mgos_config_wifi_sta2_set_defaults(&cfg->sta2);
  cfg->sta_rssi_thr = -95;
  cfg->sta_connect_timeout = 15;
  cfg->sta_roam_rssi_thr = -80;
  cfg->sta_roam_interval = 0;
  cfg->sta_ps_mode = 0;
}
bool mgos_config_wifi_parse_f(const char *fname, struct mgos_config_wifi *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_wifi_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_spi */
const struct mgos_conf_entry *mgos_config_spi_get_schema(void) {
  return &mgos_config_schema_[399];
}

void mgos_config_spi_set_defaults(struct mgos_config_spi *cfg) {
  cfg->enable = false;
  cfg->debug = false;
  cfg->unit_no = 3;
  cfg->miso_gpio = 19;
  cfg->mosi_gpio = 23;
  cfg->sclk_gpio = 18;
  cfg->cs0_gpio = 5;
  cfg->cs1_gpio = -1;
  cfg->cs2_gpio = -1;
}
bool mgos_config_spi_parse_f(const char *fname, struct mgos_config_spi *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_spi_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_watson */
const struct mgos_conf_entry *mgos_config_watson_get_schema(void) {
  return &mgos_config_schema_[409];
}

void mgos_config_watson_set_defaults(struct mgos_config_watson *cfg) {
  cfg->enable = false;
  cfg->host_name = NULL;
  cfg->client_id = NULL;
  cfg->token = NULL;
  cfg->cert = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
}
bool mgos_config_watson_parse_f(const char *fname, struct mgos_config_watson *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_watson_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_mjs */
const struct mgos_conf_entry *mgos_config_mjs_get_schema(void) {
  return &mgos_config_schema_[417];
}

void mgos_config_mjs_set_defaults(struct mgos_config_mjs *cfg) {
  cfg->generate_jsc = true;
}
bool mgos_config_mjs_parse_f(const char *fname, struct mgos_config_mjs *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_mjs_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_board_led1 */
const struct mgos_conf_entry *mgos_config_board_led1_get_schema(void) {
  return &mgos_config_schema_[420];
}

void mgos_config_board_led1_set_defaults(struct mgos_config_board_led1 *cfg) {
  cfg->pin = 13;
  cfg->active_high = true;
}
bool mgos_config_board_led1_parse_f(const char *fname, struct mgos_config_board_led1 *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_board_led1_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_board_led2 */
const struct mgos_conf_entry *mgos_config_board_led2_get_schema(void) {
  return &mgos_config_schema_[423];
}

void mgos_config_board_led2_set_defaults(struct mgos_config_board_led2 *cfg) {
  cfg->pin = -1;
  cfg->active_high = true;
}
bool mgos_config_board_led2_parse_f(const char *fname, struct mgos_config_board_led2 *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_board_led2_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_board_led3 */
const struct mgos_conf_entry *mgos_config_board_led3_get_schema(void) {
  return &mgos_config_schema_[426];
}

void mgos_config_board_led3_set_defaults(struct mgos_config_board_led3 *cfg) {
  cfg->pin = -1;
  cfg->active_high = true;
}
bool mgos_config_board_led3_parse_f(const char *fname, struct mgos_config_board_led3 *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_board_led3_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_board_btn1 */
const struct mgos_conf_entry *mgos_config_board_btn1_get_schema(void) {
  return &mgos_config_schema_[429];
}

void mgos_config_board_btn1_set_defaults(struct mgos_config_board_btn1 *cfg) {
  cfg->pin = 0;
  cfg->pull_up = true;
}
bool mgos_config_board_btn1_parse_f(const char *fname, struct mgos_config_board_btn1 *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_board_btn1_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_board_btn2 */
const struct mgos_conf_entry *mgos_config_board_btn2_get_schema(void) {
  return &mgos_config_schema_[432];
}

void mgos_config_board_btn2_set_defaults(struct mgos_config_board_btn2 *cfg) {
  cfg->pin = -1;
  cfg->pull_up = false;
}
bool mgos_config_board_btn2_parse_f(const char *fname, struct mgos_config_board_btn2 *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_board_btn2_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_board_btn3 */
const struct mgos_conf_entry *mgos_config_board_btn3_get_schema(void) {
  return &mgos_config_schema_[435];
}

void mgos_config_board_btn3_set_defaults(struct mgos_config_board_btn3 *cfg) {
  cfg->pin = -1;
  cfg->pull_up = false;
}
bool mgos_config_board_btn3_parse_f(const char *fname, struct mgos_config_board_btn3 *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_board_btn3_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_board */
const struct mgos_conf_entry *mgos_config_board_get_schema(void) {
  return &mgos_config_schema_[419];
}

void mgos_config_board_set_defaults(struct mgos_config_board *cfg) {
  mgos_config_board_led1_set_defaults(&cfg->led1);
  mgos_config_board_led2_set_defaults(&cfg->led2);
  mgos_config_board_led3_set_defaults(&cfg->led3);
  mgos_config_board_btn1_set_defaults(&cfg->btn1);
  mgos_config_board_btn2_set_defaults(&cfg->btn2);
  mgos_config_board_btn3_set_defaults(&cfg->btn3);
}
bool mgos_config_board_parse_f(const char *fname, struct mgos_config_board *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_board_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config */
const struct mgos_conf_entry *mgos_config_get_schema(void) {
  return &mgos_config_schema_[0];
}

void mgos_config_set_defaults(struct mgos_config *cfg) {
  mgos_config_debug_set_defaults(&cfg->debug);
  mgos_config_sys_set_defaults(&cfg->sys);
  mgos_config_device_set_defaults(&cfg->device);
  cfg->conf_acl = "*";
  mgos_config_i2c_set_defaults(&cfg->i2c);
  mgos_config_i2c1_set_defaults(&cfg->i2c1);
  mgos_config_mqtt_set_defaults(&cfg->mqtt);
  mgos_config_mqtt1_set_defaults(&cfg->mqtt1);
  mgos_config_shadow_set_defaults(&cfg->shadow);
  mgos_config_aws_set_defaults(&cfg->aws);
  mgos_config_sntp_set_defaults(&cfg->sntp);
  mgos_config_azure_set_defaults(&cfg->azure);
  mgos_config_bt_set_defaults(&cfg->bt);
  mgos_config_update_set_defaults(&cfg->update);
  mgos_config_rpc_set_defaults(&cfg->rpc);
  mgos_config_dash_set_defaults(&cfg->dash);
  mgos_config_dns_sd_set_defaults(&cfg->dns_sd);
  mgos_config_eth_set_defaults(&cfg->eth);
  mgos_config_devtab_set_defaults(&cfg->devtab);
  mgos_config_fstab_set_defaults(&cfg->fstab);
  mgos_config_gcp_set_defaults(&cfg->gcp);
  mgos_config_http_set_defaults(&cfg->http);
  mgos_config_provision_set_defaults(&cfg->provision);
  mgos_config_wifi_set_defaults(&cfg->wifi);
  mgos_config_spi_set_defaults(&cfg->spi);
  mgos_config_watson_set_defaults(&cfg->watson);
  mgos_config_mjs_set_defaults(&cfg->mjs);
  mgos_config_board_set_defaults(&cfg->board);
}
bool mgos_config_parse_f(const char *fname, struct mgos_config *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* Global instance */
struct mgos_config mgos_sys_config;

/* Accessors */

/* debug */
const struct mgos_config_debug *mgos_config_get_debug(const struct mgos_config *cfg) { return &cfg->debug; }

/* debug.udp_log_addr */
const char * mgos_config_get_debug_udp_log_addr(const struct mgos_config *cfg) { return cfg->debug.udp_log_addr; }
const char * mgos_config_get_default_debug_udp_log_addr(void) { return NULL; }
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.udp_log_addr, v); }

/* debug.udp_log_level */
int mgos_config_get_debug_udp_log_level(const struct mgos_config *cfg) { return cfg->debug.udp_log_level; }
int mgos_config_get_default_debug_udp_log_level(void) { return 3; }
void mgos_config_set_debug_udp_log_level(struct mgos_config *cfg, int v) { cfg->debug.udp_log_level = v; }

/* debug.mbedtls_level */
int mgos_config_get_debug_mbedtls_level(const struct mgos_config *cfg) { return cfg->debug.mbedtls_level; }
int mgos_config_get_default_debug_mbedtls_level(void) { return 1; }
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int v) { cfg->debug.mbedtls_level = v; }

/* debug.level */
int mgos_config_get_debug_level(const struct mgos_config *cfg) { return cfg->debug.level; }
int mgos_config_get_default_debug_level(void) { return 2; }
void mgos_config_set_debug_level(struct mgos_config *cfg, int v) { cfg->debug.level = v; }

/* debug.file_level */
const char * mgos_config_get_debug_file_level(const struct mgos_config *cfg) { return cfg->debug.file_level; }
const char * mgos_config_get_default_debug_file_level(void) { return NULL; }
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.file_level, v); }

/* debug.event_level */
int mgos_config_get_debug_event_level(const struct mgos_config *cfg) { return cfg->debug.event_level; }
int mgos_config_get_default_debug_event_level(void) { return 2; }
void mgos_config_set_debug_event_level(struct mgos_config *cfg, int v) { cfg->debug.event_level = v; }

/* debug.stdout_uart */
int mgos_config_get_debug_stdout_uart(const struct mgos_config *cfg) { return cfg->debug.stdout_uart; }
int mgos_config_get_default_debug_stdout_uart(void) { return 0; }
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int v) { cfg->debug.stdout_uart = v; }

/* debug.stderr_uart */
int mgos_config_get_debug_stderr_uart(const struct mgos_config *cfg) { return cfg->debug.stderr_uart; }
int mgos_config_get_default_debug_stderr_uart(void) { return 0; }
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int v) { cfg->debug.stderr_uart = v; }

/* debug.factory_reset_gpio */
int mgos_config_get_debug_factory_reset_gpio(const struct mgos_config *cfg) { return cfg->debug.factory_reset_gpio; }
int mgos_config_get_default_debug_factory_reset_gpio(void) { return -1; }
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int v) { cfg->debug.factory_reset_gpio = v; }

/* debug.mg_mgr_hexdump_file */
const char * mgos_config_get_debug_mg_mgr_hexdump_file(const struct mgos_config *cfg) { return cfg->debug.mg_mgr_hexdump_file; }
const char * mgos_config_get_default_debug_mg_mgr_hexdump_file(void) { return NULL; }
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.mg_mgr_hexdump_file, v); }

/* debug.stdout_topic */
const char * mgos_config_get_debug_stdout_topic(const struct mgos_config *cfg) { return cfg->debug.stdout_topic; }
const char * mgos_config_get_default_debug_stdout_topic(void) { return NULL; }
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.stdout_topic, v); }

/* debug.stderr_topic */
const char * mgos_config_get_debug_stderr_topic(const struct mgos_config *cfg) { return cfg->debug.stderr_topic; }
const char * mgos_config_get_default_debug_stderr_topic(void) { return NULL; }
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.stderr_topic, v); }

/* sys */
const struct mgos_config_sys *mgos_config_get_sys(const struct mgos_config *cfg) { return &cfg->sys; }

/* sys.esp32_adc_vref */
int mgos_config_get_sys_esp32_adc_vref(const struct mgos_config *cfg) { return cfg->sys.esp32_adc_vref; }
int mgos_config_get_default_sys_esp32_adc_vref(void) { return 0; }
void mgos_config_set_sys_esp32_adc_vref(struct mgos_config *cfg, int v) { cfg->sys.esp32_adc_vref = v; }

/* sys.esp32_adc_width */
int mgos_config_get_sys_esp32_adc_width(const struct mgos_config *cfg) { return cfg->sys.esp32_adc_width; }
int mgos_config_get_default_sys_esp32_adc_width(void) { return 3; }
void mgos_config_set_sys_esp32_adc_width(struct mgos_config *cfg, int v) { cfg->sys.esp32_adc_width = v; }

/* sys.tz_spec */
const char * mgos_config_get_sys_tz_spec(const struct mgos_config *cfg) { return cfg->sys.tz_spec; }
const char * mgos_config_get_default_sys_tz_spec(void) { return NULL; }
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.tz_spec, v); }

/* sys.wdt_timeout */
int mgos_config_get_sys_wdt_timeout(const struct mgos_config *cfg) { return cfg->sys.wdt_timeout; }
int mgos_config_get_default_sys_wdt_timeout(void) { return 30; }
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int v) { cfg->sys.wdt_timeout = v; }

/* sys.pref_ota_lib */
const char * mgos_config_get_sys_pref_ota_lib(const struct mgos_config *cfg) { return cfg->sys.pref_ota_lib; }
const char * mgos_config_get_default_sys_pref_ota_lib(void) { return NULL; }
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.pref_ota_lib, v); }

/* sys.atca */
const struct mgos_config_sys_atca *mgos_config_get_sys_atca(const struct mgos_config *cfg) { return &cfg->sys.atca; }

/* sys.atca.enable */
int mgos_config_get_sys_atca_enable(const struct mgos_config *cfg) { return cfg->sys.atca.enable; }
int mgos_config_get_default_sys_atca_enable(void) { return false; }
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int v) { cfg->sys.atca.enable = v; }

/* sys.atca.i2c_bus */
int mgos_config_get_sys_atca_i2c_bus(const struct mgos_config *cfg) { return cfg->sys.atca.i2c_bus; }
int mgos_config_get_default_sys_atca_i2c_bus(void) { return 0; }
void mgos_config_set_sys_atca_i2c_bus(struct mgos_config *cfg, int v) { cfg->sys.atca.i2c_bus = v; }

/* sys.atca.i2c_addr */
int mgos_config_get_sys_atca_i2c_addr(const struct mgos_config *cfg) { return cfg->sys.atca.i2c_addr; }
int mgos_config_get_default_sys_atca_i2c_addr(void) { return 96; }
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int v) { cfg->sys.atca.i2c_addr = v; }

/* sys.atca.ecdh_slots_mask */
int mgos_config_get_sys_atca_ecdh_slots_mask(const struct mgos_config *cfg) { return cfg->sys.atca.ecdh_slots_mask; }
int mgos_config_get_default_sys_atca_ecdh_slots_mask(void) { return 12; }
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int v) { cfg->sys.atca.ecdh_slots_mask = v; }

/* sys.mount */
const struct mgos_config_sys_mount *mgos_config_get_sys_mount(const struct mgos_config *cfg) { return &cfg->sys.mount; }

/* sys.mount.path */
const char * mgos_config_get_sys_mount_path(const struct mgos_config *cfg) { return cfg->sys.mount.path; }
const char * mgos_config_get_default_sys_mount_path(void) { return NULL; }
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.mount.path, v); }

/* sys.mount.dev_type */
const char * mgos_config_get_sys_mount_dev_type(const struct mgos_config *cfg) { return cfg->sys.mount.dev_type; }
const char * mgos_config_get_default_sys_mount_dev_type(void) { return NULL; }
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.mount.dev_type, v); }

/* sys.mount.dev_opts */
const char * mgos_config_get_sys_mount_dev_opts(const struct mgos_config *cfg) { return cfg->sys.mount.dev_opts; }
const char * mgos_config_get_default_sys_mount_dev_opts(void) { return NULL; }
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.mount.dev_opts, v); }

/* sys.mount.fs_type */
const char * mgos_config_get_sys_mount_fs_type(const struct mgos_config *cfg) { return cfg->sys.mount.fs_type; }
const char * mgos_config_get_default_sys_mount_fs_type(void) { return NULL; }
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.mount.fs_type, v); }

/* sys.mount.fs_opts */
const char * mgos_config_get_sys_mount_fs_opts(const struct mgos_config *cfg) { return cfg->sys.mount.fs_opts; }
const char * mgos_config_get_default_sys_mount_fs_opts(void) { return NULL; }
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.mount.fs_opts, v); }

/* device */
const struct mgos_config_device *mgos_config_get_device(const struct mgos_config *cfg) { return &cfg->device; }

/* device.id */
const char * mgos_config_get_device_id(const struct mgos_config *cfg) { return cfg->device.id; }
const char * mgos_config_get_default_device_id(void) { return "esp32_??????"; }
void mgos_config_set_device_id(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.id, v); }

/* device.license */
const char * mgos_config_get_device_license(const struct mgos_config *cfg) { return cfg->device.license; }
const char * mgos_config_get_default_device_license(void) { return NULL; }
void mgos_config_set_device_license(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.license, v); }

/* device.mac */
const char * mgos_config_get_device_mac(const struct mgos_config *cfg) { return cfg->device.mac; }
const char * mgos_config_get_default_device_mac(void) { return NULL; }
void mgos_config_set_device_mac(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.mac, v); }

/* device.public_key */
const char * mgos_config_get_device_public_key(const struct mgos_config *cfg) { return cfg->device.public_key; }
const char * mgos_config_get_default_device_public_key(void) { return NULL; }
void mgos_config_set_device_public_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.public_key, v); }

/* device.sn */
const char * mgos_config_get_device_sn(const struct mgos_config *cfg) { return cfg->device.sn; }
const char * mgos_config_get_default_device_sn(void) { return NULL; }
void mgos_config_set_device_sn(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.sn, v); }

/* conf_acl */
const char * mgos_config_get_conf_acl(const struct mgos_config *cfg) { return cfg->conf_acl; }
const char * mgos_config_get_default_conf_acl(void) { return "*"; }
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->conf_acl, v); }

/* i2c */
const struct mgos_config_i2c *mgos_config_get_i2c(const struct mgos_config *cfg) { return &cfg->i2c; }

/* i2c.unit_no */
int mgos_config_get_i2c_unit_no(const struct mgos_config *cfg) { return cfg->i2c.unit_no; }
int mgos_config_get_default_i2c_unit_no(void) { return 0; }
void mgos_config_set_i2c_unit_no(struct mgos_config *cfg, int v) { cfg->i2c.unit_no = v; }

/* i2c.enable */
int mgos_config_get_i2c_enable(const struct mgos_config *cfg) { return cfg->i2c.enable; }
int mgos_config_get_default_i2c_enable(void) { return true; }
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int v) { cfg->i2c.enable = v; }

/* i2c.freq */
int mgos_config_get_i2c_freq(const struct mgos_config *cfg) { return cfg->i2c.freq; }
int mgos_config_get_default_i2c_freq(void) { return 100000; }
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int v) { cfg->i2c.freq = v; }

/* i2c.debug */
int mgos_config_get_i2c_debug(const struct mgos_config *cfg) { return cfg->i2c.debug; }
int mgos_config_get_default_i2c_debug(void) { return false; }
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int v) { cfg->i2c.debug = v; }

/* i2c.sda_gpio */
int mgos_config_get_i2c_sda_gpio(const struct mgos_config *cfg) { return cfg->i2c.sda_gpio; }
int mgos_config_get_default_i2c_sda_gpio(void) { return 32; }
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int v) { cfg->i2c.sda_gpio = v; }

/* i2c.scl_gpio */
int mgos_config_get_i2c_scl_gpio(const struct mgos_config *cfg) { return cfg->i2c.scl_gpio; }
int mgos_config_get_default_i2c_scl_gpio(void) { return 33; }
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int v) { cfg->i2c.scl_gpio = v; }

/* i2c1 */
const struct mgos_config_i2c *mgos_config_get_i2c1(const struct mgos_config *cfg) { return &cfg->i2c1; }

/* i2c1.unit_no */
int mgos_config_get_i2c1_unit_no(const struct mgos_config *cfg) { return cfg->i2c1.unit_no; }
int mgos_config_get_default_i2c1_unit_no(void) { return 1; }
void mgos_config_set_i2c1_unit_no(struct mgos_config *cfg, int v) { cfg->i2c1.unit_no = v; }

/* i2c1.enable */
int mgos_config_get_i2c1_enable(const struct mgos_config *cfg) { return cfg->i2c1.enable; }
int mgos_config_get_default_i2c1_enable(void) { return false; }
void mgos_config_set_i2c1_enable(struct mgos_config *cfg, int v) { cfg->i2c1.enable = v; }

/* i2c1.freq */
int mgos_config_get_i2c1_freq(const struct mgos_config *cfg) { return cfg->i2c1.freq; }
int mgos_config_get_default_i2c1_freq(void) { return 100000; }
void mgos_config_set_i2c1_freq(struct mgos_config *cfg, int v) { cfg->i2c1.freq = v; }

/* i2c1.debug */
int mgos_config_get_i2c1_debug(const struct mgos_config *cfg) { return cfg->i2c1.debug; }
int mgos_config_get_default_i2c1_debug(void) { return false; }
void mgos_config_set_i2c1_debug(struct mgos_config *cfg, int v) { cfg->i2c1.debug = v; }

/* i2c1.sda_gpio */
int mgos_config_get_i2c1_sda_gpio(const struct mgos_config *cfg) { return cfg->i2c1.sda_gpio; }
int mgos_config_get_default_i2c1_sda_gpio(void) { return 22; }
void mgos_config_set_i2c1_sda_gpio(struct mgos_config *cfg, int v) { cfg->i2c1.sda_gpio = v; }

/* i2c1.scl_gpio */
int mgos_config_get_i2c1_scl_gpio(const struct mgos_config *cfg) { return cfg->i2c1.scl_gpio; }
int mgos_config_get_default_i2c1_scl_gpio(void) { return 23; }
void mgos_config_set_i2c1_scl_gpio(struct mgos_config *cfg, int v) { cfg->i2c1.scl_gpio = v; }

/* mqtt */
const struct mgos_config_mqtt *mgos_config_get_mqtt(const struct mgos_config *cfg) { return &cfg->mqtt; }

/* mqtt.enable */
int mgos_config_get_mqtt_enable(const struct mgos_config *cfg) { return cfg->mqtt.enable; }
int mgos_config_get_default_mqtt_enable(void) { return false; }
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int v) { cfg->mqtt.enable = v; }

/* mqtt.server */
const char * mgos_config_get_mqtt_server(const struct mgos_config *cfg) { return cfg->mqtt.server; }
const char * mgos_config_get_default_mqtt_server(void) { return "mqtt.eclipseprojects.io:1883"; }
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.server, v); }

/* mqtt.client_id */
const char * mgos_config_get_mqtt_client_id(const struct mgos_config *cfg) { return cfg->mqtt.client_id; }
const char * mgos_config_get_default_mqtt_client_id(void) { return NULL; }
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.client_id, v); }

/* mqtt.user */
const char * mgos_config_get_mqtt_user(const struct mgos_config *cfg) { return cfg->mqtt.user; }
const char * mgos_config_get_default_mqtt_user(void) { return NULL; }
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.user, v); }

/* mqtt.pass */
const char * mgos_config_get_mqtt_pass(const struct mgos_config *cfg) { return cfg->mqtt.pass; }
const char * mgos_config_get_default_mqtt_pass(void) { return NULL; }
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.pass, v); }

/* mqtt.reconnect_timeout_min */
double mgos_config_get_mqtt_reconnect_timeout_min(const struct mgos_config *cfg) { return cfg->mqtt.reconnect_timeout_min; }
double mgos_config_get_default_mqtt_reconnect_timeout_min(void) { return 2.0; }
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double v) { cfg->mqtt.reconnect_timeout_min = v; }

/* mqtt.reconnect_timeout_max */
double mgos_config_get_mqtt_reconnect_timeout_max(const struct mgos_config *cfg) { return cfg->mqtt.reconnect_timeout_max; }
double mgos_config_get_default_mqtt_reconnect_timeout_max(void) { return 60.0; }
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double v) { cfg->mqtt.reconnect_timeout_max = v; }

/* mqtt.ssl_cert */
const char * mgos_config_get_mqtt_ssl_cert(const struct mgos_config *cfg) { return cfg->mqtt.ssl_cert; }
const char * mgos_config_get_default_mqtt_ssl_cert(void) { return NULL; }
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_cert, v); }

/* mqtt.ssl_key */
const char * mgos_config_get_mqtt_ssl_key(const struct mgos_config *cfg) { return cfg->mqtt.ssl_key; }
const char * mgos_config_get_default_mqtt_ssl_key(void) { return NULL; }
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_key, v); }

/* mqtt.ssl_ca_cert */
const char * mgos_config_get_mqtt_ssl_ca_cert(const struct mgos_config *cfg) { return cfg->mqtt.ssl_ca_cert; }
const char * mgos_config_get_default_mqtt_ssl_ca_cert(void) { return NULL; }
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_ca_cert, v); }

/* mqtt.ssl_cipher_suites */
const char * mgos_config_get_mqtt_ssl_cipher_suites(const struct mgos_config *cfg) { return cfg->mqtt.ssl_cipher_suites; }
const char * mgos_config_get_default_mqtt_ssl_cipher_suites(void) { return NULL; }
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_cipher_suites, v); }

/* mqtt.ssl_psk_identity */
const char * mgos_config_get_mqtt_ssl_psk_identity(const struct mgos_config *cfg) { return cfg->mqtt.ssl_psk_identity; }
const char * mgos_config_get_default_mqtt_ssl_psk_identity(void) { return NULL; }
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_psk_identity, v); }

/* mqtt.ssl_psk_key */
const char * mgos_config_get_mqtt_ssl_psk_key(const struct mgos_config *cfg) { return cfg->mqtt.ssl_psk_key; }
const char * mgos_config_get_default_mqtt_ssl_psk_key(void) { return NULL; }
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_psk_key, v); }

/* mqtt.clean_session */
int mgos_config_get_mqtt_clean_session(const struct mgos_config *cfg) { return cfg->mqtt.clean_session; }
int mgos_config_get_default_mqtt_clean_session(void) { return true; }
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int v) { cfg->mqtt.clean_session = v; }

/* mqtt.keep_alive */
int mgos_config_get_mqtt_keep_alive(const struct mgos_config *cfg) { return cfg->mqtt.keep_alive; }
int mgos_config_get_default_mqtt_keep_alive(void) { return 60; }
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int v) { cfg->mqtt.keep_alive = v; }

/* mqtt.will_topic */
const char * mgos_config_get_mqtt_will_topic(const struct mgos_config *cfg) { return cfg->mqtt.will_topic; }
const char * mgos_config_get_default_mqtt_will_topic(void) { return NULL; }
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.will_topic, v); }

/* mqtt.will_message */
const char * mgos_config_get_mqtt_will_message(const struct mgos_config *cfg) { return cfg->mqtt.will_message; }
const char * mgos_config_get_default_mqtt_will_message(void) { return NULL; }
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.will_message, v); }

/* mqtt.will_retain */
int mgos_config_get_mqtt_will_retain(const struct mgos_config *cfg) { return cfg->mqtt.will_retain; }
int mgos_config_get_default_mqtt_will_retain(void) { return false; }
void mgos_config_set_mqtt_will_retain(struct mgos_config *cfg, int v) { cfg->mqtt.will_retain = v; }

/* mqtt.max_qos */
int mgos_config_get_mqtt_max_qos(const struct mgos_config *cfg) { return cfg->mqtt.max_qos; }
int mgos_config_get_default_mqtt_max_qos(void) { return 2; }
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int v) { cfg->mqtt.max_qos = v; }

/* mqtt.recv_mbuf_limit */
int mgos_config_get_mqtt_recv_mbuf_limit(const struct mgos_config *cfg) { return cfg->mqtt.recv_mbuf_limit; }
int mgos_config_get_default_mqtt_recv_mbuf_limit(void) { return 8192; }
void mgos_config_set_mqtt_recv_mbuf_limit(struct mgos_config *cfg, int v) { cfg->mqtt.recv_mbuf_limit = v; }

/* mqtt.require_time */
int mgos_config_get_mqtt_require_time(const struct mgos_config *cfg) { return cfg->mqtt.require_time; }
int mgos_config_get_default_mqtt_require_time(void) { return false; }
void mgos_config_set_mqtt_require_time(struct mgos_config *cfg, int v) { cfg->mqtt.require_time = v; }

/* mqtt.cloud_events */
int mgos_config_get_mqtt_cloud_events(const struct mgos_config *cfg) { return cfg->mqtt.cloud_events; }
int mgos_config_get_default_mqtt_cloud_events(void) { return true; }
void mgos_config_set_mqtt_cloud_events(struct mgos_config *cfg, int v) { cfg->mqtt.cloud_events = v; }

/* mqtt.max_queue_length */
int mgos_config_get_mqtt_max_queue_length(const struct mgos_config *cfg) { return cfg->mqtt.max_queue_length; }
int mgos_config_get_default_mqtt_max_queue_length(void) { return 5; }
void mgos_config_set_mqtt_max_queue_length(struct mgos_config *cfg, int v) { cfg->mqtt.max_queue_length = v; }

/* mqtt.ws_enable */
int mgos_config_get_mqtt_ws_enable(const struct mgos_config *cfg) { return cfg->mqtt.ws_enable; }
int mgos_config_get_default_mqtt_ws_enable(void) { return false; }
void mgos_config_set_mqtt_ws_enable(struct mgos_config *cfg, int v) { cfg->mqtt.ws_enable = v; }

/* mqtt.ws_path */
const char * mgos_config_get_mqtt_ws_path(const struct mgos_config *cfg) { return cfg->mqtt.ws_path; }
const char * mgos_config_get_default_mqtt_ws_path(void) { return "/mqtt"; }
void mgos_config_set_mqtt_ws_path(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ws_path, v); }

/* mqtt1 */
const struct mgos_config_mqtt *mgos_config_get_mqtt1(const struct mgos_config *cfg) { return &cfg->mqtt1; }

/* mqtt1.enable */
int mgos_config_get_mqtt1_enable(const struct mgos_config *cfg) { return cfg->mqtt1.enable; }
int mgos_config_get_default_mqtt1_enable(void) { return false; }
void mgos_config_set_mqtt1_enable(struct mgos_config *cfg, int v) { cfg->mqtt1.enable = v; }

/* mqtt1.server */
const char * mgos_config_get_mqtt1_server(const struct mgos_config *cfg) { return cfg->mqtt1.server; }
const char * mgos_config_get_default_mqtt1_server(void) { return NULL; }
void mgos_config_set_mqtt1_server(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.server, v); }

/* mqtt1.client_id */
const char * mgos_config_get_mqtt1_client_id(const struct mgos_config *cfg) { return cfg->mqtt1.client_id; }
const char * mgos_config_get_default_mqtt1_client_id(void) { return NULL; }
void mgos_config_set_mqtt1_client_id(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.client_id, v); }

/* mqtt1.user */
const char * mgos_config_get_mqtt1_user(const struct mgos_config *cfg) { return cfg->mqtt1.user; }
const char * mgos_config_get_default_mqtt1_user(void) { return NULL; }
void mgos_config_set_mqtt1_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.user, v); }

/* mqtt1.pass */
const char * mgos_config_get_mqtt1_pass(const struct mgos_config *cfg) { return cfg->mqtt1.pass; }
const char * mgos_config_get_default_mqtt1_pass(void) { return NULL; }
void mgos_config_set_mqtt1_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.pass, v); }

/* mqtt1.reconnect_timeout_min */
double mgos_config_get_mqtt1_reconnect_timeout_min(const struct mgos_config *cfg) { return cfg->mqtt1.reconnect_timeout_min; }
double mgos_config_get_default_mqtt1_reconnect_timeout_min(void) { return 2.0; }
void mgos_config_set_mqtt1_reconnect_timeout_min(struct mgos_config *cfg, double v) { cfg->mqtt1.reconnect_timeout_min = v; }

/* mqtt1.reconnect_timeout_max */
double mgos_config_get_mqtt1_reconnect_timeout_max(const struct mgos_config *cfg) { return cfg->mqtt1.reconnect_timeout_max; }
double mgos_config_get_default_mqtt1_reconnect_timeout_max(void) { return 60.0; }
void mgos_config_set_mqtt1_reconnect_timeout_max(struct mgos_config *cfg, double v) { cfg->mqtt1.reconnect_timeout_max = v; }

/* mqtt1.ssl_cert */
const char * mgos_config_get_mqtt1_ssl_cert(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_cert; }
const char * mgos_config_get_default_mqtt1_ssl_cert(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_cert, v); }

/* mqtt1.ssl_key */
const char * mgos_config_get_mqtt1_ssl_key(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_key; }
const char * mgos_config_get_default_mqtt1_ssl_key(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_key, v); }

/* mqtt1.ssl_ca_cert */
const char * mgos_config_get_mqtt1_ssl_ca_cert(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_ca_cert; }
const char * mgos_config_get_default_mqtt1_ssl_ca_cert(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_ca_cert, v); }

/* mqtt1.ssl_cipher_suites */
const char * mgos_config_get_mqtt1_ssl_cipher_suites(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_cipher_suites; }
const char * mgos_config_get_default_mqtt1_ssl_cipher_suites(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_cipher_suites(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_cipher_suites, v); }

/* mqtt1.ssl_psk_identity */
const char * mgos_config_get_mqtt1_ssl_psk_identity(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_psk_identity; }
const char * mgos_config_get_default_mqtt1_ssl_psk_identity(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_psk_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_psk_identity, v); }

/* mqtt1.ssl_psk_key */
const char * mgos_config_get_mqtt1_ssl_psk_key(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_psk_key; }
const char * mgos_config_get_default_mqtt1_ssl_psk_key(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_psk_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_psk_key, v); }

/* mqtt1.clean_session */
int mgos_config_get_mqtt1_clean_session(const struct mgos_config *cfg) { return cfg->mqtt1.clean_session; }
int mgos_config_get_default_mqtt1_clean_session(void) { return true; }
void mgos_config_set_mqtt1_clean_session(struct mgos_config *cfg, int v) { cfg->mqtt1.clean_session = v; }

/* mqtt1.keep_alive */
int mgos_config_get_mqtt1_keep_alive(const struct mgos_config *cfg) { return cfg->mqtt1.keep_alive; }
int mgos_config_get_default_mqtt1_keep_alive(void) { return 60; }
void mgos_config_set_mqtt1_keep_alive(struct mgos_config *cfg, int v) { cfg->mqtt1.keep_alive = v; }

/* mqtt1.will_topic */
const char * mgos_config_get_mqtt1_will_topic(const struct mgos_config *cfg) { return cfg->mqtt1.will_topic; }
const char * mgos_config_get_default_mqtt1_will_topic(void) { return NULL; }
void mgos_config_set_mqtt1_will_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.will_topic, v); }

/* mqtt1.will_message */
const char * mgos_config_get_mqtt1_will_message(const struct mgos_config *cfg) { return cfg->mqtt1.will_message; }
const char * mgos_config_get_default_mqtt1_will_message(void) { return NULL; }
void mgos_config_set_mqtt1_will_message(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.will_message, v); }

/* mqtt1.will_retain */
int mgos_config_get_mqtt1_will_retain(const struct mgos_config *cfg) { return cfg->mqtt1.will_retain; }
int mgos_config_get_default_mqtt1_will_retain(void) { return false; }
void mgos_config_set_mqtt1_will_retain(struct mgos_config *cfg, int v) { cfg->mqtt1.will_retain = v; }

/* mqtt1.max_qos */
int mgos_config_get_mqtt1_max_qos(const struct mgos_config *cfg) { return cfg->mqtt1.max_qos; }
int mgos_config_get_default_mqtt1_max_qos(void) { return 2; }
void mgos_config_set_mqtt1_max_qos(struct mgos_config *cfg, int v) { cfg->mqtt1.max_qos = v; }

/* mqtt1.recv_mbuf_limit */
int mgos_config_get_mqtt1_recv_mbuf_limit(const struct mgos_config *cfg) { return cfg->mqtt1.recv_mbuf_limit; }
int mgos_config_get_default_mqtt1_recv_mbuf_limit(void) { return 8192; }
void mgos_config_set_mqtt1_recv_mbuf_limit(struct mgos_config *cfg, int v) { cfg->mqtt1.recv_mbuf_limit = v; }

/* mqtt1.require_time */
int mgos_config_get_mqtt1_require_time(const struct mgos_config *cfg) { return cfg->mqtt1.require_time; }
int mgos_config_get_default_mqtt1_require_time(void) { return false; }
void mgos_config_set_mqtt1_require_time(struct mgos_config *cfg, int v) { cfg->mqtt1.require_time = v; }

/* mqtt1.cloud_events */
int mgos_config_get_mqtt1_cloud_events(const struct mgos_config *cfg) { return cfg->mqtt1.cloud_events; }
int mgos_config_get_default_mqtt1_cloud_events(void) { return true; }
void mgos_config_set_mqtt1_cloud_events(struct mgos_config *cfg, int v) { cfg->mqtt1.cloud_events = v; }

/* mqtt1.max_queue_length */
int mgos_config_get_mqtt1_max_queue_length(const struct mgos_config *cfg) { return cfg->mqtt1.max_queue_length; }
int mgos_config_get_default_mqtt1_max_queue_length(void) { return 5; }
void mgos_config_set_mqtt1_max_queue_length(struct mgos_config *cfg, int v) { cfg->mqtt1.max_queue_length = v; }

/* mqtt1.ws_enable */
int mgos_config_get_mqtt1_ws_enable(const struct mgos_config *cfg) { return cfg->mqtt1.ws_enable; }
int mgos_config_get_default_mqtt1_ws_enable(void) { return false; }
void mgos_config_set_mqtt1_ws_enable(struct mgos_config *cfg, int v) { cfg->mqtt1.ws_enable = v; }

/* mqtt1.ws_path */
const char * mgos_config_get_mqtt1_ws_path(const struct mgos_config *cfg) { return cfg->mqtt1.ws_path; }
const char * mgos_config_get_default_mqtt1_ws_path(void) { return "/mqtt"; }
void mgos_config_set_mqtt1_ws_path(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ws_path, v); }

/* shadow */
const struct mgos_config_shadow *mgos_config_get_shadow(const struct mgos_config *cfg) { return &cfg->shadow; }

/* shadow.enable */
int mgos_config_get_shadow_enable(const struct mgos_config *cfg) { return cfg->shadow.enable; }
int mgos_config_get_default_shadow_enable(void) { return true; }
void mgos_config_set_shadow_enable(struct mgos_config *cfg, int v) { cfg->shadow.enable = v; }

/* shadow.lib */
const char * mgos_config_get_shadow_lib(const struct mgos_config *cfg) { return cfg->shadow.lib; }
const char * mgos_config_get_default_shadow_lib(void) { return NULL; }
void mgos_config_set_shadow_lib(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->shadow.lib, v); }

/* shadow.get_on_connect */
int mgos_config_get_shadow_get_on_connect(const struct mgos_config *cfg) { return cfg->shadow.get_on_connect; }
int mgos_config_get_default_shadow_get_on_connect(void) { return true; }
void mgos_config_set_shadow_get_on_connect(struct mgos_config *cfg, int v) { cfg->shadow.get_on_connect = v; }

/* shadow.ota_enable */
int mgos_config_get_shadow_ota_enable(const struct mgos_config *cfg) { return cfg->shadow.ota_enable; }
int mgos_config_get_default_shadow_ota_enable(void) { return true; }
void mgos_config_set_shadow_ota_enable(struct mgos_config *cfg, int v) { cfg->shadow.ota_enable = v; }

/* shadow.autocommit */
int mgos_config_get_shadow_autocommit(const struct mgos_config *cfg) { return cfg->shadow.autocommit; }
int mgos_config_get_default_shadow_autocommit(void) { return false; }
void mgos_config_set_shadow_autocommit(struct mgos_config *cfg, int v) { cfg->shadow.autocommit = v; }

/* aws */
const struct mgos_config_aws *mgos_config_get_aws(const struct mgos_config *cfg) { return &cfg->aws; }

/* aws.thing_name */
const char * mgos_config_get_aws_thing_name(const struct mgos_config *cfg) { return cfg->aws.thing_name; }
const char * mgos_config_get_default_aws_thing_name(void) { return NULL; }
void mgos_config_set_aws_thing_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->aws.thing_name, v); }

/* aws.greengrass */
const struct mgos_config_aws_greengrass *mgos_config_get_aws_greengrass(const struct mgos_config *cfg) { return &cfg->aws.greengrass; }

/* aws.greengrass.enable */
int mgos_config_get_aws_greengrass_enable(const struct mgos_config *cfg) { return cfg->aws.greengrass.enable; }
int mgos_config_get_default_aws_greengrass_enable(void) { return false; }
void mgos_config_set_aws_greengrass_enable(struct mgos_config *cfg, int v) { cfg->aws.greengrass.enable = v; }

/* aws.greengrass.reconnect_timeout_min */
int mgos_config_get_aws_greengrass_reconnect_timeout_min(const struct mgos_config *cfg) { return cfg->aws.greengrass.reconnect_timeout_min; }
int mgos_config_get_default_aws_greengrass_reconnect_timeout_min(void) { return 2; }
void mgos_config_set_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg, int v) { cfg->aws.greengrass.reconnect_timeout_min = v; }

/* aws.greengrass.reconnect_timeout_max */
int mgos_config_get_aws_greengrass_reconnect_timeout_max(const struct mgos_config *cfg) { return cfg->aws.greengrass.reconnect_timeout_max; }
int mgos_config_get_default_aws_greengrass_reconnect_timeout_max(void) { return 60; }
void mgos_config_set_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg, int v) { cfg->aws.greengrass.reconnect_timeout_max = v; }

/* sntp */
const struct mgos_config_sntp *mgos_config_get_sntp(const struct mgos_config *cfg) { return &cfg->sntp; }

/* sntp.enable */
int mgos_config_get_sntp_enable(const struct mgos_config *cfg) { return cfg->sntp.enable; }
int mgos_config_get_default_sntp_enable(void) { return true; }
void mgos_config_set_sntp_enable(struct mgos_config *cfg, int v) { cfg->sntp.enable = v; }

/* sntp.server */
const char * mgos_config_get_sntp_server(const struct mgos_config *cfg) { return cfg->sntp.server; }
const char * mgos_config_get_default_sntp_server(void) { return "time.google.com"; }
void mgos_config_set_sntp_server(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sntp.server, v); }

/* sntp.retry_min */
int mgos_config_get_sntp_retry_min(const struct mgos_config *cfg) { return cfg->sntp.retry_min; }
int mgos_config_get_default_sntp_retry_min(void) { return 1; }
void mgos_config_set_sntp_retry_min(struct mgos_config *cfg, int v) { cfg->sntp.retry_min = v; }

/* sntp.retry_max */
int mgos_config_get_sntp_retry_max(const struct mgos_config *cfg) { return cfg->sntp.retry_max; }
int mgos_config_get_default_sntp_retry_max(void) { return 30; }
void mgos_config_set_sntp_retry_max(struct mgos_config *cfg, int v) { cfg->sntp.retry_max = v; }

/* sntp.update_interval */
int mgos_config_get_sntp_update_interval(const struct mgos_config *cfg) { return cfg->sntp.update_interval; }
int mgos_config_get_default_sntp_update_interval(void) { return 7200; }
void mgos_config_set_sntp_update_interval(struct mgos_config *cfg, int v) { cfg->sntp.update_interval = v; }

/* azure */
const struct mgos_config_azure *mgos_config_get_azure(const struct mgos_config *cfg) { return &cfg->azure; }

/* azure.enable */
int mgos_config_get_azure_enable(const struct mgos_config *cfg) { return cfg->azure.enable; }
int mgos_config_get_default_azure_enable(void) { return false; }
void mgos_config_set_azure_enable(struct mgos_config *cfg, int v) { cfg->azure.enable = v; }

/* azure.cs */
const char * mgos_config_get_azure_cs(const struct mgos_config *cfg) { return cfg->azure.cs; }
const char * mgos_config_get_default_azure_cs(void) { return NULL; }
void mgos_config_set_azure_cs(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->azure.cs, v); }

/* azure.token_ttl */
int mgos_config_get_azure_token_ttl(const struct mgos_config *cfg) { return cfg->azure.token_ttl; }
int mgos_config_get_default_azure_token_ttl(void) { return 3600; }
void mgos_config_set_azure_token_ttl(struct mgos_config *cfg, int v) { cfg->azure.token_ttl = v; }

/* azure.host_name */
const char * mgos_config_get_azure_host_name(const struct mgos_config *cfg) { return cfg->azure.host_name; }
const char * mgos_config_get_default_azure_host_name(void) { return NULL; }
void mgos_config_set_azure_host_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->azure.host_name, v); }

/* azure.device_id */
const char * mgos_config_get_azure_device_id(const struct mgos_config *cfg) { return cfg->azure.device_id; }
const char * mgos_config_get_default_azure_device_id(void) { return NULL; }
void mgos_config_set_azure_device_id(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->azure.device_id, v); }

/* azure.cert */
const char * mgos_config_get_azure_cert(const struct mgos_config *cfg) { return cfg->azure.cert; }
const char * mgos_config_get_default_azure_cert(void) { return NULL; }
void mgos_config_set_azure_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->azure.cert, v); }

/* azure.key */
const char * mgos_config_get_azure_key(const struct mgos_config *cfg) { return cfg->azure.key; }
const char * mgos_config_get_default_azure_key(void) { return NULL; }
void mgos_config_set_azure_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->azure.key, v); }

/* azure.enable_cm */
int mgos_config_get_azure_enable_cm(const struct mgos_config *cfg) { return cfg->azure.enable_cm; }
int mgos_config_get_default_azure_enable_cm(void) { return true; }
void mgos_config_set_azure_enable_cm(struct mgos_config *cfg, int v) { cfg->azure.enable_cm = v; }

/* azure.enable_dm */
int mgos_config_get_azure_enable_dm(const struct mgos_config *cfg) { return cfg->azure.enable_dm; }
int mgos_config_get_default_azure_enable_dm(void) { return true; }
void mgos_config_set_azure_enable_dm(struct mgos_config *cfg, int v) { cfg->azure.enable_dm = v; }

/* bt */
const struct mgos_config_bt *mgos_config_get_bt(const struct mgos_config *cfg) { return &cfg->bt; }

/* bt.enable */
int mgos_config_get_bt_enable(const struct mgos_config *cfg) { return cfg->bt.enable; }
int mgos_config_get_default_bt_enable(void) { return true; }
void mgos_config_set_bt_enable(struct mgos_config *cfg, int v) { cfg->bt.enable = v; }

/* bt.dev_name */
const char * mgos_config_get_bt_dev_name(const struct mgos_config *cfg) { return cfg->bt.dev_name; }
const char * mgos_config_get_default_bt_dev_name(void) { return NULL; }
void mgos_config_set_bt_dev_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->bt.dev_name, v); }

/* bt.adv_enable */
int mgos_config_get_bt_adv_enable(const struct mgos_config *cfg) { return cfg->bt.adv_enable; }
int mgos_config_get_default_bt_adv_enable(void) { return true; }
void mgos_config_set_bt_adv_enable(struct mgos_config *cfg, int v) { cfg->bt.adv_enable = v; }

/* bt.scan_rsp_data_hex */
const char * mgos_config_get_bt_scan_rsp_data_hex(const struct mgos_config *cfg) { return cfg->bt.scan_rsp_data_hex; }
const char * mgos_config_get_default_bt_scan_rsp_data_hex(void) { return NULL; }
void mgos_config_set_bt_scan_rsp_data_hex(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->bt.scan_rsp_data_hex, v); }

/* bt.keep_enabled */
int mgos_config_get_bt_keep_enabled(const struct mgos_config *cfg) { return cfg->bt.keep_enabled; }
int mgos_config_get_default_bt_keep_enabled(void) { return false; }
void mgos_config_set_bt_keep_enabled(struct mgos_config *cfg, int v) { cfg->bt.keep_enabled = v; }

/* bt.allow_pairing */
int mgos_config_get_bt_allow_pairing(const struct mgos_config *cfg) { return cfg->bt.allow_pairing; }
int mgos_config_get_default_bt_allow_pairing(void) { return true; }
void mgos_config_set_bt_allow_pairing(struct mgos_config *cfg, int v) { cfg->bt.allow_pairing = v; }

/* bt.max_paired_devices */
int mgos_config_get_bt_max_paired_devices(const struct mgos_config *cfg) { return cfg->bt.max_paired_devices; }
int mgos_config_get_default_bt_max_paired_devices(void) { return -1; }
void mgos_config_set_bt_max_paired_devices(struct mgos_config *cfg, int v) { cfg->bt.max_paired_devices = v; }

/* bt.random_address */
int mgos_config_get_bt_random_address(const struct mgos_config *cfg) { return cfg->bt.random_address; }
int mgos_config_get_default_bt_random_address(void) { return false; }
void mgos_config_set_bt_random_address(struct mgos_config *cfg, int v) { cfg->bt.random_address = v; }

/* bt.gatt_mtu */
int mgos_config_get_bt_gatt_mtu(const struct mgos_config *cfg) { return cfg->bt.gatt_mtu; }
int mgos_config_get_default_bt_gatt_mtu(void) { return 500; }
void mgos_config_set_bt_gatt_mtu(struct mgos_config *cfg, int v) { cfg->bt.gatt_mtu = v; }

/* bt.gatts */
const struct mgos_config_bt_gatts *mgos_config_get_bt_gatts(const struct mgos_config *cfg) { return &cfg->bt.gatts; }

/* bt.gatts.min_sec_level */
int mgos_config_get_bt_gatts_min_sec_level(const struct mgos_config *cfg) { return cfg->bt.gatts.min_sec_level; }
int mgos_config_get_default_bt_gatts_min_sec_level(void) { return 0; }
void mgos_config_set_bt_gatts_min_sec_level(struct mgos_config *cfg, int v) { cfg->bt.gatts.min_sec_level = v; }

/* bt.debug_svc_enable */
int mgos_config_get_bt_debug_svc_enable(const struct mgos_config *cfg) { return cfg->bt.debug_svc_enable; }
int mgos_config_get_default_bt_debug_svc_enable(void) { return true; }
void mgos_config_set_bt_debug_svc_enable(struct mgos_config *cfg, int v) { cfg->bt.debug_svc_enable = v; }

/* bt.debug_svc_sec_level */
int mgos_config_get_bt_debug_svc_sec_level(const struct mgos_config *cfg) { return cfg->bt.debug_svc_sec_level; }
int mgos_config_get_default_bt_debug_svc_sec_level(void) { return 0; }
void mgos_config_set_bt_debug_svc_sec_level(struct mgos_config *cfg, int v) { cfg->bt.debug_svc_sec_level = v; }

/* update */
const struct mgos_config_update *mgos_config_get_update(const struct mgos_config *cfg) { return &cfg->update; }

/* update.timeout */
int mgos_config_get_update_timeout(const struct mgos_config *cfg) { return cfg->update.timeout; }
int mgos_config_get_default_update_timeout(void) { return 600; }
void mgos_config_set_update_timeout(struct mgos_config *cfg, int v) { cfg->update.timeout = v; }

/* update.commit_timeout */
int mgos_config_get_update_commit_timeout(const struct mgos_config *cfg) { return cfg->update.commit_timeout; }
int mgos_config_get_default_update_commit_timeout(void) { return 0; }
void mgos_config_set_update_commit_timeout(struct mgos_config *cfg, int v) { cfg->update.commit_timeout = v; }

/* update.key0 */
const char * mgos_config_get_update_key0(const struct mgos_config *cfg) { return cfg->update.key0; }
const char * mgos_config_get_default_update_key0(void) { return NULL; }
void mgos_config_set_update_key0(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.key0, v); }

/* update.key1 */
const char * mgos_config_get_update_key1(const struct mgos_config *cfg) { return cfg->update.key1; }
const char * mgos_config_get_default_update_key1(void) { return NULL; }
void mgos_config_set_update_key1(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.key1, v); }

/* update.key2 */
const char * mgos_config_get_update_key2(const struct mgos_config *cfg) { return cfg->update.key2; }
const char * mgos_config_get_default_update_key2(void) { return NULL; }
void mgos_config_set_update_key2(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.key2, v); }

/* update.key3 */
const char * mgos_config_get_update_key3(const struct mgos_config *cfg) { return cfg->update.key3; }
const char * mgos_config_get_default_update_key3(void) { return NULL; }
void mgos_config_set_update_key3(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.key3, v); }

/* update.key4 */
const char * mgos_config_get_update_key4(const struct mgos_config *cfg) { return cfg->update.key4; }
const char * mgos_config_get_default_update_key4(void) { return NULL; }
void mgos_config_set_update_key4(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.key4, v); }

/* update.key5 */
const char * mgos_config_get_update_key5(const struct mgos_config *cfg) { return cfg->update.key5; }
const char * mgos_config_get_default_update_key5(void) { return NULL; }
void mgos_config_set_update_key5(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.key5, v); }

/* update.key6 */
const char * mgos_config_get_update_key6(const struct mgos_config *cfg) { return cfg->update.key6; }
const char * mgos_config_get_default_update_key6(void) { return NULL; }
void mgos_config_set_update_key6(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.key6, v); }

/* update.key7 */
const char * mgos_config_get_update_key7(const struct mgos_config *cfg) { return cfg->update.key7; }
const char * mgos_config_get_default_update_key7(void) { return NULL; }
void mgos_config_set_update_key7(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.key7, v); }

/* update.sig_req_mask */
int mgos_config_get_update_sig_req_mask(const struct mgos_config *cfg) { return cfg->update.sig_req_mask; }
int mgos_config_get_default_update_sig_req_mask(void) { return -1; }
void mgos_config_set_update_sig_req_mask(struct mgos_config *cfg, int v) { cfg->update.sig_req_mask = v; }

/* update.url */
const char * mgos_config_get_update_url(const struct mgos_config *cfg) { return cfg->update.url; }
const char * mgos_config_get_default_update_url(void) { return NULL; }
void mgos_config_set_update_url(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.url, v); }

/* update.interval */
int mgos_config_get_update_interval(const struct mgos_config *cfg) { return cfg->update.interval; }
int mgos_config_get_default_update_interval(void) { return 0; }
void mgos_config_set_update_interval(struct mgos_config *cfg, int v) { cfg->update.interval = v; }

/* update.extra_http_headers */
const char * mgos_config_get_update_extra_http_headers(const struct mgos_config *cfg) { return cfg->update.extra_http_headers; }
const char * mgos_config_get_default_update_extra_http_headers(void) { return NULL; }
void mgos_config_set_update_extra_http_headers(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.extra_http_headers, v); }

/* update.ssl_ca_file */
const char * mgos_config_get_update_ssl_ca_file(const struct mgos_config *cfg) { return cfg->update.ssl_ca_file; }
const char * mgos_config_get_default_update_ssl_ca_file(void) { return "ca.pem"; }
void mgos_config_set_update_ssl_ca_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.ssl_ca_file, v); }

/* update.ssl_client_cert_file */
const char * mgos_config_get_update_ssl_client_cert_file(const struct mgos_config *cfg) { return cfg->update.ssl_client_cert_file; }
const char * mgos_config_get_default_update_ssl_client_cert_file(void) { return NULL; }
void mgos_config_set_update_ssl_client_cert_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.ssl_client_cert_file, v); }

/* update.ssl_server_name */
const char * mgos_config_get_update_ssl_server_name(const struct mgos_config *cfg) { return cfg->update.ssl_server_name; }
const char * mgos_config_get_default_update_ssl_server_name(void) { return NULL; }
void mgos_config_set_update_ssl_server_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->update.ssl_server_name, v); }

/* update.enable_post */
int mgos_config_get_update_enable_post(const struct mgos_config *cfg) { return cfg->update.enable_post; }
int mgos_config_get_default_update_enable_post(void) { return true; }
void mgos_config_set_update_enable_post(struct mgos_config *cfg, int v) { cfg->update.enable_post = v; }

/* rpc */
const struct mgos_config_rpc *mgos_config_get_rpc(const struct mgos_config *cfg) { return &cfg->rpc; }

/* rpc.enable */
int mgos_config_get_rpc_enable(const struct mgos_config *cfg) { return cfg->rpc.enable; }
int mgos_config_get_default_rpc_enable(void) { return true; }
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int v) { cfg->rpc.enable = v; }

/* rpc.http_enable */
int mgos_config_get_rpc_http_enable(const struct mgos_config *cfg) { return cfg->rpc.http_enable; }
int mgos_config_get_default_rpc_http_enable(void) { return true; }
void mgos_config_set_rpc_http_enable(struct mgos_config *cfg, int v) { cfg->rpc.http_enable = v; }

/* rpc.service_sys_enable */
int mgos_config_get_rpc_service_sys_enable(const struct mgos_config *cfg) { return cfg->rpc.service_sys_enable; }
int mgos_config_get_default_rpc_service_sys_enable(void) { return true; }
void mgos_config_set_rpc_service_sys_enable(struct mgos_config *cfg, int v) { cfg->rpc.service_sys_enable = v; }

/* rpc.max_frame_size */
int mgos_config_get_rpc_max_frame_size(const struct mgos_config *cfg) { return cfg->rpc.max_frame_size; }
int mgos_config_get_default_rpc_max_frame_size(void) { return 4096; }
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int v) { cfg->rpc.max_frame_size = v; }

/* rpc.max_queue_length */
int mgos_config_get_rpc_max_queue_length(const struct mgos_config *cfg) { return cfg->rpc.max_queue_length; }
int mgos_config_get_default_rpc_max_queue_length(void) { return 25; }
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int v) { cfg->rpc.max_queue_length = v; }

/* rpc.max_non_persistent_channels */
int mgos_config_get_rpc_max_non_persistent_channels(const struct mgos_config *cfg) { return cfg->rpc.max_non_persistent_channels; }
int mgos_config_get_default_rpc_max_non_persistent_channels(void) { return 20; }
void mgos_config_set_rpc_max_non_persistent_channels(struct mgos_config *cfg, int v) { cfg->rpc.max_non_persistent_channels = v; }

/* rpc.default_out_channel_idle_close_timeout */
int mgos_config_get_rpc_default_out_channel_idle_close_timeout(const struct mgos_config *cfg) { return cfg->rpc.default_out_channel_idle_close_timeout; }
int mgos_config_get_default_rpc_default_out_channel_idle_close_timeout(void) { return 10; }
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int v) { cfg->rpc.default_out_channel_idle_close_timeout = v; }

/* rpc.acl */
const char * mgos_config_get_rpc_acl(const struct mgos_config *cfg) { return cfg->rpc.acl; }
const char * mgos_config_get_default_rpc_acl(void) { return NULL; }
void mgos_config_set_rpc_acl(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.acl, v); }

/* rpc.acl_file */
const char * mgos_config_get_rpc_acl_file(const struct mgos_config *cfg) { return cfg->rpc.acl_file; }
const char * mgos_config_get_default_rpc_acl_file(void) { return NULL; }
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.acl_file, v); }

/* rpc.auth_domain */
const char * mgos_config_get_rpc_auth_domain(const struct mgos_config *cfg) { return cfg->rpc.auth_domain; }
const char * mgos_config_get_default_rpc_auth_domain(void) { return "RPC"; }
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.auth_domain, v); }

/* rpc.auth_file */
const char * mgos_config_get_rpc_auth_file(const struct mgos_config *cfg) { return cfg->rpc.auth_file; }
const char * mgos_config_get_default_rpc_auth_file(void) { return NULL; }
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.auth_file, v); }

/* rpc.auth_algo */
int mgos_config_get_rpc_auth_algo(const struct mgos_config *cfg) { return cfg->rpc.auth_algo; }
int mgos_config_get_default_rpc_auth_algo(void) { return 0; }
void mgos_config_set_rpc_auth_algo(struct mgos_config *cfg, int v) { cfg->rpc.auth_algo = v; }

/* rpc.ws */
const struct mgos_config_rpc_ws *mgos_config_get_rpc_ws(const struct mgos_config *cfg) { return &cfg->rpc.ws; }

/* rpc.ws.enable */
int mgos_config_get_rpc_ws_enable(const struct mgos_config *cfg) { return cfg->rpc.ws.enable; }
int mgos_config_get_default_rpc_ws_enable(void) { return true; }
void mgos_config_set_rpc_ws_enable(struct mgos_config *cfg, int v) { cfg->rpc.ws.enable = v; }

/* rpc.ws.server_address */
const char * mgos_config_get_rpc_ws_server_address(const struct mgos_config *cfg) { return cfg->rpc.ws.server_address; }
const char * mgos_config_get_default_rpc_ws_server_address(void) { return NULL; }
void mgos_config_set_rpc_ws_server_address(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.server_address, v); }

/* rpc.ws.reconnect_interval_min */
int mgos_config_get_rpc_ws_reconnect_interval_min(const struct mgos_config *cfg) { return cfg->rpc.ws.reconnect_interval_min; }
int mgos_config_get_default_rpc_ws_reconnect_interval_min(void) { return 1; }
void mgos_config_set_rpc_ws_reconnect_interval_min(struct mgos_config *cfg, int v) { cfg->rpc.ws.reconnect_interval_min = v; }

/* rpc.ws.reconnect_interval_max */
int mgos_config_get_rpc_ws_reconnect_interval_max(const struct mgos_config *cfg) { return cfg->rpc.ws.reconnect_interval_max; }
int mgos_config_get_default_rpc_ws_reconnect_interval_max(void) { return 60; }
void mgos_config_set_rpc_ws_reconnect_interval_max(struct mgos_config *cfg, int v) { cfg->rpc.ws.reconnect_interval_max = v; }

/* rpc.ws.ssl_server_name */
const char * mgos_config_get_rpc_ws_ssl_server_name(const struct mgos_config *cfg) { return cfg->rpc.ws.ssl_server_name; }
const char * mgos_config_get_default_rpc_ws_ssl_server_name(void) { return NULL; }
void mgos_config_set_rpc_ws_ssl_server_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.ssl_server_name, v); }

/* rpc.ws.ssl_cert */
const char * mgos_config_get_rpc_ws_ssl_cert(const struct mgos_config *cfg) { return cfg->rpc.ws.ssl_cert; }
const char * mgos_config_get_default_rpc_ws_ssl_cert(void) { return NULL; }
void mgos_config_set_rpc_ws_ssl_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.ssl_cert, v); }

/* rpc.ws.ssl_key */
const char * mgos_config_get_rpc_ws_ssl_key(const struct mgos_config *cfg) { return cfg->rpc.ws.ssl_key; }
const char * mgos_config_get_default_rpc_ws_ssl_key(void) { return NULL; }
void mgos_config_set_rpc_ws_ssl_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.ssl_key, v); }

/* rpc.ws.ssl_ca_cert */
const char * mgos_config_get_rpc_ws_ssl_ca_cert(const struct mgos_config *cfg) { return cfg->rpc.ws.ssl_ca_cert; }
const char * mgos_config_get_default_rpc_ws_ssl_ca_cert(void) { return NULL; }
void mgos_config_set_rpc_ws_ssl_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.ws.ssl_ca_cert, v); }

/* rpc.azure */
const struct mgos_config_rpc_azure *mgos_config_get_rpc_azure(const struct mgos_config *cfg) { return &cfg->rpc.azure; }

/* rpc.azure.enable_dm */
int mgos_config_get_rpc_azure_enable_dm(const struct mgos_config *cfg) { return cfg->rpc.azure.enable_dm; }
int mgos_config_get_default_rpc_azure_enable_dm(void) { return true; }
void mgos_config_set_rpc_azure_enable_dm(struct mgos_config *cfg, int v) { cfg->rpc.azure.enable_dm = v; }

/* rpc.gatts */
const struct mgos_config_rpc_gatts *mgos_config_get_rpc_gatts(const struct mgos_config *cfg) { return &cfg->rpc.gatts; }

/* rpc.gatts.enable */
int mgos_config_get_rpc_gatts_enable(const struct mgos_config *cfg) { return cfg->rpc.gatts.enable; }
int mgos_config_get_default_rpc_gatts_enable(void) { return true; }
void mgos_config_set_rpc_gatts_enable(struct mgos_config *cfg, int v) { cfg->rpc.gatts.enable = v; }

/* rpc.gatts.sec_level */
int mgos_config_get_rpc_gatts_sec_level(const struct mgos_config *cfg) { return cfg->rpc.gatts.sec_level; }
int mgos_config_get_default_rpc_gatts_sec_level(void) { return 0; }
void mgos_config_set_rpc_gatts_sec_level(struct mgos_config *cfg, int v) { cfg->rpc.gatts.sec_level = v; }

/* rpc.gatts.max_frame_size */
int mgos_config_get_rpc_gatts_max_frame_size(const struct mgos_config *cfg) { return cfg->rpc.gatts.max_frame_size; }
int mgos_config_get_default_rpc_gatts_max_frame_size(void) { return 4096; }
void mgos_config_set_rpc_gatts_max_frame_size(struct mgos_config *cfg, int v) { cfg->rpc.gatts.max_frame_size = v; }

/* rpc.gcp */
const struct mgos_config_rpc_gcp *mgos_config_get_rpc_gcp(const struct mgos_config *cfg) { return &cfg->rpc.gcp; }

/* rpc.gcp.enable */
int mgos_config_get_rpc_gcp_enable(const struct mgos_config *cfg) { return cfg->rpc.gcp.enable; }
int mgos_config_get_default_rpc_gcp_enable(void) { return true; }
void mgos_config_set_rpc_gcp_enable(struct mgos_config *cfg, int v) { cfg->rpc.gcp.enable = v; }

/* rpc.gcp.subfolder */
const char * mgos_config_get_rpc_gcp_subfolder(const struct mgos_config *cfg) { return cfg->rpc.gcp.subfolder; }
const char * mgos_config_get_default_rpc_gcp_subfolder(void) { return "rpc"; }
void mgos_config_set_rpc_gcp_subfolder(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.gcp.subfolder, v); }

/* rpc.mqtt */
const struct mgos_config_rpc_mqtt *mgos_config_get_rpc_mqtt(const struct mgos_config *cfg) { return &cfg->rpc.mqtt; }

/* rpc.mqtt.enable */
int mgos_config_get_rpc_mqtt_enable(const struct mgos_config *cfg) { return cfg->rpc.mqtt.enable; }
int mgos_config_get_default_rpc_mqtt_enable(void) { return true; }
void mgos_config_set_rpc_mqtt_enable(struct mgos_config *cfg, int v) { cfg->rpc.mqtt.enable = v; }

/* rpc.mqtt.pub_topic */
const char * mgos_config_get_rpc_mqtt_pub_topic(const struct mgos_config *cfg) { return cfg->rpc.mqtt.pub_topic; }
const char * mgos_config_get_default_rpc_mqtt_pub_topic(void) { return "%.*s/rpc"; }
void mgos_config_set_rpc_mqtt_pub_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.mqtt.pub_topic, v); }

/* rpc.mqtt.sub_topic */
const char * mgos_config_get_rpc_mqtt_sub_topic(const struct mgos_config *cfg) { return cfg->rpc.mqtt.sub_topic; }
const char * mgos_config_get_default_rpc_mqtt_sub_topic(void) { return "%.*s/rpc"; }
void mgos_config_set_rpc_mqtt_sub_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.mqtt.sub_topic, v); }

/* rpc.mqtt.sub_wc */
int mgos_config_get_rpc_mqtt_sub_wc(const struct mgos_config *cfg) { return cfg->rpc.mqtt.sub_wc; }
int mgos_config_get_default_rpc_mqtt_sub_wc(void) { return true; }
void mgos_config_set_rpc_mqtt_sub_wc(struct mgos_config *cfg, int v) { cfg->rpc.mqtt.sub_wc = v; }

/* rpc.mqtt.qos */
int mgos_config_get_rpc_mqtt_qos(const struct mgos_config *cfg) { return cfg->rpc.mqtt.qos; }
int mgos_config_get_default_rpc_mqtt_qos(void) { return 1; }
void mgos_config_set_rpc_mqtt_qos(struct mgos_config *cfg, int v) { cfg->rpc.mqtt.qos = v; }

/* rpc.uart */
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(const struct mgos_config *cfg) { return &cfg->rpc.uart; }

/* rpc.uart.uart_no */
int mgos_config_get_rpc_uart_uart_no(const struct mgos_config *cfg) { return cfg->rpc.uart.uart_no; }
int mgos_config_get_default_rpc_uart_uart_no(void) { return 0; }
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int v) { cfg->rpc.uart.uart_no = v; }

/* rpc.uart.baud_rate */
int mgos_config_get_rpc_uart_baud_rate(const struct mgos_config *cfg) { return cfg->rpc.uart.baud_rate; }
int mgos_config_get_default_rpc_uart_baud_rate(void) { return 115200; }
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int v) { cfg->rpc.uart.baud_rate = v; }

/* rpc.uart.fc_type */
int mgos_config_get_rpc_uart_fc_type(const struct mgos_config *cfg) { return cfg->rpc.uart.fc_type; }
int mgos_config_get_default_rpc_uart_fc_type(void) { return 2; }
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int v) { cfg->rpc.uart.fc_type = v; }

/* rpc.uart.dst */
const char * mgos_config_get_rpc_uart_dst(const struct mgos_config *cfg) { return cfg->rpc.uart.dst; }
const char * mgos_config_get_default_rpc_uart_dst(void) { return NULL; }
void mgos_config_set_rpc_uart_dst(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.uart.dst, v); }

/* dash */
const struct mgos_config_dash *mgos_config_get_dash(const struct mgos_config *cfg) { return &cfg->dash; }

/* dash.enable */
int mgos_config_get_dash_enable(const struct mgos_config *cfg) { return cfg->dash.enable; }
int mgos_config_get_default_dash_enable(void) { return false; }
void mgos_config_set_dash_enable(struct mgos_config *cfg, int v) { cfg->dash.enable = v; }

/* dash.token */
const char * mgos_config_get_dash_token(const struct mgos_config *cfg) { return cfg->dash.token; }
const char * mgos_config_get_default_dash_token(void) { return NULL; }
void mgos_config_set_dash_token(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->dash.token, v); }

/* dash.server */
const char * mgos_config_get_dash_server(const struct mgos_config *cfg) { return cfg->dash.server; }
const char * mgos_config_get_default_dash_server(void) { return "wss://mdash.net/api/v2/rpc"; }
void mgos_config_set_dash_server(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->dash.server, v); }

/* dash.ssl_cert */
const char * mgos_config_get_dash_ssl_cert(const struct mgos_config *cfg) { return cfg->dash.ssl_cert; }
const char * mgos_config_get_default_dash_ssl_cert(void) { return NULL; }
void mgos_config_set_dash_ssl_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->dash.ssl_cert, v); }

/* dash.ssl_key */
const char * mgos_config_get_dash_ssl_key(const struct mgos_config *cfg) { return cfg->dash.ssl_key; }
const char * mgos_config_get_default_dash_ssl_key(void) { return NULL; }
void mgos_config_set_dash_ssl_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->dash.ssl_key, v); }

/* dash.ssl_ca_cert */
const char * mgos_config_get_dash_ssl_ca_cert(const struct mgos_config *cfg) { return cfg->dash.ssl_ca_cert; }
const char * mgos_config_get_default_dash_ssl_ca_cert(void) { return "ca.pem"; }
void mgos_config_set_dash_ssl_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->dash.ssl_ca_cert, v); }

/* dash.send_logs */
int mgos_config_get_dash_send_logs(const struct mgos_config *cfg) { return cfg->dash.send_logs; }
int mgos_config_get_default_dash_send_logs(void) { return false; }
void mgos_config_set_dash_send_logs(struct mgos_config *cfg, int v) { cfg->dash.send_logs = v; }

/* dns_sd */
const struct mgos_config_dns_sd *mgos_config_get_dns_sd(const struct mgos_config *cfg) { return &cfg->dns_sd; }

/* dns_sd.enable */
int mgos_config_get_dns_sd_enable(const struct mgos_config *cfg) { return cfg->dns_sd.enable; }
int mgos_config_get_default_dns_sd_enable(void) { return false; }
void mgos_config_set_dns_sd_enable(struct mgos_config *cfg, int v) { cfg->dns_sd.enable = v; }

/* dns_sd.adv_only */
int mgos_config_get_dns_sd_adv_only(const struct mgos_config *cfg) { return cfg->dns_sd.adv_only; }
int mgos_config_get_default_dns_sd_adv_only(void) { return false; }
void mgos_config_set_dns_sd_adv_only(struct mgos_config *cfg, int v) { cfg->dns_sd.adv_only = v; }

/* dns_sd.host_name */
const char * mgos_config_get_dns_sd_host_name(const struct mgos_config *cfg) { return cfg->dns_sd.host_name; }
const char * mgos_config_get_default_dns_sd_host_name(void) { return "mOS-esp32-??????"; }
void mgos_config_set_dns_sd_host_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->dns_sd.host_name, v); }

/* dns_sd.txt */
const char * mgos_config_get_dns_sd_txt(const struct mgos_config *cfg) { return cfg->dns_sd.txt; }
const char * mgos_config_get_default_dns_sd_txt(void) { return NULL; }
void mgos_config_set_dns_sd_txt(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->dns_sd.txt, v); }

/* eth */
const struct mgos_config_eth *mgos_config_get_eth(const struct mgos_config *cfg) { return &cfg->eth; }

/* eth.enable */
int mgos_config_get_eth_enable(const struct mgos_config *cfg) { return cfg->eth.enable; }
int mgos_config_get_default_eth_enable(void) { return false; }
void mgos_config_set_eth_enable(struct mgos_config *cfg, int v) { cfg->eth.enable = v; }

/* eth.phy_addr */
int mgos_config_get_eth_phy_addr(const struct mgos_config *cfg) { return cfg->eth.phy_addr; }
int mgos_config_get_default_eth_phy_addr(void) { return 0; }
void mgos_config_set_eth_phy_addr(struct mgos_config *cfg, int v) { cfg->eth.phy_addr = v; }

/* eth.ip */
const char * mgos_config_get_eth_ip(const struct mgos_config *cfg) { return cfg->eth.ip; }
const char * mgos_config_get_default_eth_ip(void) { return NULL; }
void mgos_config_set_eth_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->eth.ip, v); }

/* eth.netmask */
const char * mgos_config_get_eth_netmask(const struct mgos_config *cfg) { return cfg->eth.netmask; }
const char * mgos_config_get_default_eth_netmask(void) { return NULL; }
void mgos_config_set_eth_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->eth.netmask, v); }

/* eth.gw */
const char * mgos_config_get_eth_gw(const struct mgos_config *cfg) { return cfg->eth.gw; }
const char * mgos_config_get_default_eth_gw(void) { return NULL; }
void mgos_config_set_eth_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->eth.gw, v); }

/* eth.nameserver */
const char * mgos_config_get_eth_nameserver(const struct mgos_config *cfg) { return cfg->eth.nameserver; }
const char * mgos_config_get_default_eth_nameserver(void) { return NULL; }
void mgos_config_set_eth_nameserver(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->eth.nameserver, v); }

/* eth.dhcp_hostname */
const char * mgos_config_get_eth_dhcp_hostname(const struct mgos_config *cfg) { return cfg->eth.dhcp_hostname; }
const char * mgos_config_get_default_eth_dhcp_hostname(void) { return NULL; }
void mgos_config_set_eth_dhcp_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->eth.dhcp_hostname, v); }

/* eth.clk_mode */
int mgos_config_get_eth_clk_mode(const struct mgos_config *cfg) { return cfg->eth.clk_mode; }
int mgos_config_get_default_eth_clk_mode(void) { return 0; }
void mgos_config_set_eth_clk_mode(struct mgos_config *cfg, int v) { cfg->eth.clk_mode = v; }

/* eth.mdc_gpio */
int mgos_config_get_eth_mdc_gpio(const struct mgos_config *cfg) { return cfg->eth.mdc_gpio; }
int mgos_config_get_default_eth_mdc_gpio(void) { return 23; }
void mgos_config_set_eth_mdc_gpio(struct mgos_config *cfg, int v) { cfg->eth.mdc_gpio = v; }

/* eth.mdio_gpio */
int mgos_config_get_eth_mdio_gpio(const struct mgos_config *cfg) { return cfg->eth.mdio_gpio; }
int mgos_config_get_default_eth_mdio_gpio(void) { return 18; }
void mgos_config_set_eth_mdio_gpio(struct mgos_config *cfg, int v) { cfg->eth.mdio_gpio = v; }

/* eth.phy_pwr_gpio */
int mgos_config_get_eth_phy_pwr_gpio(const struct mgos_config *cfg) { return cfg->eth.phy_pwr_gpio; }
int mgos_config_get_default_eth_phy_pwr_gpio(void) { return -1; }
void mgos_config_set_eth_phy_pwr_gpio(struct mgos_config *cfg, int v) { cfg->eth.phy_pwr_gpio = v; }

/* devtab */
const struct mgos_config_devtab *mgos_config_get_devtab(const struct mgos_config *cfg) { return &cfg->devtab; }

/* devtab.dev0 */
const struct mgos_config_devtab_dev0 *mgos_config_get_devtab_dev0(const struct mgos_config *cfg) { return &cfg->devtab.dev0; }

/* devtab.dev0.name */
const char * mgos_config_get_devtab_dev0_name(const struct mgos_config *cfg) { return cfg->devtab.dev0.name; }
const char * mgos_config_get_default_devtab_dev0_name(void) { return NULL; }
void mgos_config_set_devtab_dev0_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev0.name, v); }

/* devtab.dev0.type */
const char * mgos_config_get_devtab_dev0_type(const struct mgos_config *cfg) { return cfg->devtab.dev0.type; }
const char * mgos_config_get_default_devtab_dev0_type(void) { return NULL; }
void mgos_config_set_devtab_dev0_type(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev0.type, v); }

/* devtab.dev0.opts */
const char * mgos_config_get_devtab_dev0_opts(const struct mgos_config *cfg) { return cfg->devtab.dev0.opts; }
const char * mgos_config_get_default_devtab_dev0_opts(void) { return NULL; }
void mgos_config_set_devtab_dev0_opts(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev0.opts, v); }

/* devtab.dev1 */
const struct mgos_config_devtab_dev1 *mgos_config_get_devtab_dev1(const struct mgos_config *cfg) { return &cfg->devtab.dev1; }

/* devtab.dev1.name */
const char * mgos_config_get_devtab_dev1_name(const struct mgos_config *cfg) { return cfg->devtab.dev1.name; }
const char * mgos_config_get_default_devtab_dev1_name(void) { return NULL; }
void mgos_config_set_devtab_dev1_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev1.name, v); }

/* devtab.dev1.type */
const char * mgos_config_get_devtab_dev1_type(const struct mgos_config *cfg) { return cfg->devtab.dev1.type; }
const char * mgos_config_get_default_devtab_dev1_type(void) { return NULL; }
void mgos_config_set_devtab_dev1_type(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev1.type, v); }

/* devtab.dev1.opts */
const char * mgos_config_get_devtab_dev1_opts(const struct mgos_config *cfg) { return cfg->devtab.dev1.opts; }
const char * mgos_config_get_default_devtab_dev1_opts(void) { return NULL; }
void mgos_config_set_devtab_dev1_opts(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev1.opts, v); }

/* devtab.dev2 */
const struct mgos_config_devtab_dev2 *mgos_config_get_devtab_dev2(const struct mgos_config *cfg) { return &cfg->devtab.dev2; }

/* devtab.dev2.name */
const char * mgos_config_get_devtab_dev2_name(const struct mgos_config *cfg) { return cfg->devtab.dev2.name; }
const char * mgos_config_get_default_devtab_dev2_name(void) { return NULL; }
void mgos_config_set_devtab_dev2_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev2.name, v); }

/* devtab.dev2.type */
const char * mgos_config_get_devtab_dev2_type(const struct mgos_config *cfg) { return cfg->devtab.dev2.type; }
const char * mgos_config_get_default_devtab_dev2_type(void) { return NULL; }
void mgos_config_set_devtab_dev2_type(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev2.type, v); }

/* devtab.dev2.opts */
const char * mgos_config_get_devtab_dev2_opts(const struct mgos_config *cfg) { return cfg->devtab.dev2.opts; }
const char * mgos_config_get_default_devtab_dev2_opts(void) { return NULL; }
void mgos_config_set_devtab_dev2_opts(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev2.opts, v); }

/* devtab.dev3 */
const struct mgos_config_devtab_dev3 *mgos_config_get_devtab_dev3(const struct mgos_config *cfg) { return &cfg->devtab.dev3; }

/* devtab.dev3.name */
const char * mgos_config_get_devtab_dev3_name(const struct mgos_config *cfg) { return cfg->devtab.dev3.name; }
const char * mgos_config_get_default_devtab_dev3_name(void) { return NULL; }
void mgos_config_set_devtab_dev3_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev3.name, v); }

/* devtab.dev3.type */
const char * mgos_config_get_devtab_dev3_type(const struct mgos_config *cfg) { return cfg->devtab.dev3.type; }
const char * mgos_config_get_default_devtab_dev3_type(void) { return NULL; }
void mgos_config_set_devtab_dev3_type(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev3.type, v); }

/* devtab.dev3.opts */
const char * mgos_config_get_devtab_dev3_opts(const struct mgos_config *cfg) { return cfg->devtab.dev3.opts; }
const char * mgos_config_get_default_devtab_dev3_opts(void) { return NULL; }
void mgos_config_set_devtab_dev3_opts(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev3.opts, v); }

/* devtab.dev4 */
const struct mgos_config_devtab_dev4 *mgos_config_get_devtab_dev4(const struct mgos_config *cfg) { return &cfg->devtab.dev4; }

/* devtab.dev4.name */
const char * mgos_config_get_devtab_dev4_name(const struct mgos_config *cfg) { return cfg->devtab.dev4.name; }
const char * mgos_config_get_default_devtab_dev4_name(void) { return NULL; }
void mgos_config_set_devtab_dev4_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev4.name, v); }

/* devtab.dev4.type */
const char * mgos_config_get_devtab_dev4_type(const struct mgos_config *cfg) { return cfg->devtab.dev4.type; }
const char * mgos_config_get_default_devtab_dev4_type(void) { return NULL; }
void mgos_config_set_devtab_dev4_type(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev4.type, v); }

/* devtab.dev4.opts */
const char * mgos_config_get_devtab_dev4_opts(const struct mgos_config *cfg) { return cfg->devtab.dev4.opts; }
const char * mgos_config_get_default_devtab_dev4_opts(void) { return NULL; }
void mgos_config_set_devtab_dev4_opts(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->devtab.dev4.opts, v); }

/* fstab */
const struct mgos_config_fstab *mgos_config_get_fstab(const struct mgos_config *cfg) { return &cfg->fstab; }

/* fstab.fs0 */
const struct mgos_config_fstab_fs0 *mgos_config_get_fstab_fs0(const struct mgos_config *cfg) { return &cfg->fstab.fs0; }

/* fstab.fs0.dev */
const char * mgos_config_get_fstab_fs0_dev(const struct mgos_config *cfg) { return cfg->fstab.fs0.dev; }
const char * mgos_config_get_default_fstab_fs0_dev(void) { return NULL; }
void mgos_config_set_fstab_fs0_dev(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->fstab.fs0.dev, v); }

/* fstab.fs0.type */
const char * mgos_config_get_fstab_fs0_type(const struct mgos_config *cfg) { return cfg->fstab.fs0.type; }
const char * mgos_config_get_default_fstab_fs0_type(void) { return NULL; }
void mgos_config_set_fstab_fs0_type(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->fstab.fs0.type, v); }

/* fstab.fs0.opts */
const char * mgos_config_get_fstab_fs0_opts(const struct mgos_config *cfg) { return cfg->fstab.fs0.opts; }
const char * mgos_config_get_default_fstab_fs0_opts(void) { return NULL; }
void mgos_config_set_fstab_fs0_opts(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->fstab.fs0.opts, v); }

/* fstab.fs0.path */
const char * mgos_config_get_fstab_fs0_path(const struct mgos_config *cfg) { return cfg->fstab.fs0.path; }
const char * mgos_config_get_default_fstab_fs0_path(void) { return NULL; }
void mgos_config_set_fstab_fs0_path(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->fstab.fs0.path, v); }

/* fstab.fs0.create */
int mgos_config_get_fstab_fs0_create(const struct mgos_config *cfg) { return cfg->fstab.fs0.create; }
int mgos_config_get_default_fstab_fs0_create(void) { return false; }
void mgos_config_set_fstab_fs0_create(struct mgos_config *cfg, int v) { cfg->fstab.fs0.create = v; }

/* fstab.fs0.optional */
int mgos_config_get_fstab_fs0_optional(const struct mgos_config *cfg) { return cfg->fstab.fs0.optional; }
int mgos_config_get_default_fstab_fs0_optional(void) { return false; }
void mgos_config_set_fstab_fs0_optional(struct mgos_config *cfg, int v) { cfg->fstab.fs0.optional = v; }

/* fstab.fs0.created */
int mgos_config_get_fstab_fs0_created(const struct mgos_config *cfg) { return cfg->fstab.fs0.created; }
int mgos_config_get_default_fstab_fs0_created(void) { return false; }
void mgos_config_set_fstab_fs0_created(struct mgos_config *cfg, int v) { cfg->fstab.fs0.created = v; }

/* fstab.fs1 */
const struct mgos_config_fstab_fs1 *mgos_config_get_fstab_fs1(const struct mgos_config *cfg) { return &cfg->fstab.fs1; }

/* fstab.fs1.dev */
const char * mgos_config_get_fstab_fs1_dev(const struct mgos_config *cfg) { return cfg->fstab.fs1.dev; }
const char * mgos_config_get_default_fstab_fs1_dev(void) { return NULL; }
void mgos_config_set_fstab_fs1_dev(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->fstab.fs1.dev, v); }

/* fstab.fs1.type */
const char * mgos_config_get_fstab_fs1_type(const struct mgos_config *cfg) { return cfg->fstab.fs1.type; }
const char * mgos_config_get_default_fstab_fs1_type(void) { return NULL; }
void mgos_config_set_fstab_fs1_type(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->fstab.fs1.type, v); }

/* fstab.fs1.opts */
const char * mgos_config_get_fstab_fs1_opts(const struct mgos_config *cfg) { return cfg->fstab.fs1.opts; }
const char * mgos_config_get_default_fstab_fs1_opts(void) { return NULL; }
void mgos_config_set_fstab_fs1_opts(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->fstab.fs1.opts, v); }

/* fstab.fs1.path */
const char * mgos_config_get_fstab_fs1_path(const struct mgos_config *cfg) { return cfg->fstab.fs1.path; }
const char * mgos_config_get_default_fstab_fs1_path(void) { return NULL; }
void mgos_config_set_fstab_fs1_path(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->fstab.fs1.path, v); }

/* fstab.fs1.create */
int mgos_config_get_fstab_fs1_create(const struct mgos_config *cfg) { return cfg->fstab.fs1.create; }
int mgos_config_get_default_fstab_fs1_create(void) { return false; }
void mgos_config_set_fstab_fs1_create(struct mgos_config *cfg, int v) { cfg->fstab.fs1.create = v; }

/* fstab.fs1.optional */
int mgos_config_get_fstab_fs1_optional(const struct mgos_config *cfg) { return cfg->fstab.fs1.optional; }
int mgos_config_get_default_fstab_fs1_optional(void) { return false; }
void mgos_config_set_fstab_fs1_optional(struct mgos_config *cfg, int v) { cfg->fstab.fs1.optional = v; }

/* fstab.fs1.created */
int mgos_config_get_fstab_fs1_created(const struct mgos_config *cfg) { return cfg->fstab.fs1.created; }
int mgos_config_get_default_fstab_fs1_created(void) { return false; }
void mgos_config_set_fstab_fs1_created(struct mgos_config *cfg, int v) { cfg->fstab.fs1.created = v; }

/* fstab.fs2 */
const struct mgos_config_fstab_fs2 *mgos_config_get_fstab_fs2(const struct mgos_config *cfg) { return &cfg->fstab.fs2; }

/* fstab.fs2.dev */
const char * mgos_config_get_fstab_fs2_dev(const struct mgos_config *cfg) { return cfg->fstab.fs2.dev; }
const char * mgos_config_get_default_fstab_fs2_dev(void) { return NULL; }
void mgos_config_set_fstab_fs2_dev(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->fstab.fs2.dev, v); }

/* fstab.fs2.type */
const char * mgos_config_get_fstab_fs2_type(const struct mgos_config *cfg) { return cfg->fstab.fs2.type; }
const char * mgos_config_get_default_fstab_fs2_type(void) { return NULL; }
void mgos_config_set_fstab_fs2_type(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->fstab.fs2.type, v); }

/* fstab.fs2.opts */
const char * mgos_config_get_fstab_fs2_opts(const struct mgos_config *cfg) { return cfg->fstab.fs2.opts; }
const char * mgos_config_get_default_fstab_fs2_opts(void) { return NULL; }
void mgos_config_set_fstab_fs2_opts(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->fstab.fs2.opts, v); }

/* fstab.fs2.path */
const char * mgos_config_get_fstab_fs2_path(const struct mgos_config *cfg) { return cfg->fstab.fs2.path; }
const char * mgos_config_get_default_fstab_fs2_path(void) { return NULL; }
void mgos_config_set_fstab_fs2_path(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->fstab.fs2.path, v); }

/* fstab.fs2.create */
int mgos_config_get_fstab_fs2_create(const struct mgos_config *cfg) { return cfg->fstab.fs2.create; }
int mgos_config_get_default_fstab_fs2_create(void) { return false; }
void mgos_config_set_fstab_fs2_create(struct mgos_config *cfg, int v) { cfg->fstab.fs2.create = v; }

/* fstab.fs2.optional */
int mgos_config_get_fstab_fs2_optional(const struct mgos_config *cfg) { return cfg->fstab.fs2.optional; }
int mgos_config_get_default_fstab_fs2_optional(void) { return false; }
void mgos_config_set_fstab_fs2_optional(struct mgos_config *cfg, int v) { cfg->fstab.fs2.optional = v; }

/* fstab.fs2.created */
int mgos_config_get_fstab_fs2_created(const struct mgos_config *cfg) { return cfg->fstab.fs2.created; }
int mgos_config_get_default_fstab_fs2_created(void) { return false; }
void mgos_config_set_fstab_fs2_created(struct mgos_config *cfg, int v) { cfg->fstab.fs2.created = v; }

/* gcp */
const struct mgos_config_gcp *mgos_config_get_gcp(const struct mgos_config *cfg) { return &cfg->gcp; }

/* gcp.enable */
int mgos_config_get_gcp_enable(const struct mgos_config *cfg) { return cfg->gcp.enable; }
int mgos_config_get_default_gcp_enable(void) { return false; }
void mgos_config_set_gcp_enable(struct mgos_config *cfg, int v) { cfg->gcp.enable = v; }

/* gcp.server */
const char * mgos_config_get_gcp_server(const struct mgos_config *cfg) { return cfg->gcp.server; }
const char * mgos_config_get_default_gcp_server(void) { return "mqtt.googleapis.com"; }
void mgos_config_set_gcp_server(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->gcp.server, v); }

/* gcp.project */
const char * mgos_config_get_gcp_project(const struct mgos_config *cfg) { return cfg->gcp.project; }
const char * mgos_config_get_default_gcp_project(void) { return NULL; }
void mgos_config_set_gcp_project(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->gcp.project, v); }

/* gcp.region */
const char * mgos_config_get_gcp_region(const struct mgos_config *cfg) { return cfg->gcp.region; }
const char * mgos_config_get_default_gcp_region(void) { return NULL; }
void mgos_config_set_gcp_region(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->gcp.region, v); }

/* gcp.registry */
const char * mgos_config_get_gcp_registry(const struct mgos_config *cfg) { return cfg->gcp.registry; }
const char * mgos_config_get_default_gcp_registry(void) { return NULL; }
void mgos_config_set_gcp_registry(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->gcp.registry, v); }

/* gcp.device */
const char * mgos_config_get_gcp_device(const struct mgos_config *cfg) { return cfg->gcp.device; }
const char * mgos_config_get_default_gcp_device(void) { return NULL; }
void mgos_config_set_gcp_device(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->gcp.device, v); }

/* gcp.key */
const char * mgos_config_get_gcp_key(const struct mgos_config *cfg) { return cfg->gcp.key; }
const char * mgos_config_get_default_gcp_key(void) { return NULL; }
void mgos_config_set_gcp_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->gcp.key, v); }

/* gcp.ca_cert */
const char * mgos_config_get_gcp_ca_cert(const struct mgos_config *cfg) { return cfg->gcp.ca_cert; }
const char * mgos_config_get_default_gcp_ca_cert(void) { return NULL; }
void mgos_config_set_gcp_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->gcp.ca_cert, v); }

/* gcp.token_ttl */
int mgos_config_get_gcp_token_ttl(const struct mgos_config *cfg) { return cfg->gcp.token_ttl; }
int mgos_config_get_default_gcp_token_ttl(void) { return 3600; }
void mgos_config_set_gcp_token_ttl(struct mgos_config *cfg, int v) { cfg->gcp.token_ttl = v; }

/* gcp.enable_config */
int mgos_config_get_gcp_enable_config(const struct mgos_config *cfg) { return cfg->gcp.enable_config; }
int mgos_config_get_default_gcp_enable_config(void) { return false; }
void mgos_config_set_gcp_enable_config(struct mgos_config *cfg, int v) { cfg->gcp.enable_config = v; }

/* gcp.enable_commands */
int mgos_config_get_gcp_enable_commands(const struct mgos_config *cfg) { return cfg->gcp.enable_commands; }
int mgos_config_get_default_gcp_enable_commands(void) { return true; }
void mgos_config_set_gcp_enable_commands(struct mgos_config *cfg, int v) { cfg->gcp.enable_commands = v; }

/* http */
const struct mgos_config_http *mgos_config_get_http(const struct mgos_config *cfg) { return &cfg->http; }

/* http.enable */
int mgos_config_get_http_enable(const struct mgos_config *cfg) { return cfg->http.enable; }
int mgos_config_get_default_http_enable(void) { return true; }
void mgos_config_set_http_enable(struct mgos_config *cfg, int v) { cfg->http.enable = v; }

/* http.listen_addr */
const char * mgos_config_get_http_listen_addr(const struct mgos_config *cfg) { return cfg->http.listen_addr; }
const char * mgos_config_get_default_http_listen_addr(void) { return "80"; }
void mgos_config_set_http_listen_addr(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.listen_addr, v); }

/* http.document_root */
const char * mgos_config_get_http_document_root(const struct mgos_config *cfg) { return cfg->http.document_root; }
const char * mgos_config_get_default_http_document_root(void) { return "/"; }
void mgos_config_set_http_document_root(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.document_root, v); }

/* http.index_files */
const char * mgos_config_get_http_index_files(const struct mgos_config *cfg) { return cfg->http.index_files; }
const char * mgos_config_get_default_http_index_files(void) { return NULL; }
void mgos_config_set_http_index_files(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.index_files, v); }

/* http.ssl_cert */
const char * mgos_config_get_http_ssl_cert(const struct mgos_config *cfg) { return cfg->http.ssl_cert; }
const char * mgos_config_get_default_http_ssl_cert(void) { return NULL; }
void mgos_config_set_http_ssl_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.ssl_cert, v); }

/* http.ssl_key */
const char * mgos_config_get_http_ssl_key(const struct mgos_config *cfg) { return cfg->http.ssl_key; }
const char * mgos_config_get_default_http_ssl_key(void) { return NULL; }
void mgos_config_set_http_ssl_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.ssl_key, v); }

/* http.ssl_ca_cert */
const char * mgos_config_get_http_ssl_ca_cert(const struct mgos_config *cfg) { return cfg->http.ssl_ca_cert; }
const char * mgos_config_get_default_http_ssl_ca_cert(void) { return NULL; }
void mgos_config_set_http_ssl_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.ssl_ca_cert, v); }

/* http.upload_acl */
const char * mgos_config_get_http_upload_acl(const struct mgos_config *cfg) { return cfg->http.upload_acl; }
const char * mgos_config_get_default_http_upload_acl(void) { return "*"; }
void mgos_config_set_http_upload_acl(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.upload_acl, v); }

/* http.hidden_files */
const char * mgos_config_get_http_hidden_files(const struct mgos_config *cfg) { return cfg->http.hidden_files; }
const char * mgos_config_get_default_http_hidden_files(void) { return NULL; }
void mgos_config_set_http_hidden_files(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.hidden_files, v); }

/* http.auth_domain */
const char * mgos_config_get_http_auth_domain(const struct mgos_config *cfg) { return cfg->http.auth_domain; }
const char * mgos_config_get_default_http_auth_domain(void) { return NULL; }
void mgos_config_set_http_auth_domain(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.auth_domain, v); }

/* http.auth_file */
const char * mgos_config_get_http_auth_file(const struct mgos_config *cfg) { return cfg->http.auth_file; }
const char * mgos_config_get_default_http_auth_file(void) { return NULL; }
void mgos_config_set_http_auth_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.auth_file, v); }

/* http.auth_algo */
int mgos_config_get_http_auth_algo(const struct mgos_config *cfg) { return cfg->http.auth_algo; }
int mgos_config_get_default_http_auth_algo(void) { return 0; }
void mgos_config_set_http_auth_algo(struct mgos_config *cfg, int v) { cfg->http.auth_algo = v; }

/* http.extra_headers */
const char * mgos_config_get_http_extra_headers(const struct mgos_config *cfg) { return cfg->http.extra_headers; }
const char * mgos_config_get_default_http_extra_headers(void) { return NULL; }
void mgos_config_set_http_extra_headers(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->http.extra_headers, v); }

/* provision */
const struct mgos_config_provision *mgos_config_get_provision(const struct mgos_config *cfg) { return &cfg->provision; }

/* provision.btn */
const struct mgos_config_provision_btn *mgos_config_get_provision_btn(const struct mgos_config *cfg) { return &cfg->provision.btn; }

/* provision.btn.pin */
int mgos_config_get_provision_btn_pin(const struct mgos_config *cfg) { return cfg->provision.btn.pin; }
int mgos_config_get_default_provision_btn_pin(void) { return 0; }
void mgos_config_set_provision_btn_pin(struct mgos_config *cfg, int v) { cfg->provision.btn.pin = v; }

/* provision.btn.pull_up */
int mgos_config_get_provision_btn_pull_up(const struct mgos_config *cfg) { return cfg->provision.btn.pull_up; }
int mgos_config_get_default_provision_btn_pull_up(void) { return true; }
void mgos_config_set_provision_btn_pull_up(struct mgos_config *cfg, int v) { cfg->provision.btn.pull_up = v; }

/* provision.btn.hold_ms */
int mgos_config_get_provision_btn_hold_ms(const struct mgos_config *cfg) { return cfg->provision.btn.hold_ms; }
int mgos_config_get_default_provision_btn_hold_ms(void) { return 0; }
void mgos_config_set_provision_btn_hold_ms(struct mgos_config *cfg, int v) { cfg->provision.btn.hold_ms = v; }

/* provision.btn.inhibit_after_s */
int mgos_config_get_provision_btn_inhibit_after_s(const struct mgos_config *cfg) { return cfg->provision.btn.inhibit_after_s; }
int mgos_config_get_default_provision_btn_inhibit_after_s(void) { return 0; }
void mgos_config_set_provision_btn_inhibit_after_s(struct mgos_config *cfg, int v) { cfg->provision.btn.inhibit_after_s = v; }

/* provision.led */
const struct mgos_config_provision_led *mgos_config_get_provision_led(const struct mgos_config *cfg) { return &cfg->provision.led; }

/* provision.led.pin */
int mgos_config_get_provision_led_pin(const struct mgos_config *cfg) { return cfg->provision.led.pin; }
int mgos_config_get_default_provision_led_pin(void) { return -1; }
void mgos_config_set_provision_led_pin(struct mgos_config *cfg, int v) { cfg->provision.led.pin = v; }

/* provision.led.active_high */
int mgos_config_get_provision_led_active_high(const struct mgos_config *cfg) { return cfg->provision.led.active_high; }
int mgos_config_get_default_provision_led_active_high(void) { return true; }
void mgos_config_set_provision_led_active_high(struct mgos_config *cfg, int v) { cfg->provision.led.active_high = v; }

/* provision.stable_state */
int mgos_config_get_provision_stable_state(const struct mgos_config *cfg) { return cfg->provision.stable_state; }
int mgos_config_get_default_provision_stable_state(void) { return 3; }
void mgos_config_set_provision_stable_state(struct mgos_config *cfg, int v) { cfg->provision.stable_state = v; }

/* provision.timeout */
int mgos_config_get_provision_timeout(const struct mgos_config *cfg) { return cfg->provision.timeout; }
int mgos_config_get_default_provision_timeout(void) { return 300; }
void mgos_config_set_provision_timeout(struct mgos_config *cfg, int v) { cfg->provision.timeout = v; }

/* provision.max_state */
int mgos_config_get_provision_max_state(const struct mgos_config *cfg) { return cfg->provision.max_state; }
int mgos_config_get_default_provision_max_state(void) { return 0; }
void mgos_config_set_provision_max_state(struct mgos_config *cfg, int v) { cfg->provision.max_state = v; }

/* wifi */
const struct mgos_config_wifi *mgos_config_get_wifi(const struct mgos_config *cfg) { return &cfg->wifi; }

/* wifi.ap */
const struct mgos_config_wifi_ap *mgos_config_get_wifi_ap(const struct mgos_config *cfg) { return &cfg->wifi.ap; }

/* wifi.ap.enable */
int mgos_config_get_wifi_ap_enable(const struct mgos_config *cfg) { return cfg->wifi.ap.enable; }
int mgos_config_get_default_wifi_ap_enable(void) { return true; }
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int v) { cfg->wifi.ap.enable = v; }

/* wifi.ap.ssid */
const char * mgos_config_get_wifi_ap_ssid(const struct mgos_config *cfg) { return cfg->wifi.ap.ssid; }
const char * mgos_config_get_default_wifi_ap_ssid(void) { return "Mongoose_??????"; }
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.ssid, v); }

/* wifi.ap.pass */
const char * mgos_config_get_wifi_ap_pass(const struct mgos_config *cfg) { return cfg->wifi.ap.pass; }
const char * mgos_config_get_default_wifi_ap_pass(void) { return "Mongoose"; }
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.pass, v); }

/* wifi.ap.hidden */
int mgos_config_get_wifi_ap_hidden(const struct mgos_config *cfg) { return cfg->wifi.ap.hidden; }
int mgos_config_get_default_wifi_ap_hidden(void) { return false; }
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int v) { cfg->wifi.ap.hidden = v; }

/* wifi.ap.channel */
int mgos_config_get_wifi_ap_channel(const struct mgos_config *cfg) { return cfg->wifi.ap.channel; }
int mgos_config_get_default_wifi_ap_channel(void) { return 6; }
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int v) { cfg->wifi.ap.channel = v; }

/* wifi.ap.max_connections */
int mgos_config_get_wifi_ap_max_connections(const struct mgos_config *cfg) { return cfg->wifi.ap.max_connections; }
int mgos_config_get_default_wifi_ap_max_connections(void) { return 10; }
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int v) { cfg->wifi.ap.max_connections = v; }

/* wifi.ap.ip */
const char * mgos_config_get_wifi_ap_ip(const struct mgos_config *cfg) { return cfg->wifi.ap.ip; }
const char * mgos_config_get_default_wifi_ap_ip(void) { return "192.168.4.1"; }
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.ip, v); }

/* wifi.ap.netmask */
const char * mgos_config_get_wifi_ap_netmask(const struct mgos_config *cfg) { return cfg->wifi.ap.netmask; }
const char * mgos_config_get_default_wifi_ap_netmask(void) { return "255.255.255.0"; }
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.netmask, v); }

/* wifi.ap.gw */
const char * mgos_config_get_wifi_ap_gw(const struct mgos_config *cfg) { return cfg->wifi.ap.gw; }
const char * mgos_config_get_default_wifi_ap_gw(void) { return "192.168.4.1"; }
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.gw, v); }

/* wifi.ap.dhcp_start */
const char * mgos_config_get_wifi_ap_dhcp_start(const struct mgos_config *cfg) { return cfg->wifi.ap.dhcp_start; }
const char * mgos_config_get_default_wifi_ap_dhcp_start(void) { return "192.168.4.2"; }
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.dhcp_start, v); }

/* wifi.ap.dhcp_end */
const char * mgos_config_get_wifi_ap_dhcp_end(const struct mgos_config *cfg) { return cfg->wifi.ap.dhcp_end; }
const char * mgos_config_get_default_wifi_ap_dhcp_end(void) { return "192.168.4.100"; }
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.dhcp_end, v); }

/* wifi.ap.trigger_on_gpio */
int mgos_config_get_wifi_ap_trigger_on_gpio(const struct mgos_config *cfg) { return cfg->wifi.ap.trigger_on_gpio; }
int mgos_config_get_default_wifi_ap_trigger_on_gpio(void) { return -1; }
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int v) { cfg->wifi.ap.trigger_on_gpio = v; }

/* wifi.ap.disable_after */
int mgos_config_get_wifi_ap_disable_after(const struct mgos_config *cfg) { return cfg->wifi.ap.disable_after; }
int mgos_config_get_default_wifi_ap_disable_after(void) { return 0; }
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int v) { cfg->wifi.ap.disable_after = v; }

/* wifi.ap.hostname */
const char * mgos_config_get_wifi_ap_hostname(const struct mgos_config *cfg) { return cfg->wifi.ap.hostname; }
const char * mgos_config_get_default_wifi_ap_hostname(void) { return NULL; }
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.hostname, v); }

/* wifi.ap.bandwidth_20mhz */
int mgos_config_get_wifi_ap_bandwidth_20mhz(const struct mgos_config *cfg) { return cfg->wifi.ap.bandwidth_20mhz; }
int mgos_config_get_default_wifi_ap_bandwidth_20mhz(void) { return false; }
void mgos_config_set_wifi_ap_bandwidth_20mhz(struct mgos_config *cfg, int v) { cfg->wifi.ap.bandwidth_20mhz = v; }

/* wifi.ap.protocol */
const char * mgos_config_get_wifi_ap_protocol(const struct mgos_config *cfg) { return cfg->wifi.ap.protocol; }
const char * mgos_config_get_default_wifi_ap_protocol(void) { return "BGN"; }
void mgos_config_set_wifi_ap_protocol(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.protocol, v); }

/* wifi.sta */
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta(const struct mgos_config *cfg) { return &cfg->wifi.sta; }

/* wifi.sta.enable */
int mgos_config_get_wifi_sta_enable(const struct mgos_config *cfg) { return cfg->wifi.sta.enable; }
int mgos_config_get_default_wifi_sta_enable(void) { return false; }
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int v) { cfg->wifi.sta.enable = v; }

/* wifi.sta.ssid */
const char * mgos_config_get_wifi_sta_ssid(const struct mgos_config *cfg) { return cfg->wifi.sta.ssid; }
const char * mgos_config_get_default_wifi_sta_ssid(void) { return NULL; }
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.ssid, v); }

/* wifi.sta.pass */
const char * mgos_config_get_wifi_sta_pass(const struct mgos_config *cfg) { return cfg->wifi.sta.pass; }
const char * mgos_config_get_default_wifi_sta_pass(void) { return NULL; }
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.pass, v); }

/* wifi.sta.bssid */
const char * mgos_config_get_wifi_sta_bssid(const struct mgos_config *cfg) { return cfg->wifi.sta.bssid; }
const char * mgos_config_get_default_wifi_sta_bssid(void) { return NULL; }
void mgos_config_set_wifi_sta_bssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.bssid, v); }

/* wifi.sta.channel */
int mgos_config_get_wifi_sta_channel(const struct mgos_config *cfg) { return cfg->wifi.sta.channel; }
int mgos_config_get_default_wifi_sta_channel(void) { return 0; }
void mgos_config_set_wifi_sta_channel(struct mgos_config *cfg, int v) { cfg->wifi.sta.channel = v; }

/* wifi.sta.last_bssid */
const char * mgos_config_get_wifi_sta_last_bssid(const struct mgos_config *cfg) { return cfg->wifi.sta.last_bssid; }
const char * mgos_config_get_default_wifi_sta_last_bssid(void) { return NULL; }
void mgos_config_set_wifi_sta_last_bssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.last_bssid, v); }

/* wifi.sta.last_channel */
int mgos_config_get_wifi_sta_last_channel(const struct mgos_config *cfg) { return cfg->wifi.sta.last_channel; }
int mgos_config_get_default_wifi_sta_last_channel(void) { return 0; }
void mgos_config_set_wifi_sta_last_channel(struct mgos_config *cfg, int v) { cfg->wifi.sta.last_channel = v; }

/* wifi.sta.user */
const char * mgos_config_get_wifi_sta_user(const struct mgos_config *cfg) { return cfg->wifi.sta.user; }
const char * mgos_config_get_default_wifi_sta_user(void) { return NULL; }
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.user, v); }

/* wifi.sta.anon_identity */
const char * mgos_config_get_wifi_sta_anon_identity(const struct mgos_config *cfg) { return cfg->wifi.sta.anon_identity; }
const char * mgos_config_get_default_wifi_sta_anon_identity(void) { return NULL; }
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.anon_identity, v); }

/* wifi.sta.cert */
const char * mgos_config_get_wifi_sta_cert(const struct mgos_config *cfg) { return cfg->wifi.sta.cert; }
const char * mgos_config_get_default_wifi_sta_cert(void) { return NULL; }
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.cert, v); }

/* wifi.sta.key */
const char * mgos_config_get_wifi_sta_key(const struct mgos_config *cfg) { return cfg->wifi.sta.key; }
const char * mgos_config_get_default_wifi_sta_key(void) { return NULL; }
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.key, v); }

/* wifi.sta.ca_cert */
const char * mgos_config_get_wifi_sta_ca_cert(const struct mgos_config *cfg) { return cfg->wifi.sta.ca_cert; }
const char * mgos_config_get_default_wifi_sta_ca_cert(void) { return NULL; }
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.ca_cert, v); }

/* wifi.sta.ip */
const char * mgos_config_get_wifi_sta_ip(const struct mgos_config *cfg) { return cfg->wifi.sta.ip; }
const char * mgos_config_get_default_wifi_sta_ip(void) { return NULL; }
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.ip, v); }

/* wifi.sta.netmask */
const char * mgos_config_get_wifi_sta_netmask(const struct mgos_config *cfg) { return cfg->wifi.sta.netmask; }
const char * mgos_config_get_default_wifi_sta_netmask(void) { return NULL; }
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.netmask, v); }

/* wifi.sta.gw */
const char * mgos_config_get_wifi_sta_gw(const struct mgos_config *cfg) { return cfg->wifi.sta.gw; }
const char * mgos_config_get_default_wifi_sta_gw(void) { return NULL; }
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.gw, v); }

/* wifi.sta.nameserver */
const char * mgos_config_get_wifi_sta_nameserver(const struct mgos_config *cfg) { return cfg->wifi.sta.nameserver; }
const char * mgos_config_get_default_wifi_sta_nameserver(void) { return NULL; }
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.nameserver, v); }

/* wifi.sta.dhcp_hostname */
const char * mgos_config_get_wifi_sta_dhcp_hostname(const struct mgos_config *cfg) { return cfg->wifi.sta.dhcp_hostname; }
const char * mgos_config_get_default_wifi_sta_dhcp_hostname(void) { return NULL; }
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.dhcp_hostname, v); }

/* wifi.sta.protocol */
const char * mgos_config_get_wifi_sta_protocol(const struct mgos_config *cfg) { return cfg->wifi.sta.protocol; }
const char * mgos_config_get_default_wifi_sta_protocol(void) { return "BGN"; }
void mgos_config_set_wifi_sta_protocol(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.protocol, v); }

/* wifi.sta.listen_interval_ms */
int mgos_config_get_wifi_sta_listen_interval_ms(const struct mgos_config *cfg) { return cfg->wifi.sta.listen_interval_ms; }
int mgos_config_get_default_wifi_sta_listen_interval_ms(void) { return 0; }
void mgos_config_set_wifi_sta_listen_interval_ms(struct mgos_config *cfg, int v) { cfg->wifi.sta.listen_interval_ms = v; }

/* wifi.sta1 */
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta1(const struct mgos_config *cfg) { return &cfg->wifi.sta1; }

/* wifi.sta1.enable */
int mgos_config_get_wifi_sta1_enable(const struct mgos_config *cfg) { return cfg->wifi.sta1.enable; }
int mgos_config_get_default_wifi_sta1_enable(void) { return false; }
void mgos_config_set_wifi_sta1_enable(struct mgos_config *cfg, int v) { cfg->wifi.sta1.enable = v; }

/* wifi.sta1.ssid */
const char * mgos_config_get_wifi_sta1_ssid(const struct mgos_config *cfg) { return cfg->wifi.sta1.ssid; }
const char * mgos_config_get_default_wifi_sta1_ssid(void) { return NULL; }
void mgos_config_set_wifi_sta1_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.ssid, v); }

/* wifi.sta1.pass */
const char * mgos_config_get_wifi_sta1_pass(const struct mgos_config *cfg) { return cfg->wifi.sta1.pass; }
const char * mgos_config_get_default_wifi_sta1_pass(void) { return NULL; }
void mgos_config_set_wifi_sta1_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.pass, v); }

/* wifi.sta1.bssid */
const char * mgos_config_get_wifi_sta1_bssid(const struct mgos_config *cfg) { return cfg->wifi.sta1.bssid; }
const char * mgos_config_get_default_wifi_sta1_bssid(void) { return NULL; }
void mgos_config_set_wifi_sta1_bssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.bssid, v); }

/* wifi.sta1.channel */
int mgos_config_get_wifi_sta1_channel(const struct mgos_config *cfg) { return cfg->wifi.sta1.channel; }
int mgos_config_get_default_wifi_sta1_channel(void) { return 0; }
void mgos_config_set_wifi_sta1_channel(struct mgos_config *cfg, int v) { cfg->wifi.sta1.channel = v; }

/* wifi.sta1.last_bssid */
const char * mgos_config_get_wifi_sta1_last_bssid(const struct mgos_config *cfg) { return cfg->wifi.sta1.last_bssid; }
const char * mgos_config_get_default_wifi_sta1_last_bssid(void) { return NULL; }
void mgos_config_set_wifi_sta1_last_bssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.last_bssid, v); }

/* wifi.sta1.last_channel */
int mgos_config_get_wifi_sta1_last_channel(const struct mgos_config *cfg) { return cfg->wifi.sta1.last_channel; }
int mgos_config_get_default_wifi_sta1_last_channel(void) { return 0; }
void mgos_config_set_wifi_sta1_last_channel(struct mgos_config *cfg, int v) { cfg->wifi.sta1.last_channel = v; }

/* wifi.sta1.user */
const char * mgos_config_get_wifi_sta1_user(const struct mgos_config *cfg) { return cfg->wifi.sta1.user; }
const char * mgos_config_get_default_wifi_sta1_user(void) { return NULL; }
void mgos_config_set_wifi_sta1_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.user, v); }

/* wifi.sta1.anon_identity */
const char * mgos_config_get_wifi_sta1_anon_identity(const struct mgos_config *cfg) { return cfg->wifi.sta1.anon_identity; }
const char * mgos_config_get_default_wifi_sta1_anon_identity(void) { return NULL; }
void mgos_config_set_wifi_sta1_anon_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.anon_identity, v); }

/* wifi.sta1.cert */
const char * mgos_config_get_wifi_sta1_cert(const struct mgos_config *cfg) { return cfg->wifi.sta1.cert; }
const char * mgos_config_get_default_wifi_sta1_cert(void) { return NULL; }
void mgos_config_set_wifi_sta1_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.cert, v); }

/* wifi.sta1.key */
const char * mgos_config_get_wifi_sta1_key(const struct mgos_config *cfg) { return cfg->wifi.sta1.key; }
const char * mgos_config_get_default_wifi_sta1_key(void) { return NULL; }
void mgos_config_set_wifi_sta1_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.key, v); }

/* wifi.sta1.ca_cert */
const char * mgos_config_get_wifi_sta1_ca_cert(const struct mgos_config *cfg) { return cfg->wifi.sta1.ca_cert; }
const char * mgos_config_get_default_wifi_sta1_ca_cert(void) { return NULL; }
void mgos_config_set_wifi_sta1_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.ca_cert, v); }

/* wifi.sta1.ip */
const char * mgos_config_get_wifi_sta1_ip(const struct mgos_config *cfg) { return cfg->wifi.sta1.ip; }
const char * mgos_config_get_default_wifi_sta1_ip(void) { return NULL; }
void mgos_config_set_wifi_sta1_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.ip, v); }

/* wifi.sta1.netmask */
const char * mgos_config_get_wifi_sta1_netmask(const struct mgos_config *cfg) { return cfg->wifi.sta1.netmask; }
const char * mgos_config_get_default_wifi_sta1_netmask(void) { return NULL; }
void mgos_config_set_wifi_sta1_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.netmask, v); }

/* wifi.sta1.gw */
const char * mgos_config_get_wifi_sta1_gw(const struct mgos_config *cfg) { return cfg->wifi.sta1.gw; }
const char * mgos_config_get_default_wifi_sta1_gw(void) { return NULL; }
void mgos_config_set_wifi_sta1_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.gw, v); }

/* wifi.sta1.nameserver */
const char * mgos_config_get_wifi_sta1_nameserver(const struct mgos_config *cfg) { return cfg->wifi.sta1.nameserver; }
const char * mgos_config_get_default_wifi_sta1_nameserver(void) { return NULL; }
void mgos_config_set_wifi_sta1_nameserver(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.nameserver, v); }

/* wifi.sta1.dhcp_hostname */
const char * mgos_config_get_wifi_sta1_dhcp_hostname(const struct mgos_config *cfg) { return cfg->wifi.sta1.dhcp_hostname; }
const char * mgos_config_get_default_wifi_sta1_dhcp_hostname(void) { return NULL; }
void mgos_config_set_wifi_sta1_dhcp_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.dhcp_hostname, v); }

/* wifi.sta1.protocol */
const char * mgos_config_get_wifi_sta1_protocol(const struct mgos_config *cfg) { return cfg->wifi.sta1.protocol; }
const char * mgos_config_get_default_wifi_sta1_protocol(void) { return "BGN"; }
void mgos_config_set_wifi_sta1_protocol(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.protocol, v); }

/* wifi.sta1.listen_interval_ms */
int mgos_config_get_wifi_sta1_listen_interval_ms(const struct mgos_config *cfg) { return cfg->wifi.sta1.listen_interval_ms; }
int mgos_config_get_default_wifi_sta1_listen_interval_ms(void) { return 0; }
void mgos_config_set_wifi_sta1_listen_interval_ms(struct mgos_config *cfg, int v) { cfg->wifi.sta1.listen_interval_ms = v; }

/* wifi.sta2 */
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta2(const struct mgos_config *cfg) { return &cfg->wifi.sta2; }

/* wifi.sta2.enable */
int mgos_config_get_wifi_sta2_enable(const struct mgos_config *cfg) { return cfg->wifi.sta2.enable; }
int mgos_config_get_default_wifi_sta2_enable(void) { return false; }
void mgos_config_set_wifi_sta2_enable(struct mgos_config *cfg, int v) { cfg->wifi.sta2.enable = v; }

/* wifi.sta2.ssid */
const char * mgos_config_get_wifi_sta2_ssid(const struct mgos_config *cfg) { return cfg->wifi.sta2.ssid; }
const char * mgos_config_get_default_wifi_sta2_ssid(void) { return NULL; }
void mgos_config_set_wifi_sta2_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.ssid, v); }

/* wifi.sta2.pass */
const char * mgos_config_get_wifi_sta2_pass(const struct mgos_config *cfg) { return cfg->wifi.sta2.pass; }
const char * mgos_config_get_default_wifi_sta2_pass(void) { return NULL; }
void mgos_config_set_wifi_sta2_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.pass, v); }

/* wifi.sta2.bssid */
const char * mgos_config_get_wifi_sta2_bssid(const struct mgos_config *cfg) { return cfg->wifi.sta2.bssid; }
const char * mgos_config_get_default_wifi_sta2_bssid(void) { return NULL; }
void mgos_config_set_wifi_sta2_bssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.bssid, v); }

/* wifi.sta2.channel */
int mgos_config_get_wifi_sta2_channel(const struct mgos_config *cfg) { return cfg->wifi.sta2.channel; }
int mgos_config_get_default_wifi_sta2_channel(void) { return 0; }
void mgos_config_set_wifi_sta2_channel(struct mgos_config *cfg, int v) { cfg->wifi.sta2.channel = v; }

/* wifi.sta2.last_bssid */
const char * mgos_config_get_wifi_sta2_last_bssid(const struct mgos_config *cfg) { return cfg->wifi.sta2.last_bssid; }
const char * mgos_config_get_default_wifi_sta2_last_bssid(void) { return NULL; }
void mgos_config_set_wifi_sta2_last_bssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.last_bssid, v); }

/* wifi.sta2.last_channel */
int mgos_config_get_wifi_sta2_last_channel(const struct mgos_config *cfg) { return cfg->wifi.sta2.last_channel; }
int mgos_config_get_default_wifi_sta2_last_channel(void) { return 0; }
void mgos_config_set_wifi_sta2_last_channel(struct mgos_config *cfg, int v) { cfg->wifi.sta2.last_channel = v; }

/* wifi.sta2.user */
const char * mgos_config_get_wifi_sta2_user(const struct mgos_config *cfg) { return cfg->wifi.sta2.user; }
const char * mgos_config_get_default_wifi_sta2_user(void) { return NULL; }
void mgos_config_set_wifi_sta2_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.user, v); }

/* wifi.sta2.anon_identity */
const char * mgos_config_get_wifi_sta2_anon_identity(const struct mgos_config *cfg) { return cfg->wifi.sta2.anon_identity; }
const char * mgos_config_get_default_wifi_sta2_anon_identity(void) { return NULL; }
void mgos_config_set_wifi_sta2_anon_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.anon_identity, v); }

/* wifi.sta2.cert */
const char * mgos_config_get_wifi_sta2_cert(const struct mgos_config *cfg) { return cfg->wifi.sta2.cert; }
const char * mgos_config_get_default_wifi_sta2_cert(void) { return NULL; }
void mgos_config_set_wifi_sta2_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.cert, v); }

/* wifi.sta2.key */
const char * mgos_config_get_wifi_sta2_key(const struct mgos_config *cfg) { return cfg->wifi.sta2.key; }
const char * mgos_config_get_default_wifi_sta2_key(void) { return NULL; }
void mgos_config_set_wifi_sta2_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.key, v); }

/* wifi.sta2.ca_cert */
const char * mgos_config_get_wifi_sta2_ca_cert(const struct mgos_config *cfg) { return cfg->wifi.sta2.ca_cert; }
const char * mgos_config_get_default_wifi_sta2_ca_cert(void) { return NULL; }
void mgos_config_set_wifi_sta2_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.ca_cert, v); }

/* wifi.sta2.ip */
const char * mgos_config_get_wifi_sta2_ip(const struct mgos_config *cfg) { return cfg->wifi.sta2.ip; }
const char * mgos_config_get_default_wifi_sta2_ip(void) { return NULL; }
void mgos_config_set_wifi_sta2_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.ip, v); }

/* wifi.sta2.netmask */
const char * mgos_config_get_wifi_sta2_netmask(const struct mgos_config *cfg) { return cfg->wifi.sta2.netmask; }
const char * mgos_config_get_default_wifi_sta2_netmask(void) { return NULL; }
void mgos_config_set_wifi_sta2_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.netmask, v); }

/* wifi.sta2.gw */
const char * mgos_config_get_wifi_sta2_gw(const struct mgos_config *cfg) { return cfg->wifi.sta2.gw; }
const char * mgos_config_get_default_wifi_sta2_gw(void) { return NULL; }
void mgos_config_set_wifi_sta2_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.gw, v); }

/* wifi.sta2.nameserver */
const char * mgos_config_get_wifi_sta2_nameserver(const struct mgos_config *cfg) { return cfg->wifi.sta2.nameserver; }
const char * mgos_config_get_default_wifi_sta2_nameserver(void) { return NULL; }
void mgos_config_set_wifi_sta2_nameserver(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.nameserver, v); }

/* wifi.sta2.dhcp_hostname */
const char * mgos_config_get_wifi_sta2_dhcp_hostname(const struct mgos_config *cfg) { return cfg->wifi.sta2.dhcp_hostname; }
const char * mgos_config_get_default_wifi_sta2_dhcp_hostname(void) { return NULL; }
void mgos_config_set_wifi_sta2_dhcp_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.dhcp_hostname, v); }

/* wifi.sta2.protocol */
const char * mgos_config_get_wifi_sta2_protocol(const struct mgos_config *cfg) { return cfg->wifi.sta2.protocol; }
const char * mgos_config_get_default_wifi_sta2_protocol(void) { return "BGN"; }
void mgos_config_set_wifi_sta2_protocol(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.protocol, v); }

/* wifi.sta2.listen_interval_ms */
int mgos_config_get_wifi_sta2_listen_interval_ms(const struct mgos_config *cfg) { return cfg->wifi.sta2.listen_interval_ms; }
int mgos_config_get_default_wifi_sta2_listen_interval_ms(void) { return 0; }
void mgos_config_set_wifi_sta2_listen_interval_ms(struct mgos_config *cfg, int v) { cfg->wifi.sta2.listen_interval_ms = v; }

/* wifi.sta_rssi_thr */
int mgos_config_get_wifi_sta_rssi_thr(const struct mgos_config *cfg) { return cfg->wifi.sta_rssi_thr; }
int mgos_config_get_default_wifi_sta_rssi_thr(void) { return -95; }
void mgos_config_set_wifi_sta_rssi_thr(struct mgos_config *cfg, int v) { cfg->wifi.sta_rssi_thr = v; }

/* wifi.sta_connect_timeout */
int mgos_config_get_wifi_sta_connect_timeout(const struct mgos_config *cfg) { return cfg->wifi.sta_connect_timeout; }
int mgos_config_get_default_wifi_sta_connect_timeout(void) { return 15; }
void mgos_config_set_wifi_sta_connect_timeout(struct mgos_config *cfg, int v) { cfg->wifi.sta_connect_timeout = v; }

/* wifi.sta_roam_rssi_thr */
int mgos_config_get_wifi_sta_roam_rssi_thr(const struct mgos_config *cfg) { return cfg->wifi.sta_roam_rssi_thr; }
int mgos_config_get_default_wifi_sta_roam_rssi_thr(void) { return -80; }
void mgos_config_set_wifi_sta_roam_rssi_thr(struct mgos_config *cfg, int v) { cfg->wifi.sta_roam_rssi_thr = v; }

/* wifi.sta_roam_interval */
int mgos_config_get_wifi_sta_roam_interval(const struct mgos_config *cfg) { return cfg->wifi.sta_roam_interval; }
int mgos_config_get_default_wifi_sta_roam_interval(void) { return 0; }
void mgos_config_set_wifi_sta_roam_interval(struct mgos_config *cfg, int v) { cfg->wifi.sta_roam_interval = v; }

/* wifi.sta_ps_mode */
int mgos_config_get_wifi_sta_ps_mode(const struct mgos_config *cfg) { return cfg->wifi.sta_ps_mode; }
int mgos_config_get_default_wifi_sta_ps_mode(void) { return 0; }
void mgos_config_set_wifi_sta_ps_mode(struct mgos_config *cfg, int v) { cfg->wifi.sta_ps_mode = v; }

/* spi */
const struct mgos_config_spi *mgos_config_get_spi(const struct mgos_config *cfg) { return &cfg->spi; }

/* spi.enable */
int mgos_config_get_spi_enable(const struct mgos_config *cfg) { return cfg->spi.enable; }
int mgos_config_get_default_spi_enable(void) { return false; }
void mgos_config_set_spi_enable(struct mgos_config *cfg, int v) { cfg->spi.enable = v; }

/* spi.debug */
int mgos_config_get_spi_debug(const struct mgos_config *cfg) { return cfg->spi.debug; }
int mgos_config_get_default_spi_debug(void) { return false; }
void mgos_config_set_spi_debug(struct mgos_config *cfg, int v) { cfg->spi.debug = v; }

/* spi.unit_no */
int mgos_config_get_spi_unit_no(const struct mgos_config *cfg) { return cfg->spi.unit_no; }
int mgos_config_get_default_spi_unit_no(void) { return 3; }
void mgos_config_set_spi_unit_no(struct mgos_config *cfg, int v) { cfg->spi.unit_no = v; }

/* spi.miso_gpio */
int mgos_config_get_spi_miso_gpio(const struct mgos_config *cfg) { return cfg->spi.miso_gpio; }
int mgos_config_get_default_spi_miso_gpio(void) { return 19; }
void mgos_config_set_spi_miso_gpio(struct mgos_config *cfg, int v) { cfg->spi.miso_gpio = v; }

/* spi.mosi_gpio */
int mgos_config_get_spi_mosi_gpio(const struct mgos_config *cfg) { return cfg->spi.mosi_gpio; }
int mgos_config_get_default_spi_mosi_gpio(void) { return 23; }
void mgos_config_set_spi_mosi_gpio(struct mgos_config *cfg, int v) { cfg->spi.mosi_gpio = v; }

/* spi.sclk_gpio */
int mgos_config_get_spi_sclk_gpio(const struct mgos_config *cfg) { return cfg->spi.sclk_gpio; }
int mgos_config_get_default_spi_sclk_gpio(void) { return 18; }
void mgos_config_set_spi_sclk_gpio(struct mgos_config *cfg, int v) { cfg->spi.sclk_gpio = v; }

/* spi.cs0_gpio */
int mgos_config_get_spi_cs0_gpio(const struct mgos_config *cfg) { return cfg->spi.cs0_gpio; }
int mgos_config_get_default_spi_cs0_gpio(void) { return 5; }
void mgos_config_set_spi_cs0_gpio(struct mgos_config *cfg, int v) { cfg->spi.cs0_gpio = v; }

/* spi.cs1_gpio */
int mgos_config_get_spi_cs1_gpio(const struct mgos_config *cfg) { return cfg->spi.cs1_gpio; }
int mgos_config_get_default_spi_cs1_gpio(void) { return -1; }
void mgos_config_set_spi_cs1_gpio(struct mgos_config *cfg, int v) { cfg->spi.cs1_gpio = v; }

/* spi.cs2_gpio */
int mgos_config_get_spi_cs2_gpio(const struct mgos_config *cfg) { return cfg->spi.cs2_gpio; }
int mgos_config_get_default_spi_cs2_gpio(void) { return -1; }
void mgos_config_set_spi_cs2_gpio(struct mgos_config *cfg, int v) { cfg->spi.cs2_gpio = v; }

/* watson */
const struct mgos_config_watson *mgos_config_get_watson(const struct mgos_config *cfg) { return &cfg->watson; }

/* watson.enable */
int mgos_config_get_watson_enable(const struct mgos_config *cfg) { return cfg->watson.enable; }
int mgos_config_get_default_watson_enable(void) { return false; }
void mgos_config_set_watson_enable(struct mgos_config *cfg, int v) { cfg->watson.enable = v; }

/* watson.host_name */
const char * mgos_config_get_watson_host_name(const struct mgos_config *cfg) { return cfg->watson.host_name; }
const char * mgos_config_get_default_watson_host_name(void) { return NULL; }
void mgos_config_set_watson_host_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->watson.host_name, v); }

/* watson.client_id */
const char * mgos_config_get_watson_client_id(const struct mgos_config *cfg) { return cfg->watson.client_id; }
const char * mgos_config_get_default_watson_client_id(void) { return NULL; }
void mgos_config_set_watson_client_id(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->watson.client_id, v); }

/* watson.token */
const char * mgos_config_get_watson_token(const struct mgos_config *cfg) { return cfg->watson.token; }
const char * mgos_config_get_default_watson_token(void) { return NULL; }
void mgos_config_set_watson_token(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->watson.token, v); }

/* watson.cert */
const char * mgos_config_get_watson_cert(const struct mgos_config *cfg) { return cfg->watson.cert; }
const char * mgos_config_get_default_watson_cert(void) { return NULL; }
void mgos_config_set_watson_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->watson.cert, v); }

/* watson.key */
const char * mgos_config_get_watson_key(const struct mgos_config *cfg) { return cfg->watson.key; }
const char * mgos_config_get_default_watson_key(void) { return NULL; }
void mgos_config_set_watson_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->watson.key, v); }

/* watson.ca_cert */
const char * mgos_config_get_watson_ca_cert(const struct mgos_config *cfg) { return cfg->watson.ca_cert; }
const char * mgos_config_get_default_watson_ca_cert(void) { return NULL; }
void mgos_config_set_watson_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->watson.ca_cert, v); }

/* mjs */
const struct mgos_config_mjs *mgos_config_get_mjs(const struct mgos_config *cfg) { return &cfg->mjs; }

/* mjs.generate_jsc */
int mgos_config_get_mjs_generate_jsc(const struct mgos_config *cfg) { return cfg->mjs.generate_jsc; }
int mgos_config_get_default_mjs_generate_jsc(void) { return true; }
void mgos_config_set_mjs_generate_jsc(struct mgos_config *cfg, int v) { cfg->mjs.generate_jsc = v; }

/* board */
const struct mgos_config_board *mgos_config_get_board(const struct mgos_config *cfg) { return &cfg->board; }

/* board.led1 */
const struct mgos_config_board_led1 *mgos_config_get_board_led1(const struct mgos_config *cfg) { return &cfg->board.led1; }

/* board.led1.pin */
int mgos_config_get_board_led1_pin(const struct mgos_config *cfg) { return cfg->board.led1.pin; }
int mgos_config_get_default_board_led1_pin(void) { return 13; }
void mgos_config_set_board_led1_pin(struct mgos_config *cfg, int v) { cfg->board.led1.pin = v; }

/* board.led1.active_high */
int mgos_config_get_board_led1_active_high(const struct mgos_config *cfg) { return cfg->board.led1.active_high; }
int mgos_config_get_default_board_led1_active_high(void) { return true; }
void mgos_config_set_board_led1_active_high(struct mgos_config *cfg, int v) { cfg->board.led1.active_high = v; }

/* board.led2 */
const struct mgos_config_board_led2 *mgos_config_get_board_led2(const struct mgos_config *cfg) { return &cfg->board.led2; }

/* board.led2.pin */
int mgos_config_get_board_led2_pin(const struct mgos_config *cfg) { return cfg->board.led2.pin; }
int mgos_config_get_default_board_led2_pin(void) { return -1; }
void mgos_config_set_board_led2_pin(struct mgos_config *cfg, int v) { cfg->board.led2.pin = v; }

/* board.led2.active_high */
int mgos_config_get_board_led2_active_high(const struct mgos_config *cfg) { return cfg->board.led2.active_high; }
int mgos_config_get_default_board_led2_active_high(void) { return true; }
void mgos_config_set_board_led2_active_high(struct mgos_config *cfg, int v) { cfg->board.led2.active_high = v; }

/* board.led3 */
const struct mgos_config_board_led3 *mgos_config_get_board_led3(const struct mgos_config *cfg) { return &cfg->board.led3; }

/* board.led3.pin */
int mgos_config_get_board_led3_pin(const struct mgos_config *cfg) { return cfg->board.led3.pin; }
int mgos_config_get_default_board_led3_pin(void) { return -1; }
void mgos_config_set_board_led3_pin(struct mgos_config *cfg, int v) { cfg->board.led3.pin = v; }

/* board.led3.active_high */
int mgos_config_get_board_led3_active_high(const struct mgos_config *cfg) { return cfg->board.led3.active_high; }
int mgos_config_get_default_board_led3_active_high(void) { return true; }
void mgos_config_set_board_led3_active_high(struct mgos_config *cfg, int v) { cfg->board.led3.active_high = v; }

/* board.btn1 */
const struct mgos_config_board_btn1 *mgos_config_get_board_btn1(const struct mgos_config *cfg) { return &cfg->board.btn1; }

/* board.btn1.pin */
int mgos_config_get_board_btn1_pin(const struct mgos_config *cfg) { return cfg->board.btn1.pin; }
int mgos_config_get_default_board_btn1_pin(void) { return 0; }
void mgos_config_set_board_btn1_pin(struct mgos_config *cfg, int v) { cfg->board.btn1.pin = v; }

/* board.btn1.pull_up */
int mgos_config_get_board_btn1_pull_up(const struct mgos_config *cfg) { return cfg->board.btn1.pull_up; }
int mgos_config_get_default_board_btn1_pull_up(void) { return true; }
void mgos_config_set_board_btn1_pull_up(struct mgos_config *cfg, int v) { cfg->board.btn1.pull_up = v; }

/* board.btn2 */
const struct mgos_config_board_btn2 *mgos_config_get_board_btn2(const struct mgos_config *cfg) { return &cfg->board.btn2; }

/* board.btn2.pin */
int mgos_config_get_board_btn2_pin(const struct mgos_config *cfg) { return cfg->board.btn2.pin; }
int mgos_config_get_default_board_btn2_pin(void) { return -1; }
void mgos_config_set_board_btn2_pin(struct mgos_config *cfg, int v) { cfg->board.btn2.pin = v; }

/* board.btn2.pull_up */
int mgos_config_get_board_btn2_pull_up(const struct mgos_config *cfg) { return cfg->board.btn2.pull_up; }
int mgos_config_get_default_board_btn2_pull_up(void) { return false; }
void mgos_config_set_board_btn2_pull_up(struct mgos_config *cfg, int v) { cfg->board.btn2.pull_up = v; }

/* board.btn3 */
const struct mgos_config_board_btn3 *mgos_config_get_board_btn3(const struct mgos_config *cfg) { return &cfg->board.btn3; }

/* board.btn3.pin */
int mgos_config_get_board_btn3_pin(const struct mgos_config *cfg) { return cfg->board.btn3.pin; }
int mgos_config_get_default_board_btn3_pin(void) { return -1; }
void mgos_config_set_board_btn3_pin(struct mgos_config *cfg, int v) { cfg->board.btn3.pin = v; }

/* board.btn3.pull_up */
int mgos_config_get_board_btn3_pull_up(const struct mgos_config *cfg) { return cfg->board.btn3.pull_up; }
int mgos_config_get_default_board_btn3_pull_up(void) { return false; }
void mgos_config_set_board_btn3_pull_up(struct mgos_config *cfg, int v) { cfg->board.btn3.pull_up = v; }
bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value) {
  return mgos_config_get(key, value, &mgos_sys_config, mgos_config_schema());
}
bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings) {
  return mgos_config_set(key, value, &mgos_sys_config, mgos_config_schema(), free_strings);
}

const struct mgos_conf_entry *mgos_config_schema(void) {
  return mgos_config_get_schema();
}

/* Strings */
static const char *mgos_config_str_table[] = {
  "%.*s/rpc",
  "*",
  "/",
  "/mqtt",
  "192.168.4.1",
  "192.168.4.100",
  "192.168.4.2",
  "255.255.255.0",
  "80",
  "BGN",
  "Mongoose",
  "Mongoose_??????",
  "RPC",
  "ca.pem",
  "esp32_??????",
  "mOS-esp32-??????",
  "mqtt.eclipseprojects.io:1883",
  "mqtt.googleapis.com",
  "rpc",
  "time.google.com",
  "wss://mdash.net/api/v2/rpc",
};

bool mgos_config_is_default_str(const char *s) {
  int num_str = (sizeof(mgos_config_str_table) / sizeof(mgos_config_str_table[0]));
  for (int i = 0; i < num_str; i++) {
    if (mgos_config_str_table[i] == s) return true;
  }
  return false;
}
