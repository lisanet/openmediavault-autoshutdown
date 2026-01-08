set -e

. /usr/share/openmediavault/scripts/helper-functions

SERVICE_XPATH_NAME="autoshutdown"
SERVICE_XPATH="/config/services/${SERVICE_XPATH_NAME}"

omv_config_add_key "${SERVICE_XPATH}" "checkplex" "0"
omv_config_add_key "${SERVICE_XPATH}" "plextoken" ""

exit 0