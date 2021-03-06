#
# Autogenerated by Thrift Compiler (0.9.2)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#

require 'thrift'
require 'mybase_types'


module Mytoolbox
  module PointType
    CITY = 0
    VILLAGE = 1
    LAKE = 2
    MOUNTAIN = 3
    LANDMARK = 4
    VALUE_MAP = {0 => "CITY", 1 => "VILLAGE", 2 => "LAKE", 3 => "MOUNTAIN", 4 => "LANDMARK"}
    VALID_VALUES = Set.new([CITY, VILLAGE, LAKE, MOUNTAIN, LANDMARK]).freeze
  end

  class Point
    include ::Thrift::Struct, ::Thrift::Struct_Union
    LATITUDE = 1
    LONGITUDE = 2
    NAME = 3
    TYPE = 4

    FIELDS = {
      LATITUDE => {:type => ::Thrift::Types::DOUBLE, :name => 'latitude'},
      LONGITUDE => {:type => ::Thrift::Types::DOUBLE, :name => 'longitude'},
      NAME => {:type => ::Thrift::Types::STRING, :name => 'name'},
      TYPE => {:type => ::Thrift::Types::I32, :name => 'type', :enum_class => ::Mytoolbox::PointType}
    }

    def struct_fields; FIELDS; end

    def validate
      unless @type.nil? || ::Mytoolbox::PointType::VALID_VALUES.include?(@type)
        raise ::Thrift::ProtocolException.new(::Thrift::ProtocolException::UNKNOWN, 'Invalid value of field type!')
      end
    end

    ::Thrift::Struct.generate_accessors self
  end

  class CoordsOutOfRange < ::Thrift::Exception
    include ::Thrift::Struct, ::Thrift::Struct_Union
    def initialize(message=nil)
      super()
      self.description = message
    end

    def message; description end

    DESCRIPTION = 1

    FIELDS = {
      DESCRIPTION => {:type => ::Thrift::Types::STRING, :name => 'description'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class NoValidRegex < ::Thrift::Exception
    include ::Thrift::Struct, ::Thrift::Struct_Union
    def initialize(message=nil)
      super()
      self.description = message
    end

    def message; description end

    DESCRIPTION = 1

    FIELDS = {
      DESCRIPTION => {:type => ::Thrift::Types::STRING, :name => 'description'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class InvalidInputString < ::Thrift::Exception
    include ::Thrift::Struct, ::Thrift::Struct_Union
    def initialize(message=nil)
      super()
      self.description = message
    end

    def message; description end

    DESCRIPTION = 1

    FIELDS = {
      DESCRIPTION => {:type => ::Thrift::Types::STRING, :name => 'description'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

end
