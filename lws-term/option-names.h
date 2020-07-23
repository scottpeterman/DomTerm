/*#define OPTION_NUMBER_TYPE*/
/*#define OPTION_MISC_TYPE*/
OPTION_S(default_frontend, "frontend.default", OPTION_MISC_TYPE)
OPTION_S(shell_command, "shell.default", OPTION_MISC_TYPE)
OPTION_S(command_firefox, "command.firefox", OPTION_MISC_TYPE)
OPTION_S(command_chrome, "command.chrome", OPTION_MISC_TYPE)
OPTION_S(command_electron, "command.electron", OPTION_MISC_TYPE)
OPTION_S(command_ssh, "command.ssh", OPTION_MISC_TYPE)
OPTION_S(command_remote_domterm, "command.remote-domterm", OPTION_MISC_TYPE)
/*OPTION_S(window_geometry, "geometry", OPTION_MISC_TYPE)*/
OPTION_S(geometry, "geometry", OPTION_MISC_TYPE)
OPTION_S(openfile_application, "open.file.application", OPTION_MISC_TYPE)
OPTION_S(openlink_application, "open.link.application", OPTION_MISC_TYPE)

/* front-end options */
OPTION_F(style_user, "style.user", OPTION_MISC_TYPE)
OPTION_F(style_dark, "style.dark", OPTION_MISC_TYPE)
OPTION_F(style_caret, "style.caret", OPTION_MISC_TYPE)
OPTION_F(style_qt, "style.qt", OPTION_MISC_TYPE)
OPTION_F(keymap_master, "keymap.master", OPTION_MISC_TYPE)
OPTION_F(keymap_line_edit, "keymap.line-edit", OPTION_MISC_TYPE)
OPTION_F(debug_input_extra_delay, "debug.input.extra-delay", OPTION_NUMBER_TYPE)
OPTION_F(predicted_input_timeout, "predicted-input-timeout", OPTION_NUMBER_TYPE)
OPTION_F(history_storage_key, "history.storage-key", OPTION_STRING_TYPE)
OPTION_F(history_storage_max, "history.storage-max", OPTION_NUMBER_TYPE)
OPTION_F(password_hide_char, "password-hide-char", OPTION_STRING_TYPE)
OPTION_F(password_show_char_timeout, "password-show-char-timeout", OPTION_NUMBER_TYPE)
OPTION_F(terminal_minimum_width, "terminal.minimum-width", OPTION_NUMBER_TYPE)
