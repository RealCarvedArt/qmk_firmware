# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   yes = Enable
#	no = Disable
BOOTMAGIC_ENABLE = yes		# Enable Bootmagic Lite
MOUSEKEY_ENABLE = no		# Mouse keys
EXTRAKEY_ENABLE = yes		# Audio control and System control
CONSOLE_ENABLE = no			# Console for debug
COMMAND_ENABLE = no			# Commands for debug and configuration
NKRO_ENABLE = no			# Enable N-Key Rollover
BACKLIGHT_ENABLE = no		# Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes		# Enable keyboard RGB underglow functionality

KEY_LOCK_ENABLE = yes		# Enable KC_LOCK support

# Caution SLEEP_LED_ENABLE uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = yes		# Sleep LED during USB suspend

# For VIA/Vial compatibility
VIA_ENABLE = yes
VIAL_ENABLE = yes
LTO_ENABLE = yes