#!/usr/bin/env python

import os
import BaseHTTPServer
import CGIHTTPServer

class Handler(CGIHTTPServer.CGIHTTPRequestHandler):
  cgi_directories  = ['/']

print "Starting server on port 8080..."

BaseHTTPServer.HTTPServer(('', 8080), Handler).serve_forever()
