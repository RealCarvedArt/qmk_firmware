# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = yes       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
VIALRGB_ENABLE = yes       # Enable RGB Matrix with Vial

KEY_LOCK_ENABLE = yes     # Enable KC_LOCK support

# For VIA compatibility
VIA_ENABLE = yes
LTO_ENABLE = yes
LEADER_ENABLE = no
FAUXCLICKY_ENABLE = no
MIDI_ENABLE = no
BLUETOOTH_ENABLE = no
TERMINAL_ENABLE = no
