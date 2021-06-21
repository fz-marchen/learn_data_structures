### C++环境配置

#### mac 下的配置

```
  $ launch.json
  {
    "version": "0.2.0",
    "configurations": [
      {
        "name": "(lldb) 启动",
        "type": "cppdbg",
        "request": "launch",
        "program": "${fileDirname}/${fileBasenameNoExtension}",
        "args": [],
        "stopAtEntry": false,
        "cwd": "${workspaceFolder}",
        "environment": [],
        "externalConsole": false, // 如果要调试有输入互动的程序，那么就要从外部控制台启动；vscode的集成控制台不支持输入
        "MIMode": "lldb",
        "preLaunchTask": "g++ build active file", // 调试会话开始前执行的任务，一般为编译程序，c++为g++, c为gcc
      }
    ]
  }

  $ tasks.json
  {
    "version": "2.0.0",
    "tasks": [
        {
            "type": "shell",
            "label": "g++ build active file",
            "command": "g++",
            "args": [
                "-std=c++11",
                "-stdlib=libc++",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}",
            ],
            "options": {
              "cwd": "${workspaceFolder}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
              "kind": "build",
              "isDefault": true
            }
        },
    ]
  }
```

#### windows 下的配置

```

```
