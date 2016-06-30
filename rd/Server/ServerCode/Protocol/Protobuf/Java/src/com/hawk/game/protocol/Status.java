// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Status.proto

package com.hawk.game.protocol;

public final class Status {
  private Status() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
  }
  /**
   * Protobuf enum {@code errorMask}
   */
  public enum errorMask
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>NORMAL_ERROR = 65536;</code>
     */
    NORMAL_ERROR(0, 65536),
    /**
     * <code>LOGIN_ERROR = 131072;</code>
     */
    LOGIN_ERROR(1, 131072),
    /**
     * <code>ROLE_ERROR = 196608;</code>
     */
    ROLE_ERROR(2, 196608),
    /**
     * <code>MONSTER_ERROR = 262144;</code>
     */
    MONSTER_ERROR(3, 262144),
    ;

    /**
     * <code>NORMAL_ERROR = 65536;</code>
     */
    public static final int NORMAL_ERROR_VALUE = 65536;
    /**
     * <code>LOGIN_ERROR = 131072;</code>
     */
    public static final int LOGIN_ERROR_VALUE = 131072;
    /**
     * <code>ROLE_ERROR = 196608;</code>
     */
    public static final int ROLE_ERROR_VALUE = 196608;
    /**
     * <code>MONSTER_ERROR = 262144;</code>
     */
    public static final int MONSTER_ERROR_VALUE = 262144;


    public final int getNumber() { return value; }

    public static errorMask valueOf(int value) {
      switch (value) {
        case 65536: return NORMAL_ERROR;
        case 131072: return LOGIN_ERROR;
        case 196608: return ROLE_ERROR;
        case 262144: return MONSTER_ERROR;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<errorMask>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static com.google.protobuf.Internal.EnumLiteMap<errorMask>
        internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<errorMask>() {
            public errorMask findValueByNumber(int number) {
              return errorMask.valueOf(number);
            }
          };

    public final com.google.protobuf.Descriptors.EnumValueDescriptor
        getValueDescriptor() {
      return getDescriptor().getValues().get(index);
    }
    public final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptorForType() {
      return getDescriptor();
    }
    public static final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptor() {
      return com.hawk.game.protocol.Status.getDescriptor().getEnumTypes().get(0);
    }

    private static final errorMask[] VALUES = values();

    public static errorMask valueOf(
        com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
      if (desc.getType() != getDescriptor()) {
        throw new java.lang.IllegalArgumentException(
          "EnumValueDescriptor is not for this type.");
      }
      return VALUES[desc.getIndex()];
    }

    private final int index;
    private final int value;

    private errorMask(int index, int value) {
      this.index = index;
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:errorMask)
  }

  /**
   * Protobuf enum {@code error}
   */
  public enum error
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>NONE_ERROR = 0;</code>
     *
     * <pre>
     * 没有错误
     * </pre>
     */
    NONE_ERROR(0, 0),
    /**
     * <code>CONFIG_ERROR = 1;</code>
     *
     * <pre>
     * 配置文件错误
     * </pre>
     */
    CONFIG_ERROR(1, 1),
    /**
     * <code>ONLINE_MAX_LIMIT = 2;</code>
     *
     * <pre>
     * 在线人数达到上限
     * </pre>
     */
    ONLINE_MAX_LIMIT(2, 2),
    /**
     * <code>REGISTER_MAX_LIMIT = 3;</code>
     *
     * <pre>
     * 注册人数达到上限
     * </pre>
     */
    REGISTER_MAX_LIMIT(3, 3),
    /**
     * <code>SERVER_GRAY_STATE = 4;</code>
     *
     * <pre>
     * 服务器灰度状态中
     * </pre>
     */
    SERVER_GRAY_STATE(4, 4),
    /**
     * <code>DATA_BASE_ERROR = 5;</code>
     *
     * <pre>
     * 数据库错误
     * </pre>
     */
    DATA_BASE_ERROR(5, 5),
    /**
     * <code>SERVER_ERROR = 100;</code>
     *
     * <pre>
     * 服务器错误
     * </pre>
     */
    SERVER_ERROR(6, 100),
    ;

    /**
     * <code>NONE_ERROR = 0;</code>
     *
     * <pre>
     * 没有错误
     * </pre>
     */
    public static final int NONE_ERROR_VALUE = 0;
    /**
     * <code>CONFIG_ERROR = 1;</code>
     *
     * <pre>
     * 配置文件错误
     * </pre>
     */
    public static final int CONFIG_ERROR_VALUE = 1;
    /**
     * <code>ONLINE_MAX_LIMIT = 2;</code>
     *
     * <pre>
     * 在线人数达到上限
     * </pre>
     */
    public static final int ONLINE_MAX_LIMIT_VALUE = 2;
    /**
     * <code>REGISTER_MAX_LIMIT = 3;</code>
     *
     * <pre>
     * 注册人数达到上限
     * </pre>
     */
    public static final int REGISTER_MAX_LIMIT_VALUE = 3;
    /**
     * <code>SERVER_GRAY_STATE = 4;</code>
     *
     * <pre>
     * 服务器灰度状态中
     * </pre>
     */
    public static final int SERVER_GRAY_STATE_VALUE = 4;
    /**
     * <code>DATA_BASE_ERROR = 5;</code>
     *
     * <pre>
     * 数据库错误
     * </pre>
     */
    public static final int DATA_BASE_ERROR_VALUE = 5;
    /**
     * <code>SERVER_ERROR = 100;</code>
     *
     * <pre>
     * 服务器错误
     * </pre>
     */
    public static final int SERVER_ERROR_VALUE = 100;


    public final int getNumber() { return value; }

    public static error valueOf(int value) {
      switch (value) {
        case 0: return NONE_ERROR;
        case 1: return CONFIG_ERROR;
        case 2: return ONLINE_MAX_LIMIT;
        case 3: return REGISTER_MAX_LIMIT;
        case 4: return SERVER_GRAY_STATE;
        case 5: return DATA_BASE_ERROR;
        case 100: return SERVER_ERROR;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<error>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static com.google.protobuf.Internal.EnumLiteMap<error>
        internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<error>() {
            public error findValueByNumber(int number) {
              return error.valueOf(number);
            }
          };

    public final com.google.protobuf.Descriptors.EnumValueDescriptor
        getValueDescriptor() {
      return getDescriptor().getValues().get(index);
    }
    public final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptorForType() {
      return getDescriptor();
    }
    public static final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptor() {
      return com.hawk.game.protocol.Status.getDescriptor().getEnumTypes().get(1);
    }

    private static final error[] VALUES = values();

    public static error valueOf(
        com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
      if (desc.getType() != getDescriptor()) {
        throw new java.lang.IllegalArgumentException(
          "EnumValueDescriptor is not for this type.");
      }
      return VALUES[desc.getIndex()];
    }

    private final int index;
    private final int value;

    private error(int index, int value) {
      this.index = index;
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:error)
  }

  /**
   * Protobuf enum {@code roleError}
   */
  public enum roleError
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>ROLE_MAX_SIZE = 196609;</code>
     *
     * <pre>
     * 账户角色数量达到上限
     * </pre>
     */
    ROLE_MAX_SIZE(0, 196609),
    /**
     * <code>ROLE_NOT_EXIST = 196610;</code>
     *
     * <pre>
     * 角色不存在
     * </pre>
     */
    ROLE_NOT_EXIST(1, 196610),
    ;

    /**
     * <code>ROLE_MAX_SIZE = 196609;</code>
     *
     * <pre>
     * 账户角色数量达到上限
     * </pre>
     */
    public static final int ROLE_MAX_SIZE_VALUE = 196609;
    /**
     * <code>ROLE_NOT_EXIST = 196610;</code>
     *
     * <pre>
     * 角色不存在
     * </pre>
     */
    public static final int ROLE_NOT_EXIST_VALUE = 196610;


    public final int getNumber() { return value; }

    public static roleError valueOf(int value) {
      switch (value) {
        case 196609: return ROLE_MAX_SIZE;
        case 196610: return ROLE_NOT_EXIST;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<roleError>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static com.google.protobuf.Internal.EnumLiteMap<roleError>
        internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<roleError>() {
            public roleError findValueByNumber(int number) {
              return roleError.valueOf(number);
            }
          };

    public final com.google.protobuf.Descriptors.EnumValueDescriptor
        getValueDescriptor() {
      return getDescriptor().getValues().get(index);
    }
    public final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptorForType() {
      return getDescriptor();
    }
    public static final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptor() {
      return com.hawk.game.protocol.Status.getDescriptor().getEnumTypes().get(2);
    }

    private static final roleError[] VALUES = values();

    public static roleError valueOf(
        com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
      if (desc.getType() != getDescriptor()) {
        throw new java.lang.IllegalArgumentException(
          "EnumValueDescriptor is not for this type.");
      }
      return VALUES[desc.getIndex()];
    }

    private final int index;
    private final int value;

    private roleError(int index, int value) {
      this.index = index;
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:roleError)
  }

  /**
   * Protobuf enum {@code monsterError}
   */
  public enum monsterError
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>MONSTER_MAX_SIZE = 262145;</code>
     *
     * <pre>
     * 账户角色数量达到上限
     * </pre>
     */
    MONSTER_MAX_SIZE(0, 262145),
    /**
     * <code>MONSTER_NOT_EXIST = 262146;</code>
     *
     * <pre>
     * 角色不存在
     * </pre>
     */
    MONSTER_NOT_EXIST(1, 262146),
    ;

    /**
     * <code>MONSTER_MAX_SIZE = 262145;</code>
     *
     * <pre>
     * 账户角色数量达到上限
     * </pre>
     */
    public static final int MONSTER_MAX_SIZE_VALUE = 262145;
    /**
     * <code>MONSTER_NOT_EXIST = 262146;</code>
     *
     * <pre>
     * 角色不存在
     * </pre>
     */
    public static final int MONSTER_NOT_EXIST_VALUE = 262146;


    public final int getNumber() { return value; }

    public static monsterError valueOf(int value) {
      switch (value) {
        case 262145: return MONSTER_MAX_SIZE;
        case 262146: return MONSTER_NOT_EXIST;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<monsterError>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static com.google.protobuf.Internal.EnumLiteMap<monsterError>
        internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<monsterError>() {
            public monsterError findValueByNumber(int number) {
              return monsterError.valueOf(number);
            }
          };

    public final com.google.protobuf.Descriptors.EnumValueDescriptor
        getValueDescriptor() {
      return getDescriptor().getValues().get(index);
    }
    public final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptorForType() {
      return getDescriptor();
    }
    public static final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptor() {
      return com.hawk.game.protocol.Status.getDescriptor().getEnumTypes().get(3);
    }

    private static final monsterError[] VALUES = values();

    public static monsterError valueOf(
        com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
      if (desc.getType() != getDescriptor()) {
        throw new java.lang.IllegalArgumentException(
          "EnumValueDescriptor is not for this type.");
      }
      return VALUES[desc.getIndex()];
    }

    private final int index;
    private final int value;

    private monsterError(int index, int value) {
      this.index = index;
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:monsterError)
  }


  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\014Status.proto*Y\n\terrorMask\022\022\n\014NORMAL_ER" +
      "ROR\020\200\200\004\022\021\n\013LOGIN_ERROR\020\200\200\010\022\020\n\nROLE_ERROR" +
      "\020\200\200\014\022\023\n\rMONSTER_ERROR\020\200\200\020*\225\001\n\005error\022\016\n\nN" +
      "ONE_ERROR\020\000\022\020\n\014CONFIG_ERROR\020\001\022\024\n\020ONLINE_" +
      "MAX_LIMIT\020\002\022\026\n\022REGISTER_MAX_LIMIT\020\003\022\025\n\021S" +
      "ERVER_GRAY_STATE\020\004\022\023\n\017DATA_BASE_ERROR\020\005\022" +
      "\020\n\014SERVER_ERROR\020d*6\n\troleError\022\023\n\rROLE_M" +
      "AX_SIZE\020\201\200\014\022\024\n\016ROLE_NOT_EXIST\020\202\200\014*?\n\014mon" +
      "sterError\022\026\n\020MONSTER_MAX_SIZE\020\201\200\020\022\027\n\021MON" +
      "STER_NOT_EXIST\020\202\200\020B\030\n\026com.hawk.game.prot",
      "ocol"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
      new com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner() {
        public com.google.protobuf.ExtensionRegistry assignDescriptors(
            com.google.protobuf.Descriptors.FileDescriptor root) {
          descriptor = root;
          return null;
        }
      };
    com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        }, assigner);
  }

  // @@protoc_insertion_point(outer_class_scope)
}
