
Import("env", "projenv")

env.Append(CPPDEFINES=[
    ("CPPDEF_GLOBAL", env.StringifyMacro('injected1..')),
])

# append extra flags to only project build environment
projenv.Append(CPPDEFINES=[
  ("CPPDEF_PROJECT", env.StringifyMacro('injected2..'))
])

with open(file="./env_dump.txt",
            mode="w",
            encoding="utf8"
            ) as tmp_log_file:

    tmp_log_file.write(env.Dump())


with open(file="./projenv_dump.txt",
            mode="w",
            encoding="utf8"
            ) as tmp_log_file:

    tmp_log_file.write(projenv.Dump())
