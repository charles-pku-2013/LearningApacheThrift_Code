/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package myfirst;


import java.util.Map;
import java.util.HashMap;
import org.apache.thrift.TEnum;

public enum MyEnum implements org.apache.thrift.TEnum {
  ENUM1(0),
  ENUM2(1),
  ENUM3(2);

  private final int value;

  private MyEnum(int value) {
    this.value = value;
  }

  /**
   * Get the integer value of this enum value, as defined in the Thrift IDL.
   */
  public int getValue() {
    return value;
  }

  /**
   * Find a the enum type by its integer value, as defined in the Thrift IDL.
   * @return null if the value is not found.
   */
  public static MyEnum findByValue(int value) { 
    switch (value) {
      case 0:
        return ENUM1;
      case 1:
        return ENUM2;
      case 2:
        return ENUM3;
      default:
        return null;
    }
  }
}