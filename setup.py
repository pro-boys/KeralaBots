#!/usr/bin/env python3
# encoding: utf-8
# (c) Anandpskerala

from distutils.core import setup, Extension

new_module = Extension('new', sources = ['base.c'])

setup(name='KeralaBots',
      version='0.1.0',
      description='Python Telegram bot integrated in C',
      ext_modules=[new_module])
