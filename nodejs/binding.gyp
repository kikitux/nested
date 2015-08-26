{
    "targets": [
    {
        "target_name": "factorial",
        "sources": [ "factorial.cpp" ],
        "cflags" : [ "-std=c++11", "-stdlib=libc++" ],
        "conditions": [
          [ 'OS!="win"', {
            "cflags+": [ "-std=c++11" ],
            "cflags_c+": [ "-std=c++11" ],
            "cflags_cc+": [ "-std=c++11" ],
          }],
          [ 'OS=="mac"', {
            "xcode_settings": {
              "OTHER_CPLUSPLUSFLAGS" : [ "-std=c++11", "-stdlib=libc++" ],
              "OTHER_LDFLAGS": [ "-stdlib=libc++" ],
              "MACOSX_DEPLOYMENT_TARGET": "10.7"
            },
          }],
        ],
    },
    {
        "target_name": "fibonacci",
        "sources": [ "fibonacci.cpp" ],
        "cflags" : [ "-std=c++11", "-stdlib=libc++" ],
        "conditions": [
          [ 'OS!="win"', {
            "cflags+": [ "-std=c++11" ],
            "cflags_c+": [ "-std=c++11" ],
            "cflags_cc+": [ "-std=c++11" ],
          }],
          [ 'OS=="mac"', {
            "xcode_settings": {
              "OTHER_CPLUSPLUSFLAGS" : [ "-std=c++11", "-stdlib=libc++" ],
              "OTHER_LDFLAGS": [ "-stdlib=libc++" ],
              "MACOSX_DEPLOYMENT_TARGET": "10.7"
            },
          }],
        ],
    }
    ]
}
