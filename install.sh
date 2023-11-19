#!/bin/bash

function setup() {
    sudo echo "/usr/bin/zsh" >> /etc/shells
    chsh -s $(which zsh)
    sudo chsh -s $(which zsh)
    git submodule update --init --recursive # add repos

    buildsuckless
    startx
}


function packageInstall() {
    packages=(
        "brave-bin"
        "xorg-server"
        "xorg-xinit"
        "xorg-xrandr"
        "xorg-setxkbmap"
        "xorg-xset"

        "neovim"
        "clang"
        "npm"
        "make"
        "xwallpaper"
        "xcompmgr"
        "xsel"
        "xclip"
        "light"
        "libnotify"
        "dunst"
        "flameshot"
        "zsh"
        "zsh-syntax-highlighting-git"
        "yt-dlp"
        "newsboat"
        "yt-dlp"
        "delta-git"
        "btop"
        "xdotool"
        ""
        ""
        ""
        # ""
        # ""
        # ""
        # ""
    )

    for name in ${packages[@]}
    do
        yay -S $name --noconfirm
    done
}

function installYay() {
    if command -v git;
    then
        sudo pacman -S git --noconfirm
        cd /tmp
        git clone https://aur.archlinux.org/yay-bin
        cd yay-bin
        makepkg -si
    fi
}

# install git and yay
command -v yay || installYay

# install packages
packageInstall
setup
