#!/usr/bin/env python

import os
import BaseHTTPServer
import CGIHTTPServer

class Handler(CGIHTTPServer.CGIHTTPRequestHandler):
  cgi_directories  = ['/']

BaseHTTPServer.HTTPServer(('', 8080), Handler).serve_forever()
