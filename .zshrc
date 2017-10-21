# Set up the prompt
autoload -U colors && colors
PS1="%{$fg_bold[yellow]%}[%{$fg_no_bold[red]%}%w - %*%{$fg_bold[yellow]%}] %{$fg_bold[cyan]%}%n%{$fg_bold[yellow]%} on %{$fg_bold[grey]%}%m%{$fg_bold[yellow]%} in %{$fg_no_bold[green]%}%~%{$fg_bold[yellow]%} \`|> %{$fg_no_bold[white]%}"

setopt histignorealldups sharehistory

# Use emacs keybindings even if our EDITOR is set to vi
#bindkey -e

# Keep 1000 lines of history within the shell and save it to ~/.zsh_history:
HISTSIZE=9999
SAVEHIST=9999
HISTFILE=~/.zsh_history

# Use modern completion system
autoload -Uz compinit
compinit

zstyle ':completion:*' auto-description 'specify: %d'
zstyle ':completion:*' completer _expand _complete _correct _approximate
zstyle ':completion:*' format 'Completing %d'
zstyle ':completion:*' group-name ''
zstyle ':completion:*' menu select=2
if whence dircolors >/dev/null; then
  eval "$(dircolors -b)"
  zstyle ':completion:*:default' list-colors ${(s.:.)LS_COLORS}
  # alias ls='ls --color'
else
  export CLICOLOR=YES
  export LSCOLORS="Gxfxcxdxbxegedabagacad"
  zstyle ':completion:*:default' list-colors ''
fi
zstyle ':completion:*:default' list-colors ${(s.:.)LS_COLORS}
zstyle ':completion:*' list-colors ''
zstyle ':completion:*' list-prompt %SAt %p: Hit TAB for more, or the character to insert%s
zstyle ':completion:*' matcher-list '' 'm:{a-z}={A-Z}' 'm:{a-zA-Z}={A-Za-z}' 'r:|[._-]=* r:|=* l:|=*'
zstyle ':completion:*' menu select=long
zstyle ':completion:*' select-prompt %SScrolling active: current selection at %p%s
zstyle ':completion:*' use-compctl false
zstyle ':completion:*' verbose true

zstyle ':completion:*:*:kill:*:processes' list-colors '=(#b) #([0-9]#)*=0=01;31'
zstyle ':completion:*:kill:*' command 'ps -u $USER -o pid,%cpu,tty,cputime,cmd'

# Alias
#alias qwerty='setxkbmap fr'
#alias azerty='setxkbmap gb'
#alias switch_to_us='setxkbmap us'

#utils
alias 42fc='bash ~/prog/git/utils/42/42FileChecker/42FileChecker.sh'
alias spot='~/prog/git/utils/spot.sh'
alias kpid='~/prog/git/utils/kpid.sh'
alias lks='~/prog/git/utils/lks.sh'
alias src='source ~/.zshrc'
#docker
alias d='docker'
alias ds='docker service'
#/bin
alias atom='open -a Atom'

alias -s c='atom'
alias -s h='atom'
alias -s py='atom'
alias -s js='atom'
alias p3='python3'
alias p='python'
alias m='make'
alias shutdown='sudo shutdown -h now'
alias reboot='sudo shutdown -r now'
alias gccW='gcc -Wall -Werror -Wextra'
alias ls='ls -la'
alias v='vim'
alias cfbd='norminette -R CheckForbiddenSourceHeader'
#other
alias hi='fortune | cowsay | lolcat'
alias grafa='cd /usr/local/Cellar/grafana/4.1.1/share/grafana; ../../bin/grafana-server'
#git
alias g='git'
alias ga='git add'
alias gc='git commit'
alias gp='git push'
alias gs='git status'
alias grf='git checkout master && git fetch upstream && git rebase upstream/master && git checkout dev && git rebase upstream/dev'
#alias open='xdg-open'

#alias Elsa='ssh -p 4242 109.16.254.135'
#alias Alice='ssh -p 8888 109.16.254.135'
#alias Ariel='ssh -p 6666 109.16.254.135'

CDPATH=~/prog

if whence hi >/dev/null; then
	hi
fi

# Functions
function stalk() {
	if [ "$1" != "" ]
	then
		ldapsearch -H ldaps://ldap.42.fr -x -b "dc=42,dc=fr" uid="$1"
	else
		echo "Usage: stalk <uid>"
	fi
}
