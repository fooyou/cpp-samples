## shell 命令

	# 可执行 shell 命令

	# 向变量一样扩展

		SHELL_IN := a
		SHELL_OUT := $(shell echo $(SHELL_IN))

	# 回车等被转换成单个空格
		shell_newline := $(shell printf 'a\nb')

## error

	# 打印错误信息并结束 make 执行

ifeq (0, 1)
	$(error Error message)
endif

## info

	# 打印信息

$(info info message before rule)

.PHONY: all

all:
	@[ ! '$(SHELL_OUT)' = 'a' ]
	@[ ! '$(shell echo a)' = 'a' ]
	@# 替换式样
	@echo patsubst:
	@echo $(patsubst %.a, %.b, a.a b.a b.b)
	@# 只能有一个 `%`:
	@echo $(patsubst %.%, %, a.a b.a b.b)
	@## 路径操作
	@### Basename
	@#移除扩展名，和 POSIX basename 做的不同
	@echo "basename:   $(basename a/b a/b.c)"
	@echo "dir:        $(dir a/b a/b/ a /)" #a a/a ./ /
	@echo "notdir      $(notdir a/b a/b/ b /)" #b b
	@echo "filter:     $(filter %.a %.b, a.a a.ab a.b )"
	@echo "filter:     $(filter-out %.a %.b, a.a a.ab a.b )"
	@## eval
	@#在回执中务必用 make 操作取代 sh 操作
	$(eval EVAL_VAR := a)
	@[ ! '$(EVAL_VAR)' = 'a' ]
	@## error
	@[ ! '$(shell_newline)' = 'a b' ]
ifeq (0, 1)
	$(error error message)
endif
	@# 这将在其他输出前被打印
	$(info info message rule)
